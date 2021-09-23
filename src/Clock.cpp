#include "Consol.h"
#include <chrono>
#include <iomanip>
#include <thread>
#include <sstream>


using namespace std;

int main()
{
	Alphabet alphabet;
	Consol consol(&alphabet);

	while (true)
	{
		auto now = chrono::system_clock::now();
		time_t t = chrono::system_clock::to_time_t(now);
		stringstream s;

		consol.clean();
		consol.setCursorPosition(5, 5);
		s << put_time(localtime(&t), "%H:%M");
		consol.writeText(s.str().c_str());
		consol.setCursorPosition(38, 3);
		consol.writeCommonText("Hello, friend");
		consol.setCursorPosition(5, 4);
		consol.writeCommonText("--------------------------------------------------");
		consol.setCursorPosition(5, 5);
		consol.writeCommonText("|");
		consol.setCursorPosition(5, 6);
		consol.writeCommonText("|");
		consol.setCursorPosition(5, 7);
		consol.writeCommonText("|");
		consol.setCursorPosition(5, 8);
		consol.writeCommonText("|");
		consol.setCursorPosition(5, 9);
		consol.writeCommonText("|");
		consol.setCursorPosition(5, 10);
		consol.writeCommonText("|");
		consol.setCursorPosition(5, 11);
		consol.writeCommonText("|");
		consol.setCursorPosition(5, 12);
		consol.writeCommonText("|");
		consol.setCursorPosition(5, 13);
		consol.writeCommonText("|");
		consol.setCursorPosition(54, 5);
		consol.writeCommonText("|");
		consol.setCursorPosition(54, 6);
		consol.writeCommonText("|");
		consol.setCursorPosition(54, 7);
		consol.writeCommonText("|");
		consol.setCursorPosition(54, 8);
		consol.writeCommonText("|");
		consol.setCursorPosition(54, 9);
		consol.writeCommonText("|");
		consol.setCursorPosition(54, 10);
		consol.writeCommonText("|");
		consol.setCursorPosition(54, 11);
		consol.writeCommonText("|");
		consol.setCursorPosition(54, 12);
		consol.writeCommonText("|");
		consol.setCursorPosition(54, 13);
		consol.writeCommonText("|");
		consol.setCursorPosition(5, 14);
		consol.writeCommonText("--------------------------------------------------");
		consol.dispose();
		this_thread::sleep_for(chrono::seconds(2));
	}

	return 0;
}
