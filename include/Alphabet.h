#include "Sign.h"

class Alphabet
{
public:
	Alphabet();
	Sign* findSign(char c);
private:
	Sign letters[12];
};

