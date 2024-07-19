import inspect
from pprint import pprint


def readfile(path):
    with open(path, "r", encoding="utf-8") as file:
        return file.read()

def readfile_strip(path):
    return readfile(path).strip()


def file_lines(path):
    return readfile_strip(path).splitlines()

def file_lines_strip(path):
    return [i.strip() for i in file_lines_strip(path)]

def give_callers_path():
    caller_frame = inspect.stack()[2]
    return caller_frame.filename
def mprint(text):
    print(f"{give_callers_path()}: {text}")

def mpprint(data):
    print(give_callers_path(),end=": \n")
    pprint(data)

