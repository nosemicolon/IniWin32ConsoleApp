#include <iostream>
#include <atlstr.h>	/* for CString, no needed in MFC */
#include "AppIni.h"

int main()
{
	AppIni appIni("InitTester.ini");
	char comPort[MAX_PATH + 1];
	int comBaud, comDataBits;

	appIni.DeleteAllSectionEntries();

	appIni.WriteString("comPort", "COM1");
	appIni.WriteString("comBaud", "9600");
	appIni.WriteString("comDataBits", "8");

	appIni.GetString("comPort", comPort, MAX_PATH + 1);
	comBaud = appIni.GetInt("comBaud");
	comDataBits = appIni.GetInt("comDataBits");

	appIni.GetString("comPort", comPort, MAX_PATH + 1);
	comBaud = appIni.GetInt("comBaud");
	comDataBits = appIni.GetInt("comDataBits");

	return 0;
}