#pragma once
#include "Person.h"

class Student : public Person {
	private:
		std::string name;
		std::string dogName;
		int age;

	public:
		Student(int age, std::string name, std::string dogName);
		int getAge();
		std::string getName();
		std::string getDogName();
};

