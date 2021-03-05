# -*- coding = utf-8 -*-
# @Time : 2021/3/4 16:19
# Author : Eric
# @File : 文件处理作业.py
# @Software: PyCharm

'''
f = open("gushi.txt", "w")

f.write("草长莺飞二月天，菩提杨柳醉春艳。儿童放学归来早，忙趁东风放纸鸢。")

f.close()
'''

f = open("gushi.txt", "r")

content = f.readlines()

i = 1

for temp in content:
    print("%d %s" % (i, temp))
    i += 1

f.close()
