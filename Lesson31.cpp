// Lesson31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>


class mobileTelephone {
	bool buttonTurnOnOff;
	
public:
	virtual void Phone() = 0;
	virtual void PlayGames() {
		cout << "No base realization" << endl;
	}
	virtual void RecordTiktak() {
		cout << "No base realization" << endl;
	}
};

class SmartPhone : public mobileTelephone {
	bool sensor;
public:
	virtual void Phone() override {
		cout << "Your Phone ringing" << endl;
	}

	virtual void PlayGames() override{
		cout << "You playing games on smartphone" << endl;
	}
};

class CameraPhone : public mobileTelephone {
	bool coolCamera;
public:
	virtual void Phone() override {
		cout << "Your Phone ringing! CameraPhone " << endl;
	}

	virtual void RecordTiktak() override {
		cout << "You recording tik toks" << endl;
	}
};
int main()
{
	mobileTelephone* obj = new SmartPhone();
	obj->Phone();
	obj->PlayGames();

	obj = new CameraPhone();
	obj->Phone();
	obj->RecordTiktak();



}

