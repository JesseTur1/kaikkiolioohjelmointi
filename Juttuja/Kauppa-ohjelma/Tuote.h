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

	//int getID() {return id;}; toinen mahdollinen tapa tehd� t�m�

	int id; //sen sijaan ett� pist�isi kaiken publiciksi
	float hinta;
private:
	std::string nimi;
};
#endif // !Tuote_h