// OurNewProject2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <Windows.h>

#include <iostream>

#include "AutoHandle.h"

int func() {
	std::cout << "func" << std::endl;
	return 0;
}


int main()
{
	AutoHandle autoHandle2(NULL);
	HANDLE h = NULL;
	h = CreateFileW(
		L"OURFILE.txt",
		GENERIC_WRITE,
		0,
		NULL,
		CREATE_NEW,
		//8,
		FILE_ATTRIBUTE_NORMAL,
		NULL);
	if (INVALID_HANDLE_VALUE == h) {
		DWORD err = 0;
		err = GetLastError();
		throw std::exception("failed to CreateFile");
	}
	// CreateFileSucceeded

	AutoHandle autoHandle(h);
	int x;
	int * y = &x;
	x = 7;
	func();
	std::cout << "Hello world!" << std::endl;
	std::cout << x << std::endl;
	return 0;
}
