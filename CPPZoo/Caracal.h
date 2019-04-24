// Caracal Class

#pragma once
#include "Animal.h"

class Caracal : public Animal
{
public:
	Caracal();

	// override base class method specific to Caracal
	std::string speak();

	~Caracal();
};

