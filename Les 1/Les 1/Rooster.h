#pragma once
class Rooster {
	private:
		int width, height;
		int day;

	public:
		Rooster(int width, int height);
		void dayPointer(int day);
		int getDate();
		int getSize();
};

