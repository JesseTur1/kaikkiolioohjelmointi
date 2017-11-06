#include "Tuote.h"
#include "Asiakastili.h"
#include <iostream>
#include <string>
#include "Kauppa.h"
#include <vector>
#pragma warning (disable : 4430)

main()
{

	Asiakastili Pekka("Pekka", 1, 0, 1500);
	Pekka.lisaaTilille(1000);
	Pekka.tulosta();
	system("PAUSE");
	return 0;
}