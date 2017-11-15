#ifndef Tuote_h
#define Tuote_h
#include <string>
#include <vector>

class Tuote
{
public:
	Tuote(std::string n, float h, int i);
	virtual ~Tuote();
	virtual void tulosta();
	void laskeUusiHinta(float alePros);

	//int getID() {return id;}; toinen mahdollinen tapa tehdä tämä

	int id; //sen sijaan että pistäisi kaiken publiciksi
	float hinta;
private:
	std::string nimi;
};
#endif // !Tuote_h