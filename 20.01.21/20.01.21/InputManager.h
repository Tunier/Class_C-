#pragma once
#include "Headers.h"

class InputManager
{
private:
	static InputManager* m_pInstance;
public:
	static InputManager* GetInstance()
	{
		if (m_pInstance == NULL)
		{
			m_pInstance = new InputManager;
		}
		return m_pInstance;
	}
private:
	DWORD dwKey;
public:
	DWORD GetKey() { return dwKey; }
	void CheckKey();
};

