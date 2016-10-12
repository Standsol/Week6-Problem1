#include <iostream>
#include <string>

template<class T_CLASS>
void print(const T_CLASS& i)
{
	std::cout << i << std::endl;
}
//void print(const int& i)
//{
//	std::cout << i << std::endl;
//}
//
//void print(const float& i)
//{
//	std::cout << i << std::endl;
//}
//
//void print(const std::string& i)
//{
//	std::cout << i << std::endl;
//}

int main()
{
	print(1);
	print(2.345f);
	print("Hello World");

	return 0;
}
