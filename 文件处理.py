# -*- coding = utf-8 -*-
# @Time : 2021/3/3 10:32
# Author : Eric
# @File : 文件处理.py
# @Software: PyCharm


f = open("text.txt", "w")

f.write("Hello World,Nice to meet you!")

f.close()


'''
f = open("text.txt", 'r')

content = f.read(4)

print(content)

content = f.read(4)

print(content)

f.close()
'''

'''
f = open("text.txt", 'w')

f.write("Hello World I am a handsome boy\n")
f.write("Hello World I am a handsome boy\n")
f.write("Hello World I am a handsome boy\n")
f.write("Hello World I am a handsome boy\n")
f.write("Hello World I am a handsome boy")

f = open("text.txt", 'r')

content = f.readlines()

i = 1
for temp in content:
    print("%d %s" % (i, temp))
    i += 1

f.close()
'''

'''
f = open("text.txt", 'r')

s = f.readline()

print(s)

s = f.readline()

print(s)

f.close()
'''

import os

os.rename("text.txt", "text1.txt")  # 重命名
