
// mediaPlayer.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CmediaPlayerApp:
// �� Ŭ������ ������ ���ؼ��� mediaPlayer.cpp�� �����Ͻʽÿ�.
//

class CmediaPlayerApp : public CWinApp
{
public:
	CmediaPlayerApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CmediaPlayerApp theApp;