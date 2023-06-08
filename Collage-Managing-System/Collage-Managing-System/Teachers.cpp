#pragma once
#include"Teachers.h"

void Teachers::setinfo( int id, string fname, string lname, string add, string depart)
{
	this->id = id;
	this->FirstName = fname;
	this->LastName = lname;
	this->Addres = add;
	this->department = depart;
	return;

}

void Teachers::CreateTeachersList(Teachers*&head,int id,string fname,string lname,string add,string department)
{
	if (head == NULL)
	{
		Teachers* temp = new Teachers;
		temp->setinfo(id, fname, lname, add, department);
		head = temp;
		return;
	}
	cout << "List is contains data .... You can add new Teacher by using AddTeacher function" << endl;
}

void Teachers::AddTeacher(Teachers*& head,int id,string fname,string lname,string add,string department )
{

	if (head == NULL)
	{
		cout << "List is empty ...... You can use CreateTeacherList function" << endl;
		return;

	}

	Teachers* temp = new Teachers;
	temp->setinfo(id, fname, lname, add, department);
	Teachers* pt = head;
	while (pt->next != NULL)
	{
		pt = pt->next;
	}
	pt->next = temp;
	temp->next = NULL;
	return;

}

void Teachers::getinfo()
{
	cout << this->jobTitel << endl;
	cout << this->id << endl;
	cout << this->FirstName << endl;
	cout << this->LastName << endl;
	cout << this->Addres << endl;
	cout << this->department<< endl;
	return;

}

void Teachers::display(Teachers*& head)
{
	if (head == NULL)
	{
		cout << "List is empty...." << endl;
		return;
	}

	Teachers* pt = head;
	while (pt != NULL)
	{
		pt->getinfo();
		pt = pt->next;

	}

}
