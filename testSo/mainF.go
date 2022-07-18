package main

/*
// 头文件的位置，相对于源文件是当前目录，所以是 .，头文件在多个目录时写多个  #cgo CFLAGS: ...
#cgo CFLAGS: -I./FeatureData_FeatureIdentify
// 从哪里加载动态库，位置与文件名，-ladd 加载 libadd.so 文件
#cgo LDFLAGS: -L./lib -lFeatureData_FeatureIdentify -Wl,-rpath,lib
#include "FeatureData_FeatureIdentify.h"
#include "rtwtypes.h"
*/
import "C"
import (
	"fmt"
	"testSo/entity"
	"unsafe"
)

func main() {
	//val := C.Add(C.CString("go"), 2021)
	//fmt.Println("run c: ", C.GoString(val))

	//vd:=C.test(C.double(2221111),C.double(222))
	//fmt.Println(vd)
	//
	//var arr [9]C.double=[9]C.double{C.double(1),C.double(1),C.double(1),C.double(1),C.double(1),C.double(1),C.double(1),C.double(1),C.double(1)}
	//
	//arr := make([]C.double, 7)
	//
	//arr = []C.double{0.8, 0.9, 0.25, 0.6, 0.222, 0.87, 0.98,1,1}
	//
	//var r = C.deal((*C.double)(unsafe.Pointer(&arr[0])))
	//
	//fmt.Println(r)

	//var a
	//testArr:=make([][]C.double,0)
	//testArr:=[][4]C.double{}
	//testArr[1][1]=1
	//testArr[1][2]=1
	//testArr[1][3]=1
	//testArr[2][1]=2
	//testArr[2][2]=2
	//testArr[2][3]=2
	//
	//fmt.Println(testArr)
	//stringarray := [...][2]string{ //多维数组外层可以用三个点表示，内层不行
	//	{"北京", "深圳"},
	//	{"杭州", "海口"}, //末尾也要加逗号
	//}
	//
	//fmt.Println(stringarray)
	//fmt.Println(stringarray[1][0])
	//
	//stringarray１１１１ := [3][2]C.double{ //多维数组外层可以用三个点表示，内层不行
	//	{1, 1},
	//	{1, 1}, //末尾也要加逗号
	//}
	//stringarray１１１１[0][0]=1
	//
	//fmt.Println(stringarray１１１１)
	//fmt.Println(stringarray１１１１[1][0])


	testArr:=make([][]C.double,0)

	a:=[]C.double{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)
	testArr=append(testArr, a)


	en:=entity.EmxArray_real_T{}
	en.Data=testArr
	var M=[850]C.double{}
	//dealAAAA
	//arr := make([]C.double, 7)
	//arr = []C.double{0.8, 0.9, 0.25, 0.6, 0.222, 0.87, 0.98,1,1}
	//
	//var r = C.featuredata((*C.double)(unsafe.Pointer(&arr[0])))
	//fmt.Println(r)

	//val := C.dean(C.CString("go"), 2021)
	//fmt.Println("run c: ", C.GoString(val))
	//arr := make([]C.double, 7)
	//
	//arr = []C.double{0.8, 0.9, 0.25, 0.6, 0.222, 0.87, 0.98,1,1}

	//var r = C.FeatureData_FeatureIdentify((*C.double)(unsafe.Pointer(&arr[0])))
	var r = C.FeatureData_FeatureIdentify((unsafe.Pointer(&en),(*C.double)(unsafe.Pointer(&M[0])))
	fmt.Println(r)
}