// CPPZoo
//
// by Michael G. Workman
//
// This C++ program shows inheritance and object oriented development in an example console application
// emulating a Zoo and the animals in the Zoo
//
// (c) 2019 Michael G. Workman
// This application is freely distributable under terms of the MIT open source license

#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
#include <vector>

#include "Lion.h"
#include "Giraffe.h"
#include "Zebra.h"
#include "Pangolin.h"
#include "Caracal.h"

int main()
{
	// create first Lion, a 5 year old 400 lb male adult
	Lion* lion1 = new Lion();
	lion1->setWeight(400);
	lion1->setAge(5);
	lion1->setSex("Male");

	// create the second Lion, a 1 year old 100 pound female cub
	Lion* lion2 = new Lion();
	lion2->setWeight(100);
	lion2->setAge(1);
	lion2->setSex("Female");

	// create the first Giraffe, a 5 year old 500 pound male
	Giraffe* giraffe1 = new Giraffe();
	giraffe1->setWeight(500);
	giraffe1->setAge(5);
	giraffe1->setSex("Male");

	// create the second Giraffe, a 1 year old 100 pound female calf
	Giraffe* giraffe2 = new Giraffe();
	giraffe2->setWeight(100);
	giraffe2->setAge(1);
	giraffe2->setSex("Female");

	// create the first Zebra, a 6 year old 300 pound female
	Zebra* zebra1 = new Zebra();
	zebra1->setWeight(300);
	zebra1->setAge(6);
	zebra1->setSex("Female");

	// create  the second Zebra, a 1 year old 100 pound female foal
	Zebra* zebra2 = new Zebra();
	zebra2->setWeight(100);
	zebra2->setAge(1);
	zebra2->setSex("Female");

	// create the first Pangolin, a 3 year old 10 pound male adult
	Pangolin* pangolin1 = new Pangolin();
	pangolin1->setWeight(10);
	pangolin1->setAge(3);
	pangolin1->setSex("Male");

	// create the second Pangolin, a 1 year old 1 pound male kit
	Pangolin* pangolin2 = new Pangolin();
	pangolin2->setWeight(1);
	pangolin2->setAge(1);
	pangolin2->setSex("Male");

	// create the first Caracal, a 3 year old 35 pound male adult
	Caracal* caracal1 = new Caracal();
	caracal1->setWeight(35);
	caracal1->setAge(3);
	caracal1->setSex("Male");

	// create the second Caracal, a 1 year old 15 pound female cub
	Caracal* caracal2 = new Caracal();
	caracal2->setWeight(15);
	caracal2->setAge(1);
	caracal2->setSex("Female");
	
	// intro
	cout << "Welcome to the CPP Zoo!\n\n";
	
	// the first lion speaks
	cout << lion1->speak() << "\n\n";

	// get the first lion info
	cout << lion1->getAnimalInfo() << "\n\n";

	// the second lion speaks
	cout << lion2->speak() << "\n\n";

	// get the second lion info
	cout << lion2->getAnimalInfo() << "\n\n";

	// the first giraffe bleats
	cout << giraffe1->speak() << "\n\n";

	// get the first giraffe info
	cout << giraffe1->getAnimalInfo() << "\n\n";

	// the second giraffe bleats
	cout << giraffe2->speak() << "\n\n";

	// get the second giraffe info
	cout << giraffe2->getAnimalInfo() << "\n\n";

	// the first Zebra speaks
	cout << zebra1->speak() << "\n\n";

	// get the first Zebra info
	cout << zebra1->getAnimalInfo() << "\n\n";

	// the second Zebra speaks
	cout << zebra2->speak() << "\n\n";

	// get the second Zebra info
	cout << zebra2->getAnimalInfo() << "\n\n";

	// the first Pangolin speaks
	cout << pangolin1->speak() << "\n\n";

	// get the first Pangolin info
	cout << pangolin1->getAnimalInfo() << "\n\n";

	// the second Pangolin speaks
	cout << pangolin2->speak() << "\n\n";

	// get the second Pangolin info
	cout << pangolin2->getAnimalInfo() << "\n\n";

	// the first Caracal speaks
	cout << caracal1->speak() << "\n\n";

	// get the first Caracal info
	cout << caracal1->getAnimalInfo() << "\n\n";

	// the second Caracal speaks
	cout << caracal2->speak() << "\n\n";

	// get the second Caracal info
	cout << caracal2->getAnimalInfo() << "\n\n";

	// create an array of animals for the entire Zoo
	Animal* const zooAnimals[] = { lion1, lion2, giraffe1, giraffe2, zebra1, zebra2, pangolin1, pangolin2, caracal1, caracal2 };

	// list the animal type for each animal
	int length = (sizeof(zooAnimals) / sizeof(Animal*));
	for (int i = 0; i < length; i++) {
		cout << "Animal #" + std::to_string(i+1) + " Animal Type: " +  zooAnimals[i]->getAnimalType() + "\n";
	}

	// create an STL LIST to hold the animals in the zoo
	// push the animal objects onto the list
	list<Animal*> zooAnimalsList;
	zooAnimalsList.clear();
	zooAnimalsList.push_back(lion1);
	zooAnimalsList.push_back(lion2);
	zooAnimalsList.push_back(giraffe1);
	zooAnimalsList.push_back(giraffe2);
	zooAnimalsList.push_back(zebra1);
	zooAnimalsList.push_back(zebra2);
	zooAnimalsList.push_back(pangolin1);
	zooAnimalsList.push_back(pangolin2);
	zooAnimalsList.push_back(caracal1);
	zooAnimalsList.push_back(caracal2);

	// intro line
	cout << "\nZoo Animals List:\n\n";

	// loop through the LIST using an iterator and calling class methods
	list<Animal*>::iterator listItr;
	for (listItr = zooAnimalsList.begin(); listItr != zooAnimalsList.end(); listItr++) {

		// call the base class method
		cout << "Animal Type: " << (*listItr)->getAnimalType() << "\n";

		// call the derived class method
		cout << (*listItr)->speak() << "\n";
	}

	// create a dynamic STL VECTOR to hold the animals in the zoo
	// push the animal objects onto the vector
	vector<Animal*> zooAnimalsVector;
	zooAnimalsVector.push_back(lion1);
	zooAnimalsVector.push_back(lion2);
	zooAnimalsVector.push_back(giraffe1);
	zooAnimalsVector.push_back(giraffe2);
	zooAnimalsVector.push_back(zebra1);
	zooAnimalsVector.push_back(zebra2);
	zooAnimalsVector.push_back(pangolin1);
	zooAnimalsVector.push_back(pangolin2);
	zooAnimalsVector.push_back(caracal1);
	zooAnimalsVector.push_back(caracal2);

	// intro line
	cout << "\nZoo Animals Vector:\n\n";

	// loop through the vector, calling methods
	for (int i = 0; i < zooAnimalsVector.size(); i++) {

		// call the base class method
		cout << "Animal Type: " << zooAnimalsVector[i]->getAnimalType() << "\n";

		// call the derived class method
		cout << zooAnimalsVector[i]->speak() << "\n";
	}


	// delete pointers to objects and set to null
	delete lion1;
	lion1 = 0;

	delete lion2;
	lion2 = 0;

	delete giraffe1;
	giraffe1 = 0;

	delete giraffe2;
	giraffe2 = 0;

	delete zebra1;
	zebra1 = 0;

	delete zebra2;
	zebra2 = 0;

	delete pangolin1;
	pangolin1 = 0;

	delete pangolin2;
	pangolin2 = 0;

	delete caracal1;
	caracal1 = 0;

	delete caracal2;
	caracal2 = 0;

}

