#include "Zebra.h"


// class constructor
Zebra::Zebra()
{
	animalType = "Zebra";
}

// override base class method for specific to Zebra
std::string Zebra::speak()
{
	if (animalSex != "") {
		if ((animalAge <= 2) && (animalAge != 0))
		{
			return "The " + animalSex + " Zebra Foal is attempting to Neigh!!";
		}
		else if (animalAge != 0)
		{
			return "The " + animalSex + " Zebra is Neighing!!";
		}
	}
	else
	{
		return "The Zebra is Neighing!!";
	}
}

// class destructor
Zebra::~Zebra()
{
}
