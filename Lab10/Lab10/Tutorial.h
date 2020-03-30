#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Student {
	string student_name; //data
	Student* next; //pointer

	//Constuctor
	Student(string studentName, Student* next_student_ptr = NULL) {
		student_name = studentName;
		next = next_student_ptr;
	}
};

void runTutorial(); 

void printNodes(Student* head_ptr); //prints list
