#pragma once

// ����� ���� ���� ����

#define _MOVIE_TEST
//#define _RENDER_TEST
//#define _CROP_TEST
//#define _FRAME_TEST
//#define _TRIFUNC_TEST
//#define _STALKER_TEST
//#define _ANI_TEST
//#define _CAMERA_TEST
//#define _PIXEL_TEST
//#define _EFFECT_TEST
//#define _ALPHA_TEST


#define PI			3.141592
#define PI2			PI*2
#define COLOR_M		RGB(255,0,255)


// ============== �ΰ��� ���ڼ��� �����ϰ� ������? ( �����ڵ�, ��Ƽ������ ) =======================
#if defined(_UNICODE)
	typedef std::wstring	tstring;	//std::basic_string<wchar>
#else
	typedef std::string		tstring;	//std::basic_string<char>
#endif // #if defined(_UNICODE)


// �ùٷ�
#define SIVASPEED	5
#define SIVAPUSH	50


// �޸� ���� ��ũ��
// Backbuffer
#define SAFE_DELETE(p)	{if(p) {delete(p);(p) = NULL;}}
#define SAFE_RELEASE(p)	{if(p) {(p)->Release(); (p) = NULL;}}

// ������ ������ ���� ��ũ��
#define WINSTYLE	WS_CAPTION | WS_SYSMENU

#define WINSIZEX	800
#define WINSIZEY	600
#define WINSTARTX	100
#define WINSTARTY	100

// �̱��� ��ü ��ũ��
#define RAND			RandomFunction::getSingleton()
#define CAMERA			Camera::getSingleton()

#define IMAGEMANAGER	ImageManager::getSingleton()
#define KEYMANAGER		KeyManager::getSingleton()
#define TIMEMANAGER		TimeManager::getSingleton()
#define EFFECTMANAGER	EffectManager::getSingleton()
#define SCENEMANAGER	SceneManager::getSingleton()
#define SOUNDMANAGER	SoundManager::getSingleton()
#define TXTDATA			TextData::getSingleton()
#define ANIMANAGER		AniManager::getSingleton()