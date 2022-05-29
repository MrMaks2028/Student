#include <iostream>
#include <string>
using namespace std;

class Human {
public:
	Human() {}
	Human(std::string surname, std::string name, std::string patronymic, int age) {
		_surname = surname;
		_name = name;
		_patronymic = patronymic;
		_age = age;
	}
	void setAge(int age) {
		_age = age;
	}
	void setSureName(std::string surname) {
		_surname = surname;
	}
	void setPatronymic(std::string patronymic) {
		_patronymic = patronymic;
	}
	void setName(std::string name) {
		_name = name;
	}
	int getAge() const {
		return _age;
	}
	string getSurName() const {
		return _surname;
	}
	string getName() const {
		return _name;
	}
	string getPatronymic() const {
		return _patronymic;
	}

private:
	int _age = 0;
	string _surname;
	string _name;
	string _patronymic;
};

class Student {
public:
	Student(){}
	Student(Human person, double grades, string group, string direction) {
		_person = person;
		_grades = grades;
		_group = group;
		_direction = direction;
	}
	int getAge() const {
		return _person.getAge();
	}
	string getSurName() const {
		return _person.getSurName();
	}
	string getName() const {
		return _person.getName();
	}
	string getPatronymic() const {
		return _person.getPatronymic();
	}
	void setGrades(int grades) {
		_grades = grades;
	}
	void setGroup(string group) {
		_group = group;
	}
	void setDirection(string direction) {
		_direction = direction;
	}
	double getGrades() {
		return _grades;
	}
	string getGroup() {
		return _group;
	}
	string getDirection() {
		return _direction;
	}

private:
	Human _person;
	double _grades = 0;
	string _group;
	string _direction;
};

class Flat: public Human {
public:
	Flat(){}
	Flat(Human *tenant, string address, float area){
		*_tenant = *tenant;
		_address = address;
		_area = area;
	}
	void setAddress(string address){
		_address = address;
	}
	void setArea(double area){
		_area = area;
	}
	string getAddress(){
		return _address;
	}
	double getArea(){
		return _area;
	}


private:
	Human *_tenant = _tenant;
	string _address;
	double _area = 0;

};

int main() {
	setlocale(LC_ALL, "Russian");
	
	Human human1("Бутаков", "Максим", "Александрович", 15);
	Human* pHuman = &human1;
	Student student1(human1, 10.25, "BV111", "Разработка программного обеспечения");
	Flat flat_list[3];
	
	cout << "Студент\n\nФИО: " << student1.getSurName()
	<< " " << student1.getName() << " " << student1.getPatronymic()
	<< "\nВозраст: " << student1.getAge() << "\nУспеваемость: " << student1.getGrades()
	<< "\nГруппа: " << student1.getGroup() << "\nНаправление: " << student1.getDirection();

	flat_list[0] = Flat(pHuman, "Groove Street, 25", 20.25);

	cout << "\n\nКвартира\n\nВладелец: " << flat_list[0].getSurName() << " " << flat_list[0].getName();
	cout << "\nАдресс: " << flat_list[0].getAddress() << "\nПлощадь: " << flat_list[0].getArea();

	

	return 0;
}
