#include "Students.h"
#include<iostream>
#include<string>

void Students::setInfo(int id,  string fname, string lname, string add)
{
	this->ID = id;
	this->FirstName = fname;
	this->LastName = lname;
	this->Addres = add;
	return;
 
}

void Students::setGPALevel(Students *&head ,int id,int level, float Gpa)
{
	if (head == NULL)
	{
		cout << "This list is empty....." << endl;
		return;
	}
	Students* pt = head;

	while (pt->ID != id)
	{
		pt = pt->next;
	}

	this->Gpa = Gpa;
	this->Level = level;
	return;
}

void Students::infoModify(Students*& head,int id,string fname, string lname, string add)
{
	if (head == NULL)
	{
		cout << "This list is empty....." << endl;
		return;
	}
	Students* pt = head;
	
		while (pt->ID != id)
		{
			pt = pt->next;
		}
		pt->setInfo(1213089, fname, lname, add);
	
	return;

}

void Students::CreateStudentList(Students*& head,int id,string fname,string lname,string add, float gpa, int level)
{
	Students* temp = new Students;
	temp->setInfo(id,fname,lname,add);
	temp->setGPALevel(head, id, level, gpa);
	temp->next = NULL;


	if (head == NULL)
	{
		head = temp;
		cout << "List ctrated succsusfully" << endl;
		return;
	}
	cout << "List is not empty curruntly..... You can use addStudent function to add new student :) " << endl;
}

void Students::addStudent(Students*& head, int id, string fname, string lname, string add, float gpa, int level)
{
	Students* temp = new Students;
	temp->setInfo(id, fname, lname, add);
	temp->setGPALevel(head,id, level ,gpa);
	temp->next = NULL;

	if (head == NULL)
	{
		cout << "List is  empty curruntly..... You can use CreateStudentList function to create new student list :) " << endl;
		return;

	}

	Students* pt = head;
	while (pt->next !=NULL)
	{
		pt = pt->next;
	}
	pt->next = temp;
	temp->next = NULL;

}

void Students::getinfo()
{

	cout << this->Titel << endl;
	cout << this->ID << endl;
	cout << this->FirstName << endl;
	cout << this->LastName << endl;
	cout << this->Addres << endl;
	cout << this->Level << endl;
	cout << this->Gpa << endl;
	

}

void Students::display(Students*&head)
{
	if (head == NULL)
	{
		cout << "List is empty....." << endl;
		return;
	}
	Students* pt = head;
	while (pt != NULL)
	{

		pt->getinfo();
		pt = pt->next;

	}


}
