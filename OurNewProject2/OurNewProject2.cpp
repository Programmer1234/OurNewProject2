// OurNewProject2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>

int func() {
	std::cout << "func" << std::endl;
	return 0;
}

int main()
{
	int x;
	int * y = &x;
	x = 7;
	func();
	std::cout << "Hello world!" << std::endl;
	std::cout << x << std::endl;
	return 0;
}
