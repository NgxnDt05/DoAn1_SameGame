
// SameGameView.h : interface of the CSameGameView class
//

#pragma once
#include "SameGameDoc.h"

class CSameGameView : public CView
{
protected: // create from serialization only
	CSameGameView() noexcept;
	virtual ~CSameGameView();
	DECLARE_DYNCREATE(CSameGameView)

// Attributes
public:
	CSameGameDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	void ResizeWindows();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();

	/* Khai báo các hàm ?? thay ??i và c?p nh?t ?? khó */
	/* afx_msg là t? khóa ch? hàm ?ó là m?t trình x? lý s? ki?n */
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLevelEasy();
	afx_msg void OnUpdateLevelEasy(CCmdUI* pCmdUI);
	afx_msg void OnLevelHard();
	afx_msg void OnUpdateLevelHard(CCmdUI* pCmdUI);
	afx_msg void OnLevelNormal();
	afx_msg void OnUpdateLevelNormal(CCmdUI* pCmdUI);
};

#ifndef _DEBUG  // debug version in SameGameView.cpp
inline CSameGameDoc* CSameGameView::GetDocument() const
   { return reinterpret_cast<CSameGameDoc*>(m_pDocument); }
#endif

