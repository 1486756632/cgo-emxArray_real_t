# 前言
用matlab写了个算法，算法入参是个不定长二维数组，然后导出成c项目，golang调用c的方法。然后算法的入参就成了一个emxArray_real_t 的结构体
gcc：7.5.0
go：1.16.10

c文件打包成.so 动态链接库
gcc -fPIC -shared -o libFeatureData_FeatureIdentify.so FeatureData_FeatureIdentify.c

cgo相关是在main.go，c 方法是在  FeatureData_FeatureIdentify_d/FeatureData_FeatureIdentify.c/FeatureData_FeatureIdentify

# 总结
matlab 转c相关的结构体、方法，在c项目下面都可以找到，但是经常会报错 “undefined xxxxxx”,可以尝试吧结构体、方法拷贝到同一个c文件，然后打包成动态链接库

