#pragma once

#include "Includes.h"

namespace Lang
{
	string CANT_RENAME = "Cant to rename injector. Closing...";

	string STEAM_PATH_NOT_FOUNDED = "Steam path not founded. Need to run Steam.exe. Closing...";

	string SEARCH_STEAM = "Searching Steam.exe...";
	string STEAM_TRYING_START = "Steam.exe closes, trying to Start...";
	string STEAM_CANT_START = "Cant start Steam.exe. Open Steam.exe. Closing...";
	string STEAM_FOUNDED = "Steam.exe found!";

	string SEARCH_CSGO = "Searching csgo.exe...";
	string CSGO_FOUNDED_FOR_INJECT = "CSGO.exe running, trying to close...";
	string CANT_CLOSE_CSGO_FOR_INJECT = "Cant close CSGO.exe. Try to close CSGO.exe and run loader. Closing...";
	string CSGO_NOT_FOUNDED_FOR_INJECT = "Good, CSGO.exe Closed, starting Inject!";
	string INJECT_ERROR = "Injecting error. Closing...";
	string CANT_INJECT = "Cant injecting. Closing...";
	string CAN_INJECT = "Injecting!";
	string CANT_FIND_DLL = "Cant find hack dll. Closing...";
	string CAN_FIND_DLL = "Finded hack dll!";
	string DLL_IS = "Starting inject ";
	string WAIT_CSGO = "Waiting csgo.exe...";
	string CSGO_FOUNDED = "CSGO.exe found!";


	void LoadRussian()
	{
		CANT_RENAME = "�� ���� ������������� ��������. ��������...";
		STEAM_PATH_NOT_FOUNDED = "����� ����� �� �������. ����� ��������� ����. ��������...";
		SEARCH_STEAM = "��� Steam.exe...";
		STEAM_TRYING_START = "Steam.exe ������, ������� ���������...";
		STEAM_CANT_START = "�� ���� ��������� Steam.exe. �������� ���� Steam.exe. ��������...";
		STEAM_FOUNDED = "Steam.exe ������!";
		SEARCH_CSGO = "��� CSGO.exe...";
		CSGO_FOUNDED_FOR_INJECT = "CSGO.exe ������, ������� �������...";
		CANT_CLOSE_CSGO_FOR_INJECT = "�� ������� ������� CSGO.exe. ���������� ��������� ������ ������. ��������...";
		CSGO_NOT_FOUNDED_FOR_INJECT = "������, CSGO.exe ������, ������� ������!";
		INJECT_ERROR = "������ ��� �������. ��������...";
		CANT_INJECT = "�� ��������� �����������. ��������...";
		CAN_INJECT = "����� ���������!";
		CANT_FIND_DLL = "�� ���� ����� ��� ����. ��������...";
		CAN_FIND_DLL = "��� ���� �������!";
		DLL_IS = "������� ������ ";
		WAIT_CSGO = "�������� CSGO.exe...";
		CSGO_FOUNDED = "CSGO.exe ������!";
	}

	string GetWinLanguage()
	{
		WCHAR wcBuffer[16];
		GetSystemDefaultLocaleName(wcBuffer, 16);

		return ws2s(wcBuffer);
	}


}