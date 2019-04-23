#pragma once
#include "Animal.h"

class Pangolin : public Animal
{
public:

	// class constructor
	Pangolin();

	// override base class method specific to Pangolin
	std::string speak();

	// class destructor
	~Pangolin();
};

