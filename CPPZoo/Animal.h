// Animal Class
// an abstract base class for all the animal classes that will be derived from this class.
// make all methods virtual in the event we change the base class methods
// in the future to be overridden in the derived classes.

#pragma once

#include <string>
#include <iostream>

using namespace std;

class Animal
{
public:

	// constructor
	Animal();

	// walk forward
	virtual void walkForward();

	// walk backward
	virtual void walkBackward();

	// get weight
	virtual int getWeight();

	// set weight
	virtual void setWeight(int weight);

	// get age
	virtual int getAge();

	// set age
	virtual void setAge(int age);

	// get sex
	virtual std::string getSex();

	// set sex
	virtual void setSex(std::string sex);

	// get animal type
	virtual std::string getAnimalType();

	// speak
	virtual std::string speak() = 0;

	// get animal info
	virtual std::string getAnimalInfo();

	// destructor
	~Animal();

protected:

	int animalAge = 0;
	int animalWeight = 0;
	std::string animalSex = "";
	std::string animalType = "";

};

