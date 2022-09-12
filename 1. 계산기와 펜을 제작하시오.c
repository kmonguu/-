// 1. 계산기

void CTest1Dlg::OnBnClickedButton1() {
    int a = GetDlgItemInt(IDC_EDIT1);
    int b = GetDlgItemInt(IDC_EDIT2);
    int c = a+b;
    SetDlgItemInt(IDC_EDIT3);
}

// 2. 초록색 펜
CPoint oPnt;
void CMFCApplication3Dlg::OnMouseMove(UINT nFlags, CPoint point) {
	if (nFlags == MK_LBUTTON) {
		CPen pen(PS_SOLID, 8, RGB(0, 255, 0));
		CClientDC dc(this);
		dc.SelectObject(&pen);
		dc.MoveTo(oPnt);
		dc.LineTo(point);
	}
	oPnt = point;  // 마우스 포인터의 업데이트
	CDialogEx::OnMouseMove(nFlags, point);
}
