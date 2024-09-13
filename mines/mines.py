import inspect
import os
from pprint import pprint
from collections.abc import Iterable
import tkinter as tk
from tkinter import filedialog
import re

def files_in_path(path):
    return [os.path.join(path,i) for i in os.listdir(path)]


def path(path):
    if not os.path.exists(path):
        os.makedirs(path)
    return path

def readfile(path):
    with open(path, "r", encoding="utf-8") as file:
        return file.read()

def readfile_strip(path):
    return readfile(path).strip()


def writetofile(var, path, filename="", iterable=False, override=False):

        if filename:
            final_path = os.path.join(path,filename)
        else:
            final_path = path
        if not os.path.exists(final_path):
            with open(final_path, "w", encoding="utf-8") as file:
                pass
        if override:
            style = "w"
        else:
            style = "a"
        with open(final_path, style, encoding="utf-8") as file:
            if isinstance(var, str):
                file.write(var)
            elif isinstance(var, Iterable) and iterable:
                for i in var:
                    file.write(f"{i}\n")
            else:
                raise "Error"


def read_file_lines(path):
    return readfile_strip(path).splitlines()

def read_file_lines_strip(path):
    return [i.strip() for i in read_file_lines(path)]

def give_callers_path():
    caller_frame = inspect.stack()[2]
    return caller_frame.filename

def printp(text):
    print(f"{give_callers_path()}: {text}")

def pprintp(data):
    print(give_callers_path(),end=": \n")
    pprint(data)

def forprint(obj):
    for i in obj:
        print(i)

def forprintp(obj):
    print(give_callers_path(), end=": \n")
    for i in obj:
        print(i)



def select_folder(title="Select Folder"):
    root = tk.Tk()
    root.withdraw()
    selected_folder = filedialog.askdirectory(parent=root,title=title)
    return selected_folder

def select_file(title="Select File"):
    root = tk.Tk()
    root.withdraw()
    selected_file = filedialog.askopenfilename(parent=root,title=title)
    return selected_file


def select_multiple_files(title="Select Files"):
    """Opens a file dialog and allows the user to select multiple files.
    Returns a list of selected file paths."""

    root = tk.Tk()
    root.withdraw()  # Hide the main window

    selected_files = filedialog.askopenfilenames(
        parent=root,
        title=title,
        multiple=True  # Allow multiple file selection
    )

    return selected_files


def get_file_name_from_path(path):
    return os.path.basename(path).rsplit('.', 1)[0]

def get_file_extension_from_path(path):
    return os.path.basename(path).rsplit('.', 1)[1]

def cwd():
    return os.getcwd()

def remove_extra_lines(var,itreable=False):
    if itreable:
        final= []
        prev=False
        for i in var:
            if not re.sub("\n\s","",i):
                if prev:
                    continue
                else:
                    prev = True
            else:
                prev = False
            final.append(i.replace("\n"," ").strip())
        print(final)
        return final
    else:
        return re.sub("(\s*\n\s*){2,}","\n",var)
