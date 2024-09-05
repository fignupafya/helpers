import inspect
import os
from pprint import pprint
from collections.abc import Iterable
import tkinter as tk
from tkinter import filedialog

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


def writetofile(var, path, filename="", lines=False, override=False):
        if filename:
            final_path = os.path.join(path,filename)
        else:
            final_path = path
        try:
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
                elif isinstance(var, Iterable) and lines:
                    for i in var:
                        file.write(f"{i}\n")
        except Exception as e:
            return e

def file_lines(path):
    return readfile_strip(path).splitlines()

def file_lines_strip(path):
    return [i.strip() for i in file_lines(path)]

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



def select_folder():
    root = tk.Tk()
    root.withdraw()
    selected_folder = filedialog.askdirectory()
    return selected_folder

def select_file():
    root = tk.Tk()
    root.withdraw()
    selected_file = filedialog.askopenfilename()
    return selected_file

def get_file_name_from_path(path):
    return os.path.basename(path).rsplit('.', 1)[0]

def get_file_extension_from_path(path):
    return os.path.basename(path).rsplit('.', 1)[1]

