#pragma once
#include <string>
class Asiakastili
{
public:
	Asiakastili(std::string n,int i, float s);
	~Asiakastili();
	void lisaaTilille(float a);
	void nollaa(void);
	void tulosta();
private:
	std::string nimi;
	int id;
	int saldo;
};

