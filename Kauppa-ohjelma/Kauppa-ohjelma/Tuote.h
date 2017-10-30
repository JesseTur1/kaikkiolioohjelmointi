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

private:
	std::string nimi;
	int hinta;
	int id;
};
#endif // !Tuote_h