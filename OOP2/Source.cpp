#include "Human.h"
#include "Student.h"
#include "Flat.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");
	Human person("�������", "������", "�������������", 20, 9, 2006);
	Human person2("���������", "������", "��������");
	Human person3;
	Human person4("������", "������", "����������", 30, 4, 1999);
	Human person5("��������", "������", "���������", 28, 2, 2003);

	person2.setBirthday(21, 10, 2007);
	person3.setBirthday(22, 11, 2008);
	person3.setSureName("�������");
	person3.setName("����");
	person3.setPatronymic("����������");

	Student MaxStud(person, 11, "����������� ��", 10, new int[10]{ 8,8,7,1,1,1,7,7,10,12 });
	Student AndrewStud(person2, 111, "����������� ��");
	Student Anton;

	AndrewStud.setCountGrades(5);
	AndrewStud.setGrades(12, 0);
	AndrewStud.setGrades(6, 1);
	AndrewStud.setGrades(6, 2);
	AndrewStud.setGrades(9, 3);
	AndrewStud.setGrades(12, 4);
	
	Anton.setSureName("������");
	Anton.setName("�����");
	Anton.setPatronymic("����������");
	Anton.setGroup(9);
	Anton.setDirection("������");
	Anton.setCountGrades(3);
	Anton.setGrades(12, 0);
	Anton.setGrades(12, 1);
	Anton.setGrades(12, 2);

	Flat flat1("Groove Street", 25, 121, 44.25, 3, new Human[3]{ person, person2, person3 });
	Flat flat2;
	flat2.setNameStreet("Stepana Razina");
	flat2.setNumberHouse(26);
	flat2.setNumberFlat(131);
	flat2.setAreaFlat(31.21);
	flat2.setCountResidents(2);
	flat2.setResidents(person4, 0);
	flat2.setResidents(person5, 1);


	cout << "�������:\n\n";
	person.fullInfoPerson();
	cout << endl;
	person2.fullInfoPerson();
	cout << endl;
	person3.fullInfoPerson();
	cout << "\n\n-----------------------------\n\n�������:\n\n";
	MaxStud.fullInfoStudent();
	cout << endl;
	AndrewStud.fullInfoStudent();
	cout << endl;
	Anton.fullInfoStudent();
	cout << endl;
	cout << "-----------------------------\n\n��������:\n\n";
	flat1.fullInfoFlat();
	cout << "\n\n";
	flat1.ResidentsList();
	cout << endl;
	flat2.fullInfoFlat();
	cout << "\n\n";
	flat2.ResidentsList();


	return 0;
}
