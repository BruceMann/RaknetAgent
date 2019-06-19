import os
import shutil

output_dir = '../out'
output_dir_python = '../out_python'


def check_dir():
    if os.path.exists(output_dir):
        shutil.rmtree(output_dir)
    os.mkdir(output_dir)

    if os.path.exists(output_dir_python):
        shutil.rmtree(output_dir_python)
    os.mkdir(output_dir_python)


def walk_dir(dir, topdown=True):
    counter = 0
    for root, dirs, files in os.walk(dir, topdown):
        for name in files:
            if name.endswith('.proto'):
                counter = counter + 1
                print ('parsed ' + name + '.....' + str(counter) + '......completed')
                os.system('protoc --cpp_out=' + output_dir + ' ' + os.path.join(root, name))
                os.system('protoc --python_out=' + output_dir_python + ' ' + os.path.join(root, name))

check_dir()
walk_dir('.')
os.system('pause')
