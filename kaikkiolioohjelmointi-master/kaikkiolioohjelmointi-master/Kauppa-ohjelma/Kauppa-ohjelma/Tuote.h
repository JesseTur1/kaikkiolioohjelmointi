#ifndef Tuote_h
#define Tuote_h
#include <string>

class Tuote
{
public:
	Tuote(std::string n, int h, int i);
	~Tuote();
	void tulosta();
	void laskeUusiHinta(double alePros);
	void muutaHintaa(float uusiinta);
	int hinta;


private:
	std::string nimi;
	int id;
};
#endif // !Tuote_h