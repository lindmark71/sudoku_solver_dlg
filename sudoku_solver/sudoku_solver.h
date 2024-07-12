
// sudoku_solver.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsudokusolverApp:
// See sudoku_solver.cpp for the implementation of this class
//

class CsudokusolverApp : public CWinApp
{
public:
	CsudokusolverApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CsudokusolverApp theApp;
