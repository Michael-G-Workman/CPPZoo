#pragma once
#include "Animal.h"

class Giraffe : public Animal
{
public:

	// class constructor
	Giraffe();

	// override base class method specific to Giraffe
	std::string speak();

	// class destructor
	~Giraffe(
	);
};

