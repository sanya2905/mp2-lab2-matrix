// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include "tmatrix.h"
#include <Windows.h>
//---------------------------------------------------------------------------

#pragma comment(lib, "user32.lib")

void main()
{
	keybd_event(VK_NUMLOCK, 0x45, KEYEVENTF_EXTENDEDKEY, 0);
	keybd_event(VK_NUMLOCK, 0x45, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
}
//---------------------------------------------------------------------------
