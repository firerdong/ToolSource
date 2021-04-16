#include<locale.h>
void readJsonFromFile()
{
	setlocale(LC_ALL, "Japanese");

	USES_CONVERSION;
	CString csFileName = _T("json.txt");
	if(! PathFileExists(csFileName))
	{
		MessageBox(_T("File nox exist"), 0);
		return;
	}

	CStdioFile file;
	if(! file.Open(csFileName, CFile::modeRead))
	{
		MessageBox(_T("Open File failed"), 0);
		return;
	}	

	CString csLine;
	while(file.ReadString(csLine))
	{
		MessageBox(csLine, 0);
		//TODO
	}

	file.Close();

	return;
}
