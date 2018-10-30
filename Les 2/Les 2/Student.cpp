#include "Student.h"



Student::Student(int _age, std::string _name, std::string _dogName) {
	age = _age;
	name = _name;
	dogName = _dogName;
}

int Student::getAge() {
	return age;
}

std::string Student::getName() {
	return name;
}

std::string Student::getDogName() {
	return dogName;
}