#include "Consol.h"
#ifdef _WIN32
#include <windows.h>
#endif // _WIN32
#include <iostream>


using namespace std;

Consol::Consol(Alphabet* alphabet)
{
	this->alphabet = alphabet;
	zx = zy = 0;
}

void Consol::writeCommonText(const char* text)
{
	while (*text != '\0'){
		writeToBuffor(*text);
		text++;
	}
//	cout << text;
}

void Consol::writeText(const char* text)
{
	const char* p = text;

	while (*p != 0)
	{
		writeSign(*p);
		p++;
	}
}

void Consol::writeSign(char c)
{
	int i, j, x, y, lastX, lastY;
	Sign* sign = alphabet->findSign(c);
	const char* p;

	if (sign == nullptr)
	{
		return;
	}

	p = sign->getContent();

	x = zx;
	y = zy;
	setCursorPosition(x, y);
	i = j = 0;
	lastX = x;
	lastY = y;

	while ((c = p[i++]) != 0)
	{
		if (c != '\n')
		{
			writeToBuffor(c);
			j++;
		}
		else
		{
			setCursorPosition(x, ++y);
			j = 0;
		}

		if (lastX < (x + j))
		{
			lastX = (x + j);
		}
	}

	setCursorPosition(lastX, lastY);
}

void Consol::clean()
{
	setCursorPosition(0, 0);

		for (int y = 0; y < BUFFOR_HEIGHT; y++)
		{
			for (int x = 0; x < BUFFOR_LENGTH; x++)
			{
				buffor[y][x] = ' ';
			}
		}
/*#ifdef _WIN32
	system("cls");
#endif // _WIN32
#ifdef __linux__
	system("clear");
#endif // __linux__ */
}
void Consol::writeToBuffor(char c){
	buffor[zy][zx++] = c;

	if (zx == BUFFOR_LENGTH)
	{
		zx = 0;
		zy++;
	}

}

void Consol::dispose(){
	system("clear");
	for (int y = 0; y < BUFFOR_HEIGHT; y++)
	{
		for (int x = 0; x < BUFFOR_LENGTH; x++)
		{
			cout << buffor[y][x];
		}
		cout << endl;
	}
}

void Consol::setCursorPosition(int x, int y){

	zx = x;
	zy = y;
}

/*void Consol::setPosition(int x, int y)
{
	zx = x;
	zy = y;
#ifdef _WIN32
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), COORD{ (short)x, (short)y });
#endif // _WIN32
#ifdef __linux__
	cout << "\033[" << (y + 1) << ";" << (x + 1) << "H";
#endif // __linux__
} */
