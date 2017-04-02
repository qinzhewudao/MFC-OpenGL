// IHpDllWin.cpp : 实现文件
//

#include "stdafx.h"
#include "MyDLL.h"
#include "IHpDllWin.h"
#include "afxdialogex.h"


// IHpDllWin 对话框

IMPLEMENT_DYNAMIC(IHpDllWin, CDialog)

IHpDllWin::IHpDllWin(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_IHPDLLWIN, pParent)
{

}

IHpDllWin::~IHpDllWin()
{
}

void IHpDllWin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(IHpDllWin, CDialog)
END_MESSAGE_MAP()


// IHpDllWin 消息处理程序
// 定义导出接口

extern "C" __declspec(dllexport) IHpDllWin* ShowDialog()

{

	// 切记，此处需要加下面这行代码，不然对话框显示不出来。

	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	IHpDllWin *ph = new IHpDllWin;

	ph->Create(IHpDllWin::IDD);

	ph->ShowWindow(SW_SHOW);

	return ph;

}