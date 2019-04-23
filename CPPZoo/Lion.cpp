#include "Lion.h"

// class constructor
Lion::Lion()
{
	animalType = "Lion";
}

// override base class method for specific to Lion
std::string Lion::speak()
{
	if (animalSex != "") {
		if ((animalAge <= 2) && (animalAge != 0))
		{
			return "The " + animalSex + " Lion Cub is attempting to Roar!!";
		}
		else if (animalAge != 0)
		{
			return "The " + animalSex + " Lion is Roaring!!";
		}
	}
	else
	{
		return "The Lion is Roaring!!";
	}
}

// class destructor
Lion::~Lion()
{
}
