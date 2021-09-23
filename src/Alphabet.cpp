#include "Alphabet.h"

const char* ALPHABET[12] =
{
	" _______  \n(  __   ) \n| (  )  | \n| | /   | \n| (/ /) | \n|   / | | \n|  (__) | \n(_______) \n",
	"  __      \n /  \\     \n \\/) )    \n   | |    \n   | |    \n   | |    \n __) (_   \n \\____/   \n",
	" _______  \n/ ___   ) \n\\/   )  | \n    /   ) \n  _/   /  \n /   _/   \n(   (__/\\ \n\\_______/ \n",
	" ______   \n/ ___  \\  \n\\/   \\  \\ \n   ___) / \n  (___ (  \n      ) \\ \n/\\___/  / \n\\______/  \n",
	"    ___   \n   /   )  \n  / /) |  \n / (_) (_ \n(____   _)\n     ) (  \n     | |  \n     (_)  \n",
	" _______  \n(  ____ \\ \n| (    \\/ \n| (____   \n(_____ \\  \n      ) ) \n/\\____) ) \n\\______/  \n",
	"  ______  \n / ____ \\ \n( (    \\/ \n| (____   \n|  ___ \\  \n| (   ) ) \n( (___) ) \n \\_____/  \n",
	" ______   \n/ ___  \\  \n\\/   )  ) \n    /  /  \n   /  /   \n  /  /    \n /  /     \n \\_/      \n",
	"  _____   \n / ___ \\  \n( (___) ) \n \\     /  \n / ___ \\  \n( (   ) ) \n( (___) ) \n \\_____/  \n",
	"  _____   \n / ___ \\  \n( (   ) ) \n( (___) | \n \\____  | \n      ) | \n/\\____) ) \n\\______/  \n",
	"          \n          \n          \n _____    \n(_____)   \n          \n          \n          \n",
	"          \n _        \n(_)       \n          \n _        \n(_)       \n          \n          \n"
};

Alphabet::Alphabet()
{
	for (int i = 0; i < 12; i++)
	{
		letters[i].setContent(ALPHABET[i]);
	}
}

Sign* Alphabet::findSign(char c)
{
	if (c == '0') return &letters[0];
	if (c == '1') return &letters[1];
	if (c == '2') return &letters[2];
	if (c == '3') return &letters[3];
	if (c == '4') return &letters[4];
	if (c == '5') return &letters[5];
	if (c == '6') return &letters[6];
	if (c == '7') return &letters[7];
	if (c == '8') return &letters[8];
	if (c == '9') return &letters[9];
	if (c == '-') return &letters[10];
	if (c == ':') return &letters[11];

	return nullptr;
}
