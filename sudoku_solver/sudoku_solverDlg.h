
// sudoku_solverDlg.h : header file
//

#pragma once
#include <vector>
#include <string>


// CsudokusolverDlg dialog
class CsudokusolverDlg : public CDialogEx
{
// Construction
public:
	CsudokusolverDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUDOKU_SOLVER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	CFont m_csLittleFont;
	CFont m_csBigFont;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	std::string csInput;
	std::string csSolved;
	std::vector<std::vector<int>> list_of_groups;
	bool low_vs_high;

	void LoadString(std::string csInput);
	void SetValue(int rcValue, CString numValue);
	void RemoveNote(int rcValue, CString numValue);
	void InitLists();
	std::vector<std::vector<int>> FindListsForCell(int rcValue);
	void RemoveNotesAfterSetting(int rcValue, CString numValue);
	void ScanGroups();
	void ScanCellsForSingles();
	void ChooseLowestValue(int rcValue);
	
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton25();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton28();
	afx_msg void OnBnClickedButton29();
	afx_msg void OnBnClickedButton30();
	afx_msg void OnBnClickedButton31();
	afx_msg void OnBnClickedButton32();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton36();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton39();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton41();
	afx_msg void OnBnClickedButton42();
	afx_msg void OnBnClickedButton43();
	afx_msg void OnBnClickedButton44();
	afx_msg void OnBnClickedButton45();
	afx_msg void OnBnClickedButton46();
	afx_msg void OnBnClickedButton47();
	afx_msg void OnBnClickedButton48();
	afx_msg void OnBnClickedButton49();
	afx_msg void OnBnClickedButton50();
	afx_msg void OnBnClickedButton51();
	afx_msg void OnBnClickedButton52();
	afx_msg void OnBnClickedButton53();
	afx_msg void OnBnClickedButton54();
	afx_msg void OnBnClickedButton55();
	afx_msg void OnBnClickedButton56();
	afx_msg void OnBnClickedButton57();
	afx_msg void OnBnClickedButton58();
	afx_msg void OnBnClickedButton59();
	afx_msg void OnBnClickedButton60();
	afx_msg void OnBnClickedButton61();
	afx_msg void OnBnClickedButton62();
	afx_msg void OnBnClickedButton63();
	afx_msg void OnBnClickedButton64();
	afx_msg void OnBnClickedButton65();
	afx_msg void OnBnClickedButton66();
	afx_msg void OnBnClickedButton67();
	afx_msg void OnBnClickedButton68();
	afx_msg void OnBnClickedButton69();
	afx_msg void OnBnClickedButton70();
	afx_msg void OnBnClickedButton71();
	afx_msg void OnBnClickedButton72();
	afx_msg void OnBnClickedButton73();
	afx_msg void OnBnClickedButton74();
	afx_msg void OnBnClickedButton75();
	afx_msg void OnBnClickedButton76();
	afx_msg void OnBnClickedButton77();
	afx_msg void OnBnClickedButton78();
	afx_msg void OnBnClickedButton79();
	afx_msg void OnBnClickedButton80();
	afx_msg void OnBnClickedButton81();
	afx_msg void OnBnClickedBtnScan();
	afx_msg void OnBnClickedBtnReset();
	afx_msg void OnBnClickedBtnLoad();
	afx_msg void OnBnClickedBtnLowhigh();
	afx_msg void OnBnClickedBtnValidate();
};
