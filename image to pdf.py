import os
from mines import mines

import tkinter as tk
from tkinter import filedialog

def select_folder():
    selected_folder = filedialog.askdirectory()
    if selected_folder:
        # Do something with the selected folder path here
        return selected_folder

# Create the main window (optional)
root = tk.Tk()
root.withdraw()  # Hide the main window

# Call the function to select the folder


folder_path = select_folder()
files = mines.files_in_path(folder_path)
bad_file_types=[".py",".hocr",".pdf"]
files= [i for i in files if "."+i.rsplit(".",1)[-1] not in bad_file_types]
print(files)


extension = None
for i in files:
    i_ext = "."+i.rsplit(".",1)[-1]
    extension = i_ext
print(f"Image extension : {extension}")
print(int(files[0].rsplit("_page_",1)[-1].removesuffix(extension)))
files.sort(key=lambda name: int(name.rsplit("_page_",1)[1].removesuffix(extension)))

print(files)

import img2pdf

with open("340.YAS.2020_1594374978.pdf", 'wb') as f:
    f.write(img2pdf.convert(files))
