import os

with open("input.txt", encoding="gbk") as f:
    prev, num = "start", 0
    for name in f.readlines():
        name = name[:-1]
        if name != prev:
            num = 1
        else:
            num += 1
        print("S{0}MUT{1}.fasta.txt".format(name, num))