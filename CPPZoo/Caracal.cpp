#include "Caracal.h"

// class constructor
Caracal::Caracal()
{
	animalType = "Caracal";
}

// override base class method for specific to Caracal
std::string Caracal::speak()
{
	if (animalSex != "") {
		if ((animalAge <= 2) && (animalAge != 0))
		{
			return "The " + animalSex + " Caracal Cub is attempting to Meow!!";
		}
		else if (animalAge != 0)
		{
			return "The " + animalSex + " Caracal is Meowing!!";
		}
	}
	else
	{
		return "The Caracal is Meowing!!";
	}
}

// class destructor
Caracal::~Caracal()
{
}
