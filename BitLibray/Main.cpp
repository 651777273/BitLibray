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
	//���ڰ�����⵽�Լ��Ĵ��룬ʹ��namespace�����Լ��������ռ䣬��������ʹ������еĺ���
	//һ�����Խ���������Э�����κα���ת����string�Ļ��ຯ��
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

	//�쳣����ѧϰʾ��

	int x = 50;
	int y = 0;
	double z = 0;

	//���û���쳣������ô����������y��0��ʱ�򣬱�������Ǽ�ⲻ���ģ������ֱ�ӱ�����
	//cout << x / y << endl;
	//����ʹ���쳣�Ļ���������������
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