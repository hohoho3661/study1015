#pragma once

// ����� ���� �ڷ���

//enum DS_STATE
//{
//	LEFT = -1,
//	NONE,
//	RIGHT = 1
//};

//Extern

extern HWND			_hWnd;
extern HINSTANCE	_hInst;
extern POINT		_ptMouse;

#if defined(_MOVIE_TEST)
extern HWND			_hWndAvi;
#endif//



struct SPERE
{
	float x, y;
	float r;
};