#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//int main() {
//	cout << "hello world" << endl;
//	system("pause");
//	return 0;
//}

//int main() {
//	//变量创建：数据类型 变量名 = 变量初始值
//	int a = 10;
//	cout << "a=" << a << endl;
//	system("pause");
//	return 0;
//}

//常量定义
//1、宏常量
//#define Day  7	//Day是不允许被修改的，否则报错
//int main() {
//	cout << "一周有" << Day << "天" << endl;
//	//2、const修饰的变量	
//	const int month = 12;	//const修饰的变量也成为常量，不允许被修改
//	cout << "一年有" << month << "月" << endl;
//	system("pause");
//	return 0;
//}

//整型
int main() {
	//1、短整型
	short num1 = 10;
	//2、整型
	int num2 = 10;
	//3、长整型
	long num3 = 10;
	//4、长长整型
	long long num4 = 10;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	system("pause");
	return 0;
}