#include "Giraffe.h"


// class constructor
Giraffe::Giraffe()
{
	animalType = "Giraffe";
}

// override base class method for specific to Giraffe
std::string Giraffe::speak()
{
	if (animalSex != "") {
		if ((animalAge <= 2) && (animalAge != 0))
		{
			return "The " + animalSex + " Giraffe Calf is attempting to Bleat!!";
		}
		else if (animalAge != 0)
		{
			return "The " + animalSex + " Giraffe is Bleating!!";
		}
	}
	else
	{
		return "The Giraffe is Bleating!!";
	}
}

// class destructor
Giraffe::~Giraffe()
{
}
