// Lion Class

#pragma once
#include "Animal.h"

class Lion : public Animal
{
public:

	// constructor
	Lion();

	// override base class method specific to Lion
	std::string speak();

	// destructor
	~Lion();
};

