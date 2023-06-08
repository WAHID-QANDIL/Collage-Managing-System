#pragma once
#include <string>

using namespace std;
class Students
{
private:
	string FirstName;
	string LastName;
	const string Titel = "Student";
	string Addres;
	int Level;
	float Gpa;

protected:
	int ID;
	Students* next = NULL;


public:
	Students() {}
	Students(int id, string fname, string lname, string add, int level, float gpa) {
		this->ID = id;
		this->FirstName = fname;
		this->LastName = lname;
		this->Addres = add;
		this->Level = level;
		this->Gpa = gpa;

	}
	~Students() {}

	void setInfo(int, string, string, string);
	void setGPALevel(Students*&, int, int, float);
	void infoModify(Students*& head, int, string, string, string);
	void addStudent(Students*&, int, string, string, string, float, int);
	void CreateStudentList(Students*&, int, string, string, string, float, int);
	void getinfo();
	void display(Students*&);


};

