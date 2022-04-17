import os
import sys

template = 'template.cpp'
list_of_files = ['A.cpp', 'B.cpp', 'C.cpp', 'D.cpp']

# def writing(file):
# 	file = open(file, 'w')
# 	for line in template:
# 		file.write(line)
# 	file.close()


# for i in range(len(list_of_files)):
# 	writing(list_of_files[i])


for f in list_of_files:
	intput_file = open(template, 'r')
	output_file = open(f, 'w')
	for line in intput_file:
		output_file.write(line)