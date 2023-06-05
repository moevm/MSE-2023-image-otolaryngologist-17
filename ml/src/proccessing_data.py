import os
from get_image_from_dicom import get_PIL_image
import pydicom

class proccessing_data:
    def __init__(self):
        self.path_sorce = "data/source/"
        self.path_proccessing = "data/proccesing/"
    def find_subdirs(self, path):
        with os.scandir(path) as files:
            subdir = [file.name for file in files if file.is_dir()]
        return subdir

    def find_files_in_dir(self, path):
        with os.scandir(path) as files:
            files = [file.name for file in files if file.is_file()]
        return files

    def create_imgs(self, path, path_save):
        if not os.path.exists(path_save):
            os.mkdir(path_save)
        for file in self.find_files_in_dir(path):
            data = pydicom.dcmread(path+file)
            im = get_PIL_image(data)
            im.save(path_save+file+'.jpeg')
        for dir in self.find_subdirs(path):
            self.create_imgs(path+dir+'/', path_save+dir+'/')

    def proccesing_data(self):
        dataset = self.find_subdirs(self.path_sorce)
        for data in dataset:
            self.create_imgs(self.path_sorce+data+'/', self.path_proccessing+data+'/')
