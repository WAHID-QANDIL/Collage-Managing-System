#include <iostream>
#include<string>
#include"Teacher.h"
#include"Student.h"



using namespace std;

int main()
{


	Students* head = NULL;
	Teachers* thead = NULL;

	thead->CreateTeachersList(thead, 1010, "diaa", "ibrahim", "Almonofia - quisna", "Physics");
	thead->display(thead);


	head->CreateStudentList(head, 1213089, "wahid", "Ali", "Cairo", 3.9, 2);

	head->addStudent(head, 1213089, "wahid", "Ali", "Cairo", 3.9, 2);
	head->addStudent(head, 1213089, "wahid", "Ali", "Cairo", 3.9, 2);
	head->addStudent(head, 1213089, "wahid", "Ali", "Cairo", 3.9, 2);
	head->addStudent(head, 1213089, "wahid", "Ali", "Cairo", 3.9, 2);
	head->addStudent(head, 1213089, "wahid", "Ali", "Cairo", 3.9, 2);
	head->addStudent(head, 1213089, "yousef", "mohamed", "alex", 3.9, 2);
	head->addStudent(head, 1213089, "Nourhan", "Kamel", "Tanta", 3.9, 2);
	head->display(head);
	head->infoModify(head, 1213089, "yousef", "mohamed", "alex");
	head->display(head);


}