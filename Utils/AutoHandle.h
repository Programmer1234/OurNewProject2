#pragma once
#include <Windows.h>

class AutoHandle
{
public:
	
	explicit AutoHandle(HANDLE h);
	
	~AutoHandle();

private:

	HANDLE m_handle;
};

