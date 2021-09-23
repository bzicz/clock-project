#include "Alphabet.h"
#define BUFFOR_HEIGHT 20
#define BUFFOR_LENGTH 60

class Consol
{
public:
	Consol(Alphabet* alphabet);
	void writeSign(char znak);
	void writeText(const char* tekst);
	void writeCommonText(const char* tekst);
	void clean();
	void dispose();
	//void setPosition(int x, int y);
	void setCursorPosition(int x, int y);
private:
	Alphabet* alphabet;
	char buffor[BUFFOR_HEIGHT][BUFFOR_LENGTH];
	void writeToBuffor(char c);
	int zx;
	int zy;
};
