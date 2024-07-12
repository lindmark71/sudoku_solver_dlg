
// sudoku_solverDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "sudoku_solver.h"
#include "sudoku_solverDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CsudokusolverDlg dialog



CsudokusolverDlg::CsudokusolverDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SUDOKU_SOLVER_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CsudokusolverDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CsudokusolverDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CsudokusolverDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CsudokusolverDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CsudokusolverDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CsudokusolverDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CsudokusolverDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CsudokusolverDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CsudokusolverDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CsudokusolverDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CsudokusolverDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CsudokusolverDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CsudokusolverDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CsudokusolverDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CsudokusolverDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CsudokusolverDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CsudokusolverDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CsudokusolverDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CsudokusolverDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CsudokusolverDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CsudokusolverDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CsudokusolverDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CsudokusolverDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CsudokusolverDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &CsudokusolverDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CsudokusolverDlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &CsudokusolverDlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON26, &CsudokusolverDlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON27, &CsudokusolverDlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON28, &CsudokusolverDlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON29, &CsudokusolverDlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON30, &CsudokusolverDlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON31, &CsudokusolverDlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON32, &CsudokusolverDlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON33, &CsudokusolverDlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &CsudokusolverDlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &CsudokusolverDlg::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON36, &CsudokusolverDlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &CsudokusolverDlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &CsudokusolverDlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &CsudokusolverDlg::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON40, &CsudokusolverDlg::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON41, &CsudokusolverDlg::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON42, &CsudokusolverDlg::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON43, &CsudokusolverDlg::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON44, &CsudokusolverDlg::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON45, &CsudokusolverDlg::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON46, &CsudokusolverDlg::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON47, &CsudokusolverDlg::OnBnClickedButton47)
	ON_BN_CLICKED(IDC_BUTTON48, &CsudokusolverDlg::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON49, &CsudokusolverDlg::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON50, &CsudokusolverDlg::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON51, &CsudokusolverDlg::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON52, &CsudokusolverDlg::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON53, &CsudokusolverDlg::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON54, &CsudokusolverDlg::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON55, &CsudokusolverDlg::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON56, &CsudokusolverDlg::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON57, &CsudokusolverDlg::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON58, &CsudokusolverDlg::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON59, &CsudokusolverDlg::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON60, &CsudokusolverDlg::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON61, &CsudokusolverDlg::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON62, &CsudokusolverDlg::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &CsudokusolverDlg::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON64, &CsudokusolverDlg::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON65, &CsudokusolverDlg::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON66, &CsudokusolverDlg::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON67, &CsudokusolverDlg::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON68, &CsudokusolverDlg::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON69, &CsudokusolverDlg::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON70, &CsudokusolverDlg::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON71, &CsudokusolverDlg::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON72, &CsudokusolverDlg::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON73, &CsudokusolverDlg::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON74, &CsudokusolverDlg::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON75, &CsudokusolverDlg::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON76, &CsudokusolverDlg::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON77, &CsudokusolverDlg::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON78, &CsudokusolverDlg::OnBnClickedButton78)
	ON_BN_CLICKED(IDC_BUTTON79, &CsudokusolverDlg::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON80, &CsudokusolverDlg::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_BUTTON81, &CsudokusolverDlg::OnBnClickedButton81)
	ON_BN_CLICKED(IDC_BTN_SCAN, &CsudokusolverDlg::OnBnClickedBtnScan)
	ON_BN_CLICKED(IDC_BTN_RESET, &CsudokusolverDlg::OnBnClickedBtnReset)
	ON_BN_CLICKED(IDC_BTN_LOAD, &CsudokusolverDlg::OnBnClickedBtnLoad)
	ON_BN_CLICKED(ID_BTN_LOWHIGH, &CsudokusolverDlg::OnBnClickedBtnLowhigh)
	ON_BN_CLICKED(ID_BTN_VALIDATE, &CsudokusolverDlg::OnBnClickedBtnValidate)
END_MESSAGE_MAP()


// CsudokusolverDlg message handlers

BOOL CsudokusolverDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	const CString sFont = L"Arial";

	m_csLittleFont.CreateFontW(
		/* int nHeight,          */20,
		/* int nWidth,           */0,
		/* int nEscapement,      */0,
		/* int nOrientation,     */0,
		/* int nWeight,          */FW_NORMAL,
		/* BYTE bItalic,         */FALSE,
		/* BYTE bUnderline,      */FALSE,
		/* BYTE cStrikeOut,      */FALSE,
		/* BYTE nCharSet,        */ANSI_CHARSET,
		/* BYTE nOutPrecision,   */OUT_DEFAULT_PRECIS,
		/* BYTE nClipPrecision,  */CLIP_DEFAULT_PRECIS,
		/* BYTE nQuality,        */DEFAULT_QUALITY,
		/* BYTE nPitchAndFamily, */DEFAULT_PITCH,
		/* LPCTSTR lpszFacename);*/sFont
	);

	m_csBigFont.CreateFontW(
		/* int nHeight,          */40,
		/* int nWidth,           */0,
		/* int nEscapement,      */0,
		/* int nOrientation,     */0,
		/* int nWeight,          */FW_NORMAL,
		/* BYTE bItalic,         */FALSE,
		/* BYTE bUnderline,      */FALSE,
		/* BYTE cStrikeOut,      */FALSE,
		/* BYTE nCharSet,        */ANSI_CHARSET,
		/* BYTE nOutPrecision,   */OUT_DEFAULT_PRECIS,
		/* BYTE nClipPrecision,  */CLIP_DEFAULT_PRECIS,
		/* BYTE nQuality,        */DEFAULT_QUALITY,
		/* BYTE nPitchAndFamily, */DEFAULT_PITCH,
		/* LPCTSTR lpszFacename);*/sFont
	);

	InitLists();
	OnBnClickedBtnReset();
	low_vs_high = false;

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CsudokusolverDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CsudokusolverDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CsudokusolverDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CsudokusolverDlg::OnBnClickedButton1()
{
	ChooseLowestValue(IDC_BUTTON1);
}


void CsudokusolverDlg::OnBnClickedButton2()
{
	ChooseLowestValue(IDC_BUTTON2);
}


void CsudokusolverDlg::OnBnClickedButton3()
{
	ChooseLowestValue(IDC_BUTTON3);
}


void CsudokusolverDlg::OnBnClickedButton4()
{
	ChooseLowestValue(IDC_BUTTON4);
}


void CsudokusolverDlg::OnBnClickedButton5()
{
	ChooseLowestValue(IDC_BUTTON5);
}


void CsudokusolverDlg::OnBnClickedButton6()
{
	ChooseLowestValue(IDC_BUTTON6);
}


void CsudokusolverDlg::OnBnClickedButton7()
{
	ChooseLowestValue(IDC_BUTTON7);
}


void CsudokusolverDlg::OnBnClickedButton8()
{
	ChooseLowestValue(IDC_BUTTON8);
}


void CsudokusolverDlg::OnBnClickedButton9()
{
	ChooseLowestValue(IDC_BUTTON9);
}


void CsudokusolverDlg::OnBnClickedButton10()
{
	ChooseLowestValue(IDC_BUTTON10);
}


void CsudokusolverDlg::OnBnClickedButton11()
{
	ChooseLowestValue(IDC_BUTTON11);
}


void CsudokusolverDlg::OnBnClickedButton12()
{
	ChooseLowestValue(IDC_BUTTON12);
}


void CsudokusolverDlg::OnBnClickedButton13()
{
	ChooseLowestValue(IDC_BUTTON13);
}


void CsudokusolverDlg::OnBnClickedButton14()
{
	ChooseLowestValue(IDC_BUTTON14);
}


void CsudokusolverDlg::OnBnClickedButton15()
{
	ChooseLowestValue(IDC_BUTTON15);
}


void CsudokusolverDlg::OnBnClickedButton16()
{
	ChooseLowestValue(IDC_BUTTON16);
}


void CsudokusolverDlg::OnBnClickedButton17()
{
	ChooseLowestValue(IDC_BUTTON17);
}


void CsudokusolverDlg::OnBnClickedButton18()
{
	ChooseLowestValue(IDC_BUTTON18);
}


void CsudokusolverDlg::OnBnClickedButton19()
{
	ChooseLowestValue(IDC_BUTTON19);
}


void CsudokusolverDlg::OnBnClickedButton20()
{
	ChooseLowestValue(IDC_BUTTON20);
}


void CsudokusolverDlg::OnBnClickedButton21()
{
	ChooseLowestValue(IDC_BUTTON21);
}


void CsudokusolverDlg::OnBnClickedButton22()
{
	ChooseLowestValue(IDC_BUTTON22);
}


void CsudokusolverDlg::OnBnClickedButton23()
{
	ChooseLowestValue(IDC_BUTTON23);
}


void CsudokusolverDlg::OnBnClickedButton24()
{
	ChooseLowestValue(IDC_BUTTON24);
}


void CsudokusolverDlg::OnBnClickedButton25()
{
	ChooseLowestValue(IDC_BUTTON25);
}


void CsudokusolverDlg::OnBnClickedButton26()
{
	ChooseLowestValue(IDC_BUTTON26);
}


void CsudokusolverDlg::OnBnClickedButton27()
{
	ChooseLowestValue(IDC_BUTTON27);
}


void CsudokusolverDlg::OnBnClickedButton28()
{
	ChooseLowestValue(IDC_BUTTON28);
}


void CsudokusolverDlg::OnBnClickedButton29()
{
	ChooseLowestValue(IDC_BUTTON29);
}


void CsudokusolverDlg::OnBnClickedButton30()
{
	ChooseLowestValue(IDC_BUTTON30);
}


void CsudokusolverDlg::OnBnClickedButton31()
{
	ChooseLowestValue(IDC_BUTTON31);
}


void CsudokusolverDlg::OnBnClickedButton32()
{
	ChooseLowestValue(IDC_BUTTON32);
}


void CsudokusolverDlg::OnBnClickedButton33()
{
	ChooseLowestValue(IDC_BUTTON33);
}


void CsudokusolverDlg::OnBnClickedButton34()
{
	ChooseLowestValue(IDC_BUTTON34);
}


void CsudokusolverDlg::OnBnClickedButton35()
{
	ChooseLowestValue(IDC_BUTTON35);
}


void CsudokusolverDlg::OnBnClickedButton36()
{
	ChooseLowestValue(IDC_BUTTON36);
}


void CsudokusolverDlg::OnBnClickedButton37()
{
	ChooseLowestValue(IDC_BUTTON37);
}


void CsudokusolverDlg::OnBnClickedButton38()
{
	ChooseLowestValue(IDC_BUTTON38);
}


void CsudokusolverDlg::OnBnClickedButton39()
{
	ChooseLowestValue(IDC_BUTTON39);
}


void CsudokusolverDlg::OnBnClickedButton40()
{
	ChooseLowestValue(IDC_BUTTON40);
}


void CsudokusolverDlg::OnBnClickedButton41()
{
	ChooseLowestValue(IDC_BUTTON41);
}


void CsudokusolverDlg::OnBnClickedButton42()
{
	ChooseLowestValue(IDC_BUTTON42);
}


void CsudokusolverDlg::OnBnClickedButton43()
{
	ChooseLowestValue(IDC_BUTTON43);
}


void CsudokusolverDlg::OnBnClickedButton44()
{
	ChooseLowestValue(IDC_BUTTON44);
}


void CsudokusolverDlg::OnBnClickedButton45()
{
	ChooseLowestValue(IDC_BUTTON45);
}


void CsudokusolverDlg::OnBnClickedButton46()
{
	ChooseLowestValue(IDC_BUTTON46);
}


void CsudokusolverDlg::OnBnClickedButton47()
{
	ChooseLowestValue(IDC_BUTTON47);
}


void CsudokusolverDlg::OnBnClickedButton48()
{
	ChooseLowestValue(IDC_BUTTON48);
}


void CsudokusolverDlg::OnBnClickedButton49()
{
	ChooseLowestValue(IDC_BUTTON49);
}


void CsudokusolverDlg::OnBnClickedButton50()
{
	ChooseLowestValue(IDC_BUTTON50);
}


void CsudokusolverDlg::OnBnClickedButton51()
{
	ChooseLowestValue(IDC_BUTTON51);
}


void CsudokusolverDlg::OnBnClickedButton52()
{
	ChooseLowestValue(IDC_BUTTON52);
}


void CsudokusolverDlg::OnBnClickedButton53()
{
	ChooseLowestValue(IDC_BUTTON53);
}


void CsudokusolverDlg::OnBnClickedButton54()
{
	ChooseLowestValue(IDC_BUTTON54);
}


void CsudokusolverDlg::OnBnClickedButton55()
{
	ChooseLowestValue(IDC_BUTTON55);
}


void CsudokusolverDlg::OnBnClickedButton56()
{
	ChooseLowestValue(IDC_BUTTON56);
}


void CsudokusolverDlg::OnBnClickedButton57()
{
	ChooseLowestValue(IDC_BUTTON57);
}


void CsudokusolverDlg::OnBnClickedButton58()
{
	ChooseLowestValue(IDC_BUTTON58);
}


void CsudokusolverDlg::OnBnClickedButton59()
{
	ChooseLowestValue(IDC_BUTTON59);
}


void CsudokusolverDlg::OnBnClickedButton60()
{
	ChooseLowestValue(IDC_BUTTON60);
}


void CsudokusolverDlg::OnBnClickedButton61()
{
	ChooseLowestValue(IDC_BUTTON61);
}


void CsudokusolverDlg::OnBnClickedButton62()
{
	ChooseLowestValue(IDC_BUTTON62);
}


void CsudokusolverDlg::OnBnClickedButton63()
{
	ChooseLowestValue(IDC_BUTTON63);
}


void CsudokusolverDlg::OnBnClickedButton64()
{
	ChooseLowestValue(IDC_BUTTON64);
}


void CsudokusolverDlg::OnBnClickedButton65()
{
	ChooseLowestValue(IDC_BUTTON65);
}


void CsudokusolverDlg::OnBnClickedButton66()
{
	ChooseLowestValue(IDC_BUTTON66);
}


void CsudokusolverDlg::OnBnClickedButton67()
{
	ChooseLowestValue(IDC_BUTTON67);
}


void CsudokusolverDlg::OnBnClickedButton68()
{
	ChooseLowestValue(IDC_BUTTON68);
}


void CsudokusolverDlg::OnBnClickedButton69()
{
	ChooseLowestValue(IDC_BUTTON69);
}


void CsudokusolverDlg::OnBnClickedButton70()
{
	ChooseLowestValue(IDC_BUTTON70);
}


void CsudokusolverDlg::OnBnClickedButton71()
{
	ChooseLowestValue(IDC_BUTTON71);
}


void CsudokusolverDlg::OnBnClickedButton72()
{
	ChooseLowestValue(IDC_BUTTON72);
}


void CsudokusolverDlg::OnBnClickedButton73()
{
	ChooseLowestValue(IDC_BUTTON73);
}


void CsudokusolverDlg::OnBnClickedButton74()
{
	ChooseLowestValue(IDC_BUTTON74);
}


void CsudokusolverDlg::OnBnClickedButton75()
{
	ChooseLowestValue(IDC_BUTTON75);
}


void CsudokusolverDlg::OnBnClickedButton76()
{
	ChooseLowestValue(IDC_BUTTON76);
}


void CsudokusolverDlg::OnBnClickedButton77()
{
	ChooseLowestValue(IDC_BUTTON77);
}


void CsudokusolverDlg::OnBnClickedButton78()
{
	ChooseLowestValue(IDC_BUTTON78);
}


void CsudokusolverDlg::OnBnClickedButton79()
{
	ChooseLowestValue(IDC_BUTTON79);
}


void CsudokusolverDlg::OnBnClickedButton80()
{
	ChooseLowestValue(IDC_BUTTON80);
}


void CsudokusolverDlg::OnBnClickedButton81()
{
	ChooseLowestValue(IDC_BUTTON81);
}


void CsudokusolverDlg::LoadString(std::string csInput)
{
	csSolved = csInput;
	for (size_t nIndex = 0; nIndex < csInput.length(); nIndex++)
	{
		char cValue = (char)(csInput.at(nIndex));
		if (cValue != ' ')
		{
			CString csLetter(cValue);
			SetValue(IDC_BUTTON1 + nIndex, csLetter); //zero based index
		}
	}
}

void CsudokusolverDlg::SetValue(int rcValue, CString numValue)
{
	GetDlgItem(rcValue)->SetWindowTextW(numValue); 
	GetDlgItem(rcValue)->SetFont(&m_csBigFont, true);
	RemoveNotesAfterSetting(rcValue, numValue);
}

void CsudokusolverDlg::RemoveNote(int rcValue, CString numValue)
{
	CString csText;
	GetDlgItem(rcValue)->GetWindowTextW(csText);
	if (csText.GetLength() > 1) //only look to remove items from a cell that has notes in it
	{
		int nFound = csText.Find(numValue);
		if (nFound >= 0)
		{
			csText.SetAt(nFound, ' ');
			GetDlgItem(rcValue)->SetWindowTextW(csText);
		}
	}
}

void CsudokusolverDlg::InitLists()
{
	std::vector<int> temp_list;
	temp_list.push_back(1); 
	temp_list.push_back(2); 
	temp_list.push_back(3);	
	temp_list.push_back(4);	
	temp_list.push_back(5);
	temp_list.push_back(6);	
	temp_list.push_back(7);	
	temp_list.push_back(8);	
	temp_list.push_back(9);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(10); 
	temp_list.push_back(11); 
	temp_list.push_back(12); 
	temp_list.push_back(13); 
	temp_list.push_back(14);
	temp_list.push_back(15); 
	temp_list.push_back(16); 
	temp_list.push_back(17); 
	temp_list.push_back(18);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(19); 
	temp_list.push_back(20); 
	temp_list.push_back(21); 
	temp_list.push_back(22); 
	temp_list.push_back(23);
	temp_list.push_back(24); 
	temp_list.push_back(25); 
	temp_list.push_back(26); 
	temp_list.push_back(27); 
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(28); 
	temp_list.push_back(29); 
	temp_list.push_back(30); 
	temp_list.push_back(31); 
	temp_list.push_back(32);
	temp_list.push_back(33); 
	temp_list.push_back(34); 
	temp_list.push_back(35); 
	temp_list.push_back(36);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(37); 
	temp_list.push_back(38); 
	temp_list.push_back(39); 
	temp_list.push_back(40); 
	temp_list.push_back(41);
	temp_list.push_back(42); 
	temp_list.push_back(43); 
	temp_list.push_back(44); 
	temp_list.push_back(45);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(46); 
	temp_list.push_back(47); 
	temp_list.push_back(48); 
	temp_list.push_back(49); 
	temp_list.push_back(50);
	temp_list.push_back(51); 
	temp_list.push_back(52); 
	temp_list.push_back(53); 
	temp_list.push_back(54); 
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(55); 
	temp_list.push_back(56); 
	temp_list.push_back(57); 
	temp_list.push_back(58); 
	temp_list.push_back(59);
	temp_list.push_back(60); 
	temp_list.push_back(61); 
	temp_list.push_back(62); 
	temp_list.push_back(63);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(64); 
	temp_list.push_back(65); 
	temp_list.push_back(66); 
	temp_list.push_back(67); 
	temp_list.push_back(68);
	temp_list.push_back(69); 
	temp_list.push_back(70); 
	temp_list.push_back(71); 
	temp_list.push_back(72);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(73); 
	temp_list.push_back(74); 
	temp_list.push_back(75); 
	temp_list.push_back(76); 
	temp_list.push_back(77);
	temp_list.push_back(78); 
	temp_list.push_back(79); 
	temp_list.push_back(80); 
	temp_list.push_back(81);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(1);	
	temp_list.push_back(2); 
	temp_list.push_back(3); 
	temp_list.push_back(10);
	temp_list.push_back(11); 
	temp_list.push_back(12); 
	temp_list.push_back(19); 
	temp_list.push_back(20); 
	temp_list.push_back(21); 
	list_of_groups.push_back(temp_list); 
	temp_list.clear();

	temp_list.push_back(4);	
	temp_list.push_back(5); 
	temp_list.push_back(6); 
	temp_list.push_back(13); 
	temp_list.push_back(14); 
	temp_list.push_back(15); 
	temp_list.push_back(22); 
	temp_list.push_back(23); 
	temp_list.push_back(24); 
	list_of_groups.push_back(temp_list); 
	temp_list.clear();

	temp_list.push_back(7);	
	temp_list.push_back(8); 
	temp_list.push_back(9); 
	temp_list.push_back(16); 
	temp_list.push_back(17); 
	temp_list.push_back(18); 
	temp_list.push_back(25); 
	temp_list.push_back(26); 
	temp_list.push_back(27); 
	list_of_groups.push_back(temp_list); 
	temp_list.clear();

	temp_list.push_back(28); 
	temp_list.push_back(29); 
	temp_list.push_back(30); 
	temp_list.push_back(37); 
	temp_list.push_back(38); 
	temp_list.push_back(39); 
	temp_list.push_back(46); 
	temp_list.push_back(47); 
	temp_list.push_back(48); 
	list_of_groups.push_back(temp_list); 
	temp_list.clear();

	temp_list.push_back(31); 
	temp_list.push_back(32); 
	temp_list.push_back(33); 
	temp_list.push_back(40); 
	temp_list.push_back(41); 
	temp_list.push_back(42); 
	temp_list.push_back(49); 
	temp_list.push_back(50); 
	temp_list.push_back(51); 
	list_of_groups.push_back(temp_list); 
	temp_list.clear();

	temp_list.push_back(34); 
	temp_list.push_back(35); 
	temp_list.push_back(36); 
	temp_list.push_back(43); 
	temp_list.push_back(44); 
	temp_list.push_back(45); 
	temp_list.push_back(52); 
	temp_list.push_back(53); 
	temp_list.push_back(54); 
	list_of_groups.push_back(temp_list); 
	temp_list.clear();

	temp_list.push_back(55); 
	temp_list.push_back(56); 
	temp_list.push_back(57); 
	temp_list.push_back(64); 
	temp_list.push_back(65); 
	temp_list.push_back(66); 
	temp_list.push_back(73); 
	temp_list.push_back(74); 
	temp_list.push_back(75); 
	list_of_groups.push_back(temp_list); 
	temp_list.clear();

	temp_list.push_back(58); 
	temp_list.push_back(59); 
	temp_list.push_back(60); 
	temp_list.push_back(67); 
	temp_list.push_back(68); 
	temp_list.push_back(69); 
	temp_list.push_back(76); 
	temp_list.push_back(77); 
	temp_list.push_back(78); 
	list_of_groups.push_back(temp_list); 
	temp_list.clear();

	temp_list.push_back(61); 
	temp_list.push_back(62); 
	temp_list.push_back(63); 
	temp_list.push_back(70); 
	temp_list.push_back(71);
	temp_list.push_back(72); 
	temp_list.push_back(79); 
	temp_list.push_back(80); 
	temp_list.push_back(81);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(1); 
	temp_list.push_back(4); 
	temp_list.push_back(7); 
	temp_list.push_back(28); 
	temp_list.push_back(31);
	temp_list.push_back(34); 
	temp_list.push_back(55); 
	temp_list.push_back(58); 
	temp_list.push_back(61);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(2); 
	temp_list.push_back(5);
	temp_list.push_back(8); 
	temp_list.push_back(29); 
	temp_list.push_back(32);
	temp_list.push_back(35); 
	temp_list.push_back(56); 
	temp_list.push_back(59); 
	temp_list.push_back(62);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(3); 
	temp_list.push_back(6); 
	temp_list.push_back(9); 
	temp_list.push_back(30); 
	temp_list.push_back(33);
	temp_list.push_back(36); 
	temp_list.push_back(57); 
	temp_list.push_back(60); 
	temp_list.push_back(63);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(10); 
	temp_list.push_back(13); 
	temp_list.push_back(16); 
	temp_list.push_back(37); 
	temp_list.push_back(40);
	temp_list.push_back(43); 
	temp_list.push_back(64); 
	temp_list.push_back(67); 
	temp_list.push_back(70);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(11); 
	temp_list.push_back(14); 
	temp_list.push_back(17); 
	temp_list.push_back(38); 
	temp_list.push_back(41);
	temp_list.push_back(44); 
	temp_list.push_back(65); 
	temp_list.push_back(68); 
	temp_list.push_back(71);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(12); 
	temp_list.push_back(15); 
	temp_list.push_back(18); 
	temp_list.push_back(39); 
	temp_list.push_back(42);
	temp_list.push_back(45); 
	temp_list.push_back(66); 
	temp_list.push_back(69); 
	temp_list.push_back(72);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(19); 
	temp_list.push_back(22); 
	temp_list.push_back(25); 
	temp_list.push_back(46); 
	temp_list.push_back(49);
	temp_list.push_back(52); 
	temp_list.push_back(73); 
	temp_list.push_back(76); 
	temp_list.push_back(79);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(20); 
	temp_list.push_back(23); 
	temp_list.push_back(26); 
	temp_list.push_back(47); 
	temp_list.push_back(50);
	temp_list.push_back(53); 
	temp_list.push_back(74); 
	temp_list.push_back(77); 
	temp_list.push_back(80);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

	temp_list.push_back(21); 
	temp_list.push_back(24); 
	temp_list.push_back(27); 
	temp_list.push_back(48); 
	temp_list.push_back(51);
	temp_list.push_back(54); 
	temp_list.push_back(75); 
	temp_list.push_back(78); 
	temp_list.push_back(81);
	list_of_groups.push_back(temp_list);
	temp_list.clear();

}

void CsudokusolverDlg::OnBnClickedBtnScan()
{
	ScanCellsForSingles();
	ScanGroups();
}

std::vector<std::vector<int>> CsudokusolverDlg::FindListsForCell(int rcValue)
{
	std::vector<std::vector<int>> return_list;
	int entry_value = 0;

	std::vector<std::vector<int>>::iterator outer_loop;
	std::vector<int>::iterator inner_loop;
	std::vector<int> temp_list;
	for (outer_loop = list_of_groups.begin(); outer_loop != list_of_groups.end(); ++outer_loop)
	{
		temp_list = *outer_loop;
		for (inner_loop = temp_list.begin(); inner_loop != temp_list.end(); ++inner_loop)
		{
			entry_value = *inner_loop;
			if (entry_value == rcValue)
			{
				return_list.push_back(temp_list);
			}
		}
	}
	//this will return three sub lists that contain the value passed in
	return return_list;
}

void CsudokusolverDlg::RemoveNotesAfterSetting(int rcValue, CString numValue)
{
	char cValue = (char)(numValue.GetAt(0)); //numValue should only be one char long
	int nMatching = (int)(cValue - 48);
	int entry_value = 0;
	std::vector<std::vector<int>> outer_list = FindListsForCell(rcValue - IDC_BUTTON0);

	std::vector<std::vector<int>>::iterator outer_loop;
	std::vector<int>::iterator inner_loop;
	std::vector<int> temp_list;
	for (outer_loop = outer_list.begin(); outer_loop != outer_list.end(); ++outer_loop)
	{
		temp_list = *outer_loop;
		for (inner_loop = temp_list.begin(); inner_loop != temp_list.end(); ++inner_loop)
		{
			entry_value = *inner_loop;
			if (IDC_BUTTON0 + entry_value != rcValue)
			{
				RemoveNote(IDC_BUTTON0 + entry_value, numValue);
			}
		}
	}
}

void CsudokusolverDlg::OnBnClickedBtnReset()
{
	for (int cell_num = IDC_BUTTON1; cell_num <= IDC_BUTTON81; cell_num++)
	{
		GetDlgItem(cell_num)->SetWindowTextW(_T("1 2 3\r\n4 5 6\r\n7 8 9"));
		GetDlgItem(cell_num)->SetFont(&m_csLittleFont, true);
	}
}

void CsudokusolverDlg::ScanCellsForSingles()
{
	for (int cell_num = IDC_BUTTON1; cell_num <= IDC_BUTTON81; cell_num++)
	{
		CString csText;
		GetDlgItem(cell_num)->GetWindowTextW(csText);
		if (csText.GetLength() > 1) //only look to remove items from a cell that has notes in it
		{
			std::string strText(csText.GetString(), csText.GetString() + csText.GetLength());
			int space_count = 0;
			int char_num = 0;
			for (int text_search = 0; text_search < strText.size(); text_search++)
			{
				char_num = (int)(strText.at(text_search));
				if (char_num == 32)
				{
					space_count++;
				}
			}

			if (space_count == 14) //there is one note left, so use it!
			{
				for (int number_search = 1; number_search <= 9; number_search++)
				{
					char cSearch = number_search + '0';
					int nFound = csText.Find(cSearch);
					if (nFound > -1)
					{
						CString csEntry;
						csEntry += cSearch;
						SetValue(cell_num, csEntry);
						//terminate both loops
						number_search = 10;
						//cell_num = IDC_BUTTON81 + 1;
					}
				}
			}
		}
	}
}

void CsudokusolverDlg::ScanGroups()
{
	//scan each group, keep a running count of how many of each number still exist in unsolved
	//cells, and if any of them have a count of 1, set that value for that cell to solved
	int cell_num = 0;
	std::vector<std::vector<int>>::iterator outer_loop;
	std::vector<int>::iterator inner_loop;
	std::vector<int> temp_list;
	for (outer_loop = list_of_groups.begin(); outer_loop != list_of_groups.end(); ++outer_loop)
	{
		temp_list = *outer_loop;
		std::vector<int> count_list(9, 0);
		for (inner_loop = temp_list.begin(); inner_loop != temp_list.end(); ++inner_loop)
		{
			cell_num = *inner_loop;
			CString csText;
			GetDlgItem(IDC_BUTTON0 + cell_num)->GetWindowTextW(csText);
			if (csText.GetLength() > 1) //only look to remove items from a cell that has notes in it
			{
				for (int loop_index = 1; loop_index <= 9; loop_index++)
				{
					char cSearch = loop_index + '0';
					int nFound = csText.Find(cSearch);
					if (nFound > -1)
					{
						count_list.at(loop_index - 1) = count_list.at(loop_index - 1) + 1;
					}
				}
			}
		}
		for (int loop_index = 0; loop_index < 9; loop_index++)
		{
			if (count_list.at(loop_index) == 1) //exactly one left!!
			{
				for (inner_loop = temp_list.begin(); inner_loop != temp_list.end(); ++inner_loop)
				{
					cell_num = *inner_loop;
					CString csText;
					GetDlgItem(IDC_BUTTON0 + cell_num)->GetWindowTextW(csText);
					if (csText.GetLength() > 1) //only look to remove items from a cell that has notes in it
					{
						char cSearch = loop_index + 1 + '0';
						int nFound = csText.Find(cSearch);
						if (nFound > -1)
						{
							CString csLetter(cSearch);
							SetValue(IDC_BUTTON0 + cell_num, csLetter);
						}
					}
				}
			}
		}
	}
}

void CsudokusolverDlg::OnBnClickedBtnLoad()
{
	CString csText;
	GetDlgItem(IDC_EDIT_ENTRY)->GetWindowTextW(csText);
	std::string strText(csText.GetString(), csText.GetString() + csText.GetLength());
	csInput = strText;
	LoadString(strText);
}

void CsudokusolverDlg::ChooseLowestValue(int rcValue)
{
	CString csText;
	GetDlgItem(rcValue)->GetWindowTextW(csText);
	if (csText == "     \r\n     \r\n     ")
	{
		GetDlgItem(rcValue)->SetWindowTextW(_T("1 2 3\r\n4 5 6\r\n7 8 9"));
		GetDlgItem(rcValue)->SetFont(&m_csLittleFont, true);
	}
	else if (csText.GetLength() > 1) //only look to remove items from a cell that has notes in it
	{
		if (low_vs_high == false)
		{
			for (int loop_index = 1; loop_index <= 9; loop_index++)
			{
				char cSearch = loop_index + '0';
				int nFound = csText.Find(cSearch);
				if (nFound > -1)
				{
					CString csLetter(cSearch);
					SetValue(rcValue, csLetter);
					loop_index = 10;
				}
			}
		}
		else
		{
			for (int loop_index = 9; loop_index >= 1; loop_index--)
			{
				char cSearch = loop_index + '0';
				int nFound = csText.Find(cSearch);
				if (nFound > -1)
				{
					CString csLetter(cSearch);
					SetValue(rcValue, csLetter);
					loop_index = 0;
				}
			}

		}
	}
	else //if the user clicks on a "solved" item, unsolve it
	{
		GetDlgItem(rcValue)->SetWindowTextW(_T("1 2 3\r\n4 5 6\r\n7 8 9"));
		GetDlgItem(rcValue)->SetFont(&m_csLittleFont, true);
	}
}

void CsudokusolverDlg::OnBnClickedBtnLowhigh()
{
	low_vs_high = !low_vs_high;
	if (low_vs_high == false)
	{
		GetDlgItem(ID_BTN_LOWHIGH)->SetWindowTextW(_T("Low"));
	}
	else
	{
		GetDlgItem(ID_BTN_LOWHIGH)->SetWindowTextW(_T("High"));
	}
	
}


void CsudokusolverDlg::OnBnClickedBtnValidate()
{
	int cell_num = 0;
	std::vector<std::vector<int>>::iterator outer_loop;
	std::vector<int>::iterator inner_loop;
	std::vector<int> temp_list;
	bool is_valid = true;
	for (outer_loop = list_of_groups.begin(); outer_loop != list_of_groups.end(); ++outer_loop)
	{
		temp_list = *outer_loop;
		std::vector<int> count_list(9, 0);
		bool bOne = false;
		bool bTwo = false;
		bool bThree = false;
		bool bFour = false;
		bool bFive = false;
		bool bSix = false;
		bool bSeven = false;
		bool bEight = false;
		bool bNine = false;

		for (inner_loop = temp_list.begin(); inner_loop != temp_list.end(); ++inner_loop)
		{
			cell_num = *inner_loop;
			CString csText;
			GetDlgItem(IDC_BUTTON0 + cell_num)->GetWindowTextW(csText);
			if (csText.GetLength() == 1) //only look to validate items from a cell that has no notes present
			{
				char cSearch = (char)(csText.GetAt(0));
				int cell_value = (int)(cSearch - '0');
				switch (cell_value)
				{
				case 1: bOne = true; break;
				case 2: bTwo = true; break;
				case 3: bThree = true; break;
				case 4: bFour = true; break;
				case 5: bFive = true; break;
				case 6: bSix = true; break;
				case 7: bSeven = true; break;
				case 8: bEight = true; break;
				case 9: bNine = true; break;
				}
			}
		}
		if (bOne && bTwo && bThree && bFour && bFive && bSix && bSeven && bEight && bNine)
		{
			//so far so good
		}
		else
		{
			is_valid = false;
		}
	}
	if (is_valid)
	{
		GetDlgItem(IDC_STATIC_VALIDATE)->SetWindowTextW(_T("VALID!!"));
	}
	else
	{
		GetDlgItem(IDC_STATIC_VALIDATE)->SetWindowTextW(_T("not valid yet"));
	}


}
