#include "BitLibray.h"
//将字符串中的内容按 16进制的形式输出
//将一个字节的内存以16进制字符形式展现出来

string print_bin(const unsigned char inchar)
{
	string str_return_data;
	unsigned char c_data = inchar>>4;
	if (c_data <= 9)
	{
		str_return_data += c_data + 0x30;		
	}
	else
	{
		str_return_data += c_data + 0x37;	
	}
	c_data = inchar & 0x0f;
	if (c_data <= 9)
	{
		str_return_data += c_data + 0x30;		
	}
	else
	{
		str_return_data += c_data + 0x37;	
	}
	str_return_data += 0x20;

	return str_return_data;
}

//先将string拆分成char，再调用上面的函数，将char中内存的数值按16进制的字符打印出来
string print_bin(const string &str)
{
	string str_return_data;
	unsigned char inchar;
	for (unsigned int i = 0;i < str.size();i++)
	{
		inchar = str[i];
		str_return_data += print_bin(inchar);
	}

	return str_return_data;
}
//先将int拆分成char，再调用第一个函数，将char中内存的数值按16进制的字符打印出来
string print_bin(const unsigned int inint)
{

	string str_return_data;
	unsigned char inchar;
	for (int i=sizeof(inint)-1;i>=0;i--)
	{
		inchar = inint >> (i*8);
		inchar =  inchar & 0xff;
		str_return_data += print_bin(inchar);
	}
	return str_return_data;
}

string print_bin(const unsigned short int inint)
{
	string str_return_data;
	unsigned char inchar;
	for (int i=sizeof(inint)-1;i>=0;i--)
	{
		inchar = inint >> (i*8);
		inchar =  inchar & 0xff;
		str_return_data += print_bin(inchar);
	}
	return str_return_data;
}

string print_bin(const unsigned long long inint)
{
	string str_return_data;
	unsigned char inchar;
	for (int i=sizeof(inint)-1;i>=0;i--)
	{
		inchar = unsigned char(inint >> (i*8));
		inchar =  inchar & 0xff;
		str_return_data += print_bin(inchar);
	}
	return str_return_data;
}
