{
	SYSTEMTIME st;
	CString strDateTime;
	GetLocalTime(&st);
	strDateTime.Format(_T("%04d%02d%02d-%02d:%02d:%02d,%03d"),
		st.wYear,
		st.wMonth,
		st.wDay,
		st.wHour,
		st.wMinute,
		st.wSecond,
		st.wMilliseconds);
	USES_CONVERSION;
	W2A(strDateTime);
}

