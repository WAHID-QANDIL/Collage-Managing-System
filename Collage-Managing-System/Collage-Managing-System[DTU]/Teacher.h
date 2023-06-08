#pragma once
#include<iostream>
using namespace std;
class Teachers
{
private:
	int id;
	string FirstName;
	string LastName;
	string Addres;
	string department;
	const string jobTitel = "Teacher";


protected:
	Teachers* next = NULL;
	void setinfo(int, string, string, string, string);
public:
	//Teachers(int ID) {
	//	this->setid(ID);
	//}

	~Teachers() { cout << "Deconstractored object..." << this->id; }

	void getinfo();
	void CreateTeachersList(Teachers*&, int, string, string, string, string);
	void AddTeacher(Teachers*&, int, string, string, string, string);
	void display(Teachers*&);




};

