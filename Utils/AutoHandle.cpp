#include "stdafx.h"
#include "AutoHandle.h"

#include <exception>

#include <Windows.h>

AutoHandle::AutoHandle(HANDLE h)
	: m_handle(h)
{
}


AutoHandle::~AutoHandle()
{
	try {
		BOOL res = FALSE;
		res = CloseHandle(m_handle);
		if (0 == res) {
			// This function fails. handling error.
			DWORD err = 0;
			err = GetLastError();
			throw std::exception("error in CloseHandle");
		}
	} catch (...) {

	}
}
