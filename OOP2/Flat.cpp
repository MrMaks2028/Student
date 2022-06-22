#include "Human.h"
#include "Student.h"
#include "Flat.h"
#include <iostream>
#include <string>
#include <ctime>

Flat::Flat() {}
Flat::Flat(std::string nameStreet, int numberHouse, int numberFlat, double areaFlat, int countResidents, Human* residents) {
	_nameStreet = nameStreet;
	_numberHouse = numberHouse;
	_numberFlat = numberFlat;
	_areaFlat = areaFlat;
	_residents = new Human[countResidents];
	for (int i = 0; i < countResidents; i++) {
		_residents[i] = residents[i];
	}
	_countResidents = countResidents;
}
void Flat::setNameStreet(std::string nameStreet) {
	_nameStreet = nameStreet;
}
void Flat::setNumberHouse(int numberHouse) {
	_numberHouse = numberHouse;
}
void Flat::setNumberFlat(int numberFlat) {
	_numberFlat = numberFlat;
}
void Flat::setAreaFlat(double areaFlat) {
	_areaFlat = areaFlat;
}
void Flat::setCountResidents(int countResidents) {
	if (_residents != nullptr) {
		Human* tmp = new Human[_countResidents];
		for (int i = 0; i < _countResidents; i++)
		{
			tmp[i] = _residents[i];
		}
		delete[]_residents;
		_residents = new Human[countResidents];
		for (int i = 0; i < _countResidents; i++)
		{
			_residents[i] = tmp[i];
		}
		delete[]tmp;
		tmp = nullptr;
	}
}
void Flat::setResidents(Human residents, int pos) {
	if (pos > _countResidents || pos < 0)
		false;
	_residents[pos] = residents;
}
std::string Flat::getNameStreet()const {
	return _nameStreet;
}
int Flat::getNumberHouse()const {
	return _numberHouse;
}
int Flat::getNumberFlat()const {
	return _numberFlat;
}
std::string Flat::getFullAddress() const {
	return "Улица " + _nameStreet + ", дом " + std::to_string(_numberHouse) + ", квартира" + std::to_string(_numberFlat);
}
double Flat::getAreaFlat() const {
	return _areaFlat;
}
double Flat::getMinAreaFlat() {
	return getAreaFlat() / 18;
}
int Flat::getCountResidents() const {
	return _countResidents;
}
Human Flat::getResident(int pos)const {
	return _residents[pos];
}
void Flat::ResidentsList() {
	std::cout << "Список жильцов:\n";
	for (int i = 0; i < _countResidents; i++)
		std::cout << "1. " << &_residents[i];
}
void Flat::fullInfoFlat() {
	std::cout << "Адрес - " << getFullAddress() << std::endl;
	std::cout << "Площадь - " << getAreaFlat() << std::endl;
	std::cout << "Кол-во жильцов - " << getCountResidents() << std::endl;
	std::cout << "";
}