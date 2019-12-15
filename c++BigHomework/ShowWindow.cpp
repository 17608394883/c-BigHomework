// ShowWindow.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "c++BigHomework.h"
#include "ShowWindow.h"
#include "afxdialogex.h"
#include "resource.h"
#include "Add.h"
#include "Modify.h"

// CShowWindow �Ի���

IMPLEMENT_DYNAMIC(CShowWindow, CDialogEx)

CShowWindow::CShowWindow(CWnd* pParent /*=NULL*/)
	: CDialogEx(CShowWindow::IDD, pParent)
{

}

CShowWindow::~CShowWindow()
{
}

void CShowWindow::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CShowWindow, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_ADD, &CShowWindow::OnBnClickedBtnAdd)
	ON_BN_CLICKED(IDC_BTN_MODIFY, &CShowWindow::OnBnClickedBtnModify)
END_MESSAGE_MAP()


// CShowWindow ��Ϣ�������


void CShowWindow::OnBnClickedBtnAdd()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CAdd *addDlg = new CAdd;

	addDlg->Create(IDD_ADD_DIALOG);
	addDlg->ShowWindow(SW_SHOW);
}


void CShowWindow::OnBnClickedBtnModify()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CModify *modifyDlg = new CModify;

	modifyDlg->Create(IDD_MODIFY_DIALOG);
	modifyDlg->ShowWindow(SW_SHOW);

}
