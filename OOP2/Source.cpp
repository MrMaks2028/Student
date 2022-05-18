#include <iostream>
#include <string>
using namespace std;

class Human {
public:
	Human() {}
	Human(std::string s, std::string n, std::string p, int a) {
		surname = s;
		name = n;
		patronymic = p;
		age = a;
	}
	void setAge(int a) {
		age = a;
	}
	void setSureName(std::string s) {
		surname = s;
	}
	void setPatronymic(std::string p) {
		patronymic = p;
	}
	void setName(std::string n) {
		name = n;
	}
	int getAge() const {
		return age;
	}
	std::string getSurName() const {
		return surname;
	}
	std::string getName() const {
		return name;
	}
	std::string getPatronymic() const {
		return patronymic;
	}

private:
	int age;
	std::string surname;
	std::string name;
	std::string patronymic;
};

class Student {
public:
	Student();
	Student(Human person, double grades, string group, string direction) {
		person.getSurName(surname);
	}

	
	void setGrades(int g) {
		grades = g;
	}
	void setGroup(int g) {
		group = g;
	}
	void setDirection(string d) {
		direction = d;
	}
	double getGrades() {
		return grades;
	}
	string getGroup() {
		return group;
	}
	string getDirection() {
		return direction;
	}

private:
	Human person;
	double grades;
	string group;
	string direction;
};

int main() {
	setlocale(LC_ALL, "Russian");


	return 0;
}