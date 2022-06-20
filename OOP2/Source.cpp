#define _CRT_SECURE_NO_WARNINGS
#include "Human.h"
#include "Student.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


class Flat {
public:
	Flat(){}
	Flat(std::string nameStreet, int numberHouse, int numberFlat, double areaFlat, int countResidents, Human *residents){
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
	void setNameStreet(string nameStreet) {
		_nameStreet = nameStreet;
	}
	void setNumberHouse(int numberHouse) {
		_numberHouse = numberHouse;
	}
	void setNumberFlat(int numberFlat) {
		_numberFlat = numberFlat;
	}
	void setAreaFlat(double areaFlat) {
		_areaFlat = areaFlat;
	}
	void setCountResidents(int countResidents) {
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
	void setResidents(Human residents, int pos) {
		if (pos > _countResidents || pos < 0)
			false;
		_residents[pos] = residents;
	}
	std::string getNameStreet()const{
		return _nameStreet;
	}
	int getNumberHouse()const{
		return _numberHouse;
	}
	int getNumberFlat()const{
		return _numberFlat;
	}
	std::string getFullAddress() const{
		return "Улица " + _nameStreet + ", дом " + to_string(_numberHouse) + ", квартира" + to_string(_numberFlat);
	}
	double getAreaFlat() const{
		return _areaFlat;
	}
	double getMinAreaFlat(){
		return getAreaFlat() / 18;
	}
	int getCountResidents() const{
		return _countResidents;
	}
	Human getResident(int pos)const{
		return _residents[pos];
	}
	void ResidentsList(){
		std::cout << "Список жильцов:\n";
		for (int i = 0; i < _countResidents; i++)
			std::cout << "1. " << & _residents[i];
	}
	void fullInfoFlat(){
		std::cout << "Адрес - " << getFullAddress() << std::endl;
		std::cout << "Площадь - " << getAreaFlat() << std::endl;
		std::cout << "Кол-во жильцов - " << getCountResidents() << std::endl;
		std::cout << "";
	}

private:
	Human* _residents = nullptr;
	int _countResidents = 0;
	std::string _nameStreet;
	int _numberHouse = 0;
	int _numberFlat = 0;
	double _areaFlat = 0;

};

int main() {
	setlocale(LC_ALL, "Russian");
	Human person("Бутаков", "Максим", "Александрович", 20, 9, 2006);
	Human person2("Малахитов", "Андрей", "Олегович");
	Human person3;
	Human person4("Кощеев", "Андрей", "Степанович", 30, 4, 1999);
	Human person5("Гончаров", "Сергей", "Никитович", 28, 2, 2003);

	person2.setBirthday(21, 10, 2007);
	person3.setBirthday(22, 11, 2008);
	person3.setSureName("Андреев");
	person3.setName("Олег");
	person3.setPatronymic("Михайлович");

	Student MaxStud(person, 11, "Разработчик ПО", 10, new int[10]{ 8,8,7,1,1,1,7,7,10,12 });
	Student AndrewStud(person2, 111, "Разработчик ПО");
	Student Anton;

	AndrewStud.setCountGrades(5);
	AndrewStud.setGrades(12, 0);
	AndrewStud.setGrades(6, 1);
	AndrewStud.setGrades(6, 2);
	AndrewStud.setGrades(9, 3);
	AndrewStud.setGrades(12, 4);
	
	Anton.setSureName("Иванов");
	Anton.setName("Антон");
	Anton.setPatronymic("Степанович");
	Anton.setGroup(9);
	Anton.setDirection("Дизайн");
	Anton.setCountGrades(3);
	Anton.setGrades(12, 0);
	Anton.setGrades(12, 1);
	Anton.setGrades(12, 2);



	cout << "Человек:\n\n";
	person.fullInfoPerson();
	cout << endl;
	person2.fullInfoPerson();
	cout << endl;
	person3.fullInfoPerson();
	cout << "\n\n-----------------------------\n\n";
	MaxStud.fullInfoStudent();
	cout << endl;
	AndrewStud.fullInfoStudent();
	cout << endl;
	Anton.fullInfoStudent();
	cout << endl;


	return 0;
}
