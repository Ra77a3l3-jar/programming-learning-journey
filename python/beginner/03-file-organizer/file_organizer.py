import os
import shutil

def genDirs():

    print("Creating directories")
    directories = ["Documents", "Audio_Video", "Coding", "Binaries", "Images"]
    parent_dir = os.getcwd()

    for i in directories:
        path = os.path.join(parent_dir, i)
        os.makedirs(path, exist_ok=True)
        print(f"Directory {i} created")

    print('='*20)

def mapping():

    docs = ('.docx', '.doc', '.txt', '.pdf', '.ppt', '.md')
    code = ('.py', '.c', '.java', '.rs', '.zig', '.cpp', '.s')
    image = ('.pgn', '.jpeg', '.svg', '.jpg', '.gif')
    video_audio = ('.mp4', '.mp3')
    binaries = ('.bin', '.exe', '.deb', '.rmp')

    ext_to_dir = {}
    for ext in docs:
        ext_to_dir[ext] = "Documents"
    for ext in code:
        ext_to_dir[ext] = "Coding"
    for ext in image:
        ext_to_dir[ext] = "Images"
    for ext in video_audio:
        ext_to_dir[ext] = "Audio_Video"
    for ext in binaries:
        ext_to_dir[ext] = "Binaries"

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
                    else:
                        print(f"Skipping {e.name}: extension {ext} not recognized.")
                        
    except PermissionError:
        print("Permission Denied!")
    except FileNotFoundError:
        print("Directory not found!")


if __name__  == "__main__":
    main()
