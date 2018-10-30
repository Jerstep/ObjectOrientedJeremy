#pragma once
#include "Person.h"

class Teacher : public Person {
	private:
		std::string name;
		std::string catName;
		int age;

	public:
		Teacher(int age, std::string name, std::string catName);
		int getAge();
		std::string getName();
		std::string getCatName();
};

