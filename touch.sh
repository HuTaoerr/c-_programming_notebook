#!/bin/bash

# 获取创建路径
# echo "请输入创建的文件将要存放路径：比如./part-02/Testing"
# read a
a="./part-04/Testing" 
# a="./part-04/Example" 

# 获取创建的文件前缀
# echo "请输入文件名前部："
# read b
b="T4-"
# b="E4-"


#获取增加的序号
echo "请输入文件名后部："
read c

#文件后缀
# echo "请输入文件名后缀："
# read d
d=".cpp"

for ((i = $c; i <= $c + 5; i++)); do
    touch "${a}/${b}${i}${d}"
    echo "
    #include <iostream> 
    using namespace std; 

    int main()
    {
        return 0;
    }" > "${a}/${b}${i}${d}"
done
