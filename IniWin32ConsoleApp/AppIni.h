#pragma once

#include <windows.h>

class AppIni
{
	char *mAppName;	// section name in ini file
	char mFileName[MAX_PATH];	// ini file name

public:
	AppIni(const char *fileName);
	DWORD GetString(const char *keyName, char *returnedString, DWORD size, char *defaultStr = "") const;
	UINT GetInt(const char *keyName, int defaultVal = 0) const;
	BOOL WriteString(const char *keyName, const char *string) const;
	BOOL DeleteAllSectionEntries() const;
};
