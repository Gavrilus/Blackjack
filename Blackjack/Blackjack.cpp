#include <iostream>
#include < string>

using namespace std;
class Card
{
public:
	enum Simbol { INIMA_R, INIMA_N, TREFLA, ROMB };
	enum Valoare { DOI, TREI, PATRU, CINCI, SASE, SAPTE, OPT, NOUA, JET = 10, REGINA = 10, REGE = 10, AS = 10 };

	Card(Simbol s, Valoare v) : simbol(s), valoare(v) {}
		

		int getValoare() const
		{
			return valoare;
		}

		std::string toString() const  {
			const std::string simboale[] = { "INIMA R","INIMA N","TREFLA", "ROMB" };
			const std::string valori[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jet", "Regina", "Rege", "As" };
			return valori[valoare - 2] + " a " + simboale[simbol];
		}

private:

	Simbol simbol;
	Valoare valoare;
	
	};


