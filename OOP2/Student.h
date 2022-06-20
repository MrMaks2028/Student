#pragma once
#include "Human.h"
#include <iostream>
#include <string>
#include <ctime>

class Student {
public:
	Student();
	Student(Human person, int group, std::string direction);
	Student(Human person, int group, std::string direction, int countGrades, int* grades);
	~Student();
	void setSureName(std::string surname);
	void setPatronymic(std::string patronymic);
	void setName(std::string name);
	void setGrades(int grades, int pos);
	void setCountGrades(int countGrades);
	void setGroup(int group);
	void setDirection(std::string direction);
	std::string getSurName() const;
	std::string getName() const;
	std::string getPatronymic() const;
	int getGroup()const;
	std::string getDirection();
	void printGrades()const;
	double academicProgress();
	void fullInfoStudent();

private:
	Human _person;
	int* _grades = nullptr;
	int _countGrades = 0;
	int _group = 0;
	std::string _direction;
};
