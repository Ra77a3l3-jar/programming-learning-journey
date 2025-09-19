# Project 3: File Organizer

## Objective
Build a tool that automatically organizes files in a directory by their type/extension.

## Skills You'll Learn
- Working with the filesystem (`os` module)
- File path manipulation
- Dictionaries for categorization
- Exception handling
- Working with file extensions

## Requirements
1. Scan a directory for files
2. Organize files into folders based on their extensions
3. Create folders automatically if they don't exist
4. Show a summary of what was moved
5. Handle files without extensions

## Step-by-Step Guide
1. Use `os.listdir()` to get files in a directory
2. Create a dictionary mapping file extensions to folder names
3. Create folders using `os.makedirs()`
4. Move files using `shutil.move()`
5. Add logging to show what was moved

## Bonus Challenges
- Add configuration file for custom organization rules
- Add undo functionality
- Create a GUI version using tkinter
- Add duplicate file detection

## Expected Output Example
```
File Organizer
=============
Scanning directory: /Users/name/Downloads

Moving files:
- document.pdf → Documents/
- photo.jpg → Images/
- song.mp3 → Audio/

Summary:
- 15 files moved
- 3 folders created
- 2 files skipped (already organized)
```

## Files to Create
- `file_organizer.py` - Main organizer program
- `config.py` - Configuration for file type mappings

## Time Estimate
4-6 hours