import os
import shutil
from config import FILE_TYPE_MAPPINGS

def genDirs():

    print("Creating directories")
    directories = list(FILE_TYPE_MAPPINGS.keys())
    parent_dir = os.getcwd()

    for i in directories:
        path = os.path.join(parent_dir, i)
        os.makedirs(path, exist_ok=True)
        print(f"Directory {i} created")

    print('='*20)

def mapping():
    ext_to_dir = {}
    for folder, extensions in FILE_TYPE_MAPPINGS.items():
        for ext in extensions:
            ext_to_dir[ext.lower()] = folder
    return ext_to_dir

def menu():
    print("File Organizer")
    print('='*15)

def printDir():
    currDir = os.getcwd()
    print(f"\nScannid directory: {currDir}\n")
    

def main():

    menu()
    printDir()
    ext_to_dir = mapping()
    genDirs()

    try:
        with os.scandir('.') as dir:
            for e in dir:
                if e.is_file():
                    _, ext =os.path.splitext(e.name)
                    ext = ext.lower()
                    if ext in ext_to_dir:
                        dest_folder = ext_to_dir[ext]
                        shutil.move(e.path, os.path.join(dest_folder, e.name))
                        print(f"Moving {e.name} → {dest_folder}/")
                    else:
                        print(f"Skipping {e.name} (unknown file type)")
                        
    except PermissionError:
        print("Permission Denied!")
    except FileNotFoundError:
        print("Directory not found!")


if __name__  == "__main__":
    main()
