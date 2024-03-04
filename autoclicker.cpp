#include <iostream>
#include <Windows.h>
using namespace std;

void console()
{
	cout << "Press '1' to enable and '2' to disable autoclicker\n";
	// cout << "Press 4 to increase and 5 to decrease the click speed"; <- yet to be added
}

void ac()
{
	bool click = false; //sets click to false

	while (true)
	{
		if (GetAsyncKeyState('1')) // 1 = true
		{
			click = true;
		}
		else if (GetAsyncKeyState('2')) // 2 = false // if 1 = true, autoclicker begins; if 2 = false then autoclicker stops.
		{
			click = false;
		}
		if (click == true) 
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(1.5); //adjust speed (currently manual but ill figure this shit out eventually)
		}
	}
}

int main()
{
	console();
	ac();

	return 0;
}
