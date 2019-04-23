#include "Pangolin.h"


// class constructor
Pangolin::Pangolin()
{
	animalType = "Pangolin";
}

// override base class method for specific to Pangolin
std::string Pangolin::speak()
{
	if (animalSex != "") {
		if ((animalAge <= 2) && (animalAge != 0))
		{
			return "The " + animalSex + " Pangolin Kit is attempting to squeak!!";
		}
		else if (animalAge != 0)
		{
			return "The " + animalSex + " Pangolin is squeaking!!";
		}
	}
	else
	{
		return "The Pangolin is Squeaking!!";
	}
}

// class destructor
Pangolin::~Pangolin()
{
}
