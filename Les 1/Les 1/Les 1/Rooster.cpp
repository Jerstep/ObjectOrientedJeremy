#include "Rooster.h"



Rooster::Rooster(int w, int h) {
	w = width;
	h = height;
}

// Een functie die het formaat van het gebruikte venster moet vinden.
int Rooster::getSize() {
	return width, height;
}

// Een functie die aangeeft welke dag het is
void Rooster::dayPointer(int d) {
	d = getDate();
}

// Een functie die de datum zoekt en doorgeeft
int Rooster::getDate() {
	return day;
}