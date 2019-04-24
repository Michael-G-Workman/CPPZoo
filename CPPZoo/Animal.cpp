// base class for all the animal classes that will be derived from this class.
// make all methods virtual in the event we change the base class methods
// in the future to be overridden in the derived class.

#include "Animal.h"

// class constructor
Animal::Animal()
{
}

void Animal::walkForward() {
	cout << "The " << animalType << " is walking forward!";
}

void Animal::walkBackward() {
	cout << "The " << animalType << " is walking backward!";
}

int Animal::getWeight() {
	return animalWeight;
}

void Animal::setWeight(int weight) {
	animalWeight = weight;
}

int Animal::getAge() {
	return animalAge;
}

void Animal::setAge(int age) {
	animalAge = age;
}

std::string Animal::getSex() {
	return animalSex;
}

void Animal::setSex(std::string sex) {
	animalSex = sex;
}

std::string Animal::getAnimalType() {
	return animalType;
}

std::string Animal::speak() {
	return "The Animal is Speaking!!";
}

std::string Animal::getAnimalInfo() {
	if ((animalSex != "") && (animalWeight != 0) && (animalAge != 0) && (animalType != "")) {
		return "The Animal is a " + std::to_string(animalWeight) + " pound " + animalSex + " " + animalType + " that is " + std::to_string(animalAge) + " years old.";
	}
	else {
		return "Info not set for this animal";
	}
}

// class destructor
Animal::~Animal()
{
	// reset protected vars to initial value so they are null when the pointer to the object is deleted
	// we do not want the values of these variables to persist in memory after the object is deleted
	animalType = "";
	animalSex = "";
	animalAge = 0;
	animalWeight = 0;
}
