#include "AppIni.h"

DWORD AppIni::GetString(const char *keyName, char *returnedString, DWORD size, char *defaultStr) const
{
	return GetPrivateProfileString(mAppName, keyName, defaultStr, returnedString, size, mFileName);
}

UINT AppIni::GetInt(const char *keyName, int defaultVal) const
{
	return GetPrivateProfileInt(mAppName, keyName, defaultVal, mFileName);
}

BOOL AppIni::WriteString(const char *keyName, const char *string) const
{
	return WritePrivateProfileString(mAppName, keyName, string, mFileName);
}

BOOL AppIni::DeleteAllSectionEntries() const
{
	return WritePrivateProfileString(mAppName, NULL, NULL, mFileName);
}

AppIni::AppIni(const char *fileName) : mAppName("Property")
{
	::GetCurrentDirectory(MAX_PATH, mFileName);
	strcat_s(mFileName, "\\");
	strcat_s(mFileName, fileName);
}