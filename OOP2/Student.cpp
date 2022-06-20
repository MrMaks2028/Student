#include "Human.h"
#include "Student.h"
#include <iostream>
#include <string>
#include <ctime>

Student::Student() {}
Student::Student(Human person, int group, std::string direction) {
	_person = person;
	_group = group;
	_direction = direction;
}
Student::Student(Human person, int group, std::string direction, int countGrades, int* grades) {
	_person = person;
	_group = group;
	_direction = direction;
	_grades = new int[countGrades];
	for (int i = 0; i < countGrades; i++) {
		_grades[i] = grades[i];
	}
	_countGrades = countGrades;
}
Student::~Student() {
	if (_grades != nullptr)
		delete[] _grades;
}
void Student::setSureName(std::string surname) {
	_person.setSureName(surname);
}
void Student::setPatronymic(std::string patronymic) {
	_person.setPatronymic(patronymic);
}
void Student::setName(std::string name) {
	_person.setName(name);
}
void Student::setGrades(int grades, int pos) {
	if (grades > 12 || grades <= 0)
		grades = 0;
	if (pos > _countGrades)
		false;
	_grades[pos] = grades;
}
void Student::setCountGrades(int countGrades) {
	if (_grades != nullptr) {
		int* tmp = new int[_countGrades];
		for (int i = 0; i < _countGrades; i++)
		{
			tmp[i] = _grades[i];
		}
		delete[]_grades;
		_grades = new int[countGrades];
		for (int i = 0; i < _countGrades; i++)
		{
			_grades[i] = tmp[i];
		}
		delete[]tmp;
		tmp = nullptr;
	}
	_grades = new int[countGrades];
	_countGrades = countGrades;
}
void Student::setGroup(int group) {
	_group = group;
}
void Student::setDirection(std::string direction) {
	_direction = direction;
}
std::string Student::getSurName() const {
	return _person.getSurName();
}
std::string Student::getName() const {
	return _person.getName();
}
std::string Student::getPatronymic() const {
	return _person.getPatronymic();
}
int Student::getGroup()const {
	return _group;
}
std::string Student::getDirection() {
	return _direction;
}
void Student::printGrades()const {
	for (int i = 0; i < _countGrades; i++)
		std::cout << _grades[i] << ", ";
	std::cout << "\b\b\n";
}
double Student::academicProgress() {
	double sumGrades = 0;
	for (int i = 0; i < _countGrades; i++)
		sumGrades += _grades[i];
	return sumGrades / _countGrades;
}
void Student::fullInfoStudent() {
	std::cout << "Студент:\n\n";
	std::cout << "Фамилия - " << getSurName() << std::endl;
	std::cout << "Имя - " << getName() << std::endl;
	std::cout << "Отчество - " << getPatronymic() << std::endl;
	std::cout << "Учебное направление - " << getDirection() << std::endl;
	std::cout << "Группа - " << getGroup() << std::endl;
	std::cout << "Успеваемость:\nОценки - "; printGrades();
	std::cout << "Средний балл - " << academicProgress() << std::endl;
}