#include "bitprint.h"

//将字符串中的内容按 16进制的形式输出
namespace Hanoch
{
	string print_bin(const string &str)
	{
		string str_out;
		for (int i = 0; i < str.size(); i++)
		{
			int temp = str[i] >> 4;
			temp = temp & 0x0f;
			switch (temp) {
			case 0x0: str_out += "0"; break;//也可以是字符'0'
			case 0x1: str_out += "1"; break;
			case 0x2: str_out += "2"; break;
			case 0x3: str_out += "3"; break;
			case 0x4: str_out += "4"; break;
			case 0x5: str_out += "5"; break;
			case 0x6: str_out += "6"; break;
			case 0x7: str_out += "7"; break;
			case 0x8: str_out += "8"; break;
			case 0x9: str_out += "9"; break;
			case 0xa: str_out += "A"; break;
			case 0xb: str_out += "B"; break;
			case 0xc: str_out += "C"; break;
			case 0xd: str_out += "D"; break;
			case 0xe: str_out += "E"; break;
			case 0xf: str_out += "F"; break;
			}
			temp = str[i] & 0x0f;
			switch (temp) {
			case 0x0: str_out += "0 "; break;
			case 0x1: str_out += "1 "; break;
			case 0x2: str_out += "2 "; break;
			case 0x3: str_out += "3 "; break;
			case 0x4: str_out += "4 "; break;
			case 0x5: str_out += "5 "; break;
			case 0x6: str_out += "6 "; break;
			case 0x7: str_out += "7 "; break;
			case 0x8: str_out += "8 "; break;
			case 0x9: str_out += "9 "; break;
			case 0xa: str_out += "A "; break;
			case 0xb: str_out += "B "; break;
			case 0xc: str_out += "C "; break;
			case 0xd: str_out += "D "; break;
			case 0xe: str_out += "E "; break;
			case 0xf: str_out += "F "; break;
			}
		}
		//str_out += '\12';
		return str_out;
	}

	string print_bin(const unsigned int inint)
	{
		char tempchar;
		string str_out;
		for (int i = sizeof(inint) - 1; i >= 0; i--)
		{
			tempchar = inint >> (i * 8);
			tempchar = tempchar & 0xff;
			str_out += tempchar;
		}
		return print_bin(str_out);
	}

	string print_bin(const unsigned short int inint)
	{
		char tempchar;
		string str_out;
		for (int i = sizeof(inint) - 1; i >= 0; i--)
		{
			tempchar = inint >> (i * 8);
			tempchar = tempchar & 0xff;
			str_out += tempchar;
		}
		return print_bin(str_out);
	}


	string print_bin(const unsigned long long inint)
	{
		char tempchar;
		string str_out;
		for (int i = sizeof(inint) - 1; i >= 0; i--)
		{
			tempchar = unsigned char(inint >> (i * 8));
			tempchar = tempchar & 0xff;
			str_out += tempchar;
		}
		return print_bin(str_out);
	}

	string print_bin(const unsigned char inint)
	{

		string str_out;
		str_out += inint;
		return print_bin(str_out);
	}

}
