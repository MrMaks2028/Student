#define _CRT_SECURE_NO_WARNINGS
#include "Human.h"
#include <iostream>
#include <string>
#include <ctime>

Human::Human() {}
Human::Human(std::string surname, std::string name, std::string patronymic, int day, int month, int year) {
	_surname = surname;
	_name = name;
	_patronymic = patronymic;
	_birthday.tm_mday = day;
	_birthday.tm_mon = month;
	_birthday.tm_year = year;
}
Human::Human(std::string surname, std::string name, std::string patronymic) {
	_surname = surname;
	_name = name;
	_patronymic = patronymic;
}
void Human::setBirthday(int day, int month, int year) {
	_birthday.tm_mday = day;
	_birthday.tm_mon = month;
	_birthday.tm_year = year;
}
void Human::setSureName(std::string surname) {
	_surname = surname;
}
void Human::setPatronymic(std::string patronymic) {
	_patronymic = patronymic;
}
void Human::setName(std::string name) {
	_name = name;
}
int Human::getAge()const {
	time_t currentTime = time(NULL);
	tm* timeInfo = localtime(&currentTime);
	return timeInfo->tm_year + 1900 - _birthday.tm_year;
}
std::string Human::getBirthday() {
	return std::to_string(_birthday.tm_mday) + "." + std::to_string(_birthday.tm_mon) + "." + std::to_string(_birthday.tm_year);
}
std::string Human::getSurName() const {
	return _surname;
}
std::string Human::getName() const {
	return _name;
}
std::string Human::getPatronymic() const {
	return _patronymic;
}
void Human::fullInfoPerson() {
	std::cout << "Дата рождения и возраст - " << getBirthday() << ", "  << getAge() << " лет" << std::endl;
	std::cout << "Фамилия - " << getSurName() << std::endl;
	std::cout << "Имя - " << getName() << std::endl;
	std::cout << "Отчество - " << getPatronymic() << std::endl;
}