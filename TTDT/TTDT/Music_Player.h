#include<stdio.h>
#include<windowsx.h>
#include<Windows.h>
#include "resource.h"

//��Ϣ������
BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam);
void Cls_OnClose(HWND hwnd);
void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);
