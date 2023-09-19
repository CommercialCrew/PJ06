// CModeless.cpp: 구현 파일
//

#include "pch.h"
#include "PJ06.h"
#include "afxdialogex.h"
#include "CModeless.h"
#include "PJ06Dlg.h"


// CModeless 대화 상자

IMPLEMENT_DYNAMIC(CModeless, CDialogEx)

CModeless::CModeless(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DLG_MODELESS, pParent)
	, m_Str(_T(""))
{

}

CModeless::~CModeless()
{
}

void CModeless::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Str);
}


BEGIN_MESSAGE_MAP(CModeless, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CModeless::OnBnClickedButton1)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// CModeless 메시지 처리기


void CModeless::OnBnClickedButton1()
{
	UpdateData(true);
	CPJ06Dlg* p = (CPJ06Dlg*) GetParent();
	p->m_List.AddString(m_Str);
	
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CModeless::OnClose()
{
	DestroyWindow();
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CDialogEx::OnClose();
}


void CModeless::PostNcDestroy()
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	CDialogEx::PostNcDestroy();
}
