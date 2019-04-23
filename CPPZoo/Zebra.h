#pragma once
#include "Animal.h"

class Zebra : public Animal
{
public:
	Zebra();

	// override base class method specific to Zebra
	std::string speak();

	~Zebra();
};

