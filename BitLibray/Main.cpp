#include <iostream>
#include "bitprint.h"
#include "BitLibray.h"
using namespace std;


double division(int a, int b)
{
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	return (a / b);
}

int main()
{
	//关于包含类库到自己的代码，使用namespace定义自己的命名空间，主程序中使用类库中的函数
	//一个可以将短信网关协议中任何变量转换成string的基类函数
	string str;
	str = "123456789";
	str += '\0';
	str += 0xd6;
	str.append(3,'a');

	string bcc = print_bin(str);
	cout << bcc << endl;
	
	//throw "Stop!";

	unsigned char  abc = 'A';
	cout << print_bin(abc) << endl;
	cout << Hanoch::print_bin(abc)<<endl;

	//异常处理学习示例

	int x = 50;
	int y = 0;
	double z = 0;

	//如果没有异常处理，那么遇到被除数y是0的时候，编译机制是监测不到的，程序就直接崩溃了
	//cout << x / y << endl;
	//我们使用异常的机制来避免程序崩溃
	try {
		z = division(x, y);
		cout << z << endl;
	}
	catch (const char* msg) {
		cerr << msg << endl;
	}

	try {
		if (y == 0)throw "Not ok!";
		cout << x / y << endl;
	}
	catch (const char* msg){
		cout << msg << endl;
	}


	/*
	unsigned long long int  abc1 = 232323232323;
	cout<< print_bin(abc1)<<endl;

	unsigned int  abc2 = 24;
	cout<< print_bin(abc2)<<endl;

	unsigned short  abc3 = 24;
	cout<< print_bin(abc3)<<endl;
	*/
	return 0;
	
}