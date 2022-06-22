#pragma once
#include "Human.h"
#include "Student.h"
#include <iostream>
#include <string>
#include <ctime>

class Flat {
public:
	Flat();
	Flat(std::string nameStreet, int numberHouse, int numberFlat, double areaFlat, int countResidents, Human* residents);
	void setNameStreet(std::string nameStreet);
	void setNumberHouse(int numberHouse);
	void setNumberFlat(int numberFlat);
	void setAreaFlat(double areaFlat);
	void setCountResidents(int countResidents);
	void setResidents(Human residents, int pos);
	std::string getNameStreet()const;
	int getNumberHouse()const;
	int getNumberFlat()const;
	std::string getFullAddress() const;
	double getAreaFlat() const;
	double getMinAreaFlat();
	int getCountResidents() const;
	Human getResident(int pos)const;
	void ResidentsList();
	void fullInfoFlat();

private:
	Human* _residents = nullptr;
	int _countResidents = 0;
	std::string _nameStreet;
	int _numberHouse = 0;
	int _numberFlat = 0;
	double _areaFlat = 0;

};
