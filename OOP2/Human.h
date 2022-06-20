#pragma once
#include <iostream>
#include <string>
#include <ctime>

class Human {
public:
	Human();
	Human(std::string surname, std::string name, std::string patronymic, int day, int month, int year);
	Human(std::string surname, std::string name, std::string patronymic);
	void setBirthday(int day, int month, int year);
	void setSureName(std::string surname);
	void setPatronymic(std::string patronymic);
	void setName(std::string name);
	int getAge()const;
	std::string getBirthday();
	std::string getSurName() const;
	std::string getName() const;
	std::string getPatronymic() const;
	void fullInfoPerson();

private:
	tm _birthday{ 0 };
	std::string _surname;
	std::string _name;
	std::string _patronymic;
};
