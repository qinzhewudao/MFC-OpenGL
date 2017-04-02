#pragma once


// IHpDllWin 对话框

class IHpDllWin : public CDialog
{
	DECLARE_DYNAMIC(IHpDllWin)

public:
	IHpDllWin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~IHpDllWin();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IHPDLLWIN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
