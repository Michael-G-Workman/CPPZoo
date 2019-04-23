// CPPZoo.cpp
//
// by Michael G. Workman
//
// This C++ program shows inheritance and object oriented development in an example console application
// emulating a Zoo and the animals in the Zoo
//
// (c) 2019 Michael G. Workman
// This application is freely distributable under terms of the MIT open source license

#include <iostream>
#include "Lion.h"
#include "Giraffe.h"
#include "Zebra.h"
#include "Pangolin.h"

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

	// create the first Pangolin, a 3 year old 10 pound male
	Pangolin* pangolin1 = new Pangolin();
	pangolin1->setWeight(10);
	pangolin1->setAge(3);
	pangolin1->setSex("Male");

	// create the second Pangolin, a 1 year old 1 pound male kit
	Pangolin* pangolin2 = new Pangolin();
	pangolin2->setWeight(1);
	pangolin2->setAge(1);
	pangolin2->setSex("Male");

	// the first lion speaks
	std::cout << lion1->speak() << "\n\n";

	// get the first lion info
	std::cout << lion1->getAnimalInfo() << "\n\n";

	// the second lion speaks
	std::cout << lion2->speak() << "\n\n";

	// get the second lion info
	std::cout << lion2->getAnimalInfo() << "\n\n";

	// the first giraffe bleats
	std::cout << giraffe1->speak() << "\n\n";

	// get the first giraffe info
	std::cout << giraffe1->getAnimalInfo() << "\n\n";

	// the second giraffe bleats
	std::cout << giraffe2->speak() << "\n\n";

	// get the second giraffe info
	std::cout << giraffe2->getAnimalInfo() << "\n\n";

	// the first Zebra speaks
	std::cout << zebra1->speak() << "\n\n";

	// get the first Zebra info
	std::cout << zebra1->getAnimalInfo() << "\n\n";

	// the second Zebra speaks
	std::cout << zebra2->speak() << "\n\n";

	// get the second Zebra info
	std::cout << zebra2->getAnimalInfo() << "\n\n";

	// the first Pangolin speaks
	std::cout << pangolin1->speak() << "\n\n";

	// get the first Pangolin info
	std::cout << pangolin1->getAnimalInfo() << "\n\n";

	// the second Pangolin speaks
	std::cout << pangolin2->speak() << "\n\n";

	// get the second Pangolin info
	std::cout << pangolin2->getAnimalInfo() << "\n\n";

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
}
