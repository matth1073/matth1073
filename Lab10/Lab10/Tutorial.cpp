#include "Tutorial.h"

void runTutorial() {
	cout << endl; 
	int* y = new int(5);
	cout << "creating a new pointer y that points to the value 5        int* y = new int(5); " << endl;
	cout << "pointer y points to a memory location that contains 5           y = " << y << endl;
	cout << "dereferencing  y, getting the value that is stored             *y = " << *y << endl;
	cout << "the memory address of the pointer itself is                    &y = " << &y << endl; 
	cout << endl;
	cout << "lets say we wanted to do some math on y" << endl; 
	cout << "if we do  y + 10 we will get a new memory address          y + 10 = " << y + 10 << endl; 
	cout << "if we do *y + 10 we will get an integer                   *y + 10 = " << *y + 10 << endl;
	cout << "if we do *(y + 10), unknown value will be returned      *(y + 10) = " << *(y + 10) << endl;
	cout << endl; 


	//creating a linked list
	//student is a pointer to the struct object Node
	// "*" indicates it is a pointer 


	Student* student1 = new Student("Alice");
	Student* student2 = new Student("Bob");
	Student* student3 = new Student("Carol");
	Student* student4 = new Student("David");

	student1->next = student2;
	student2->next = student3;
	student3->next = student4;

	printNodes(student1); 
	cout << endl;
	

	//another way to create a linked list
	Student* head = new Student("Evelyn"); //head of list
	head->next = new Student("Frank");
	head->next->next = new Student("Gertrude");
	head->next->next->next = new Student("Henry");

	printNodes(head);
	cout << endl;

	//creating a linked list in reverse order; 
	Student* tail = new Student("Oscar");
	tail = new Student("Nancy", tail);
	tail = new Student("Mike", tail);
	tail = new Student("Lisa", tail);

	printNodes(tail);
	cout << endl;
}

void printNodes(Student* head_ptr)
{
	Student* current_ptr = head_ptr;
	while (current_ptr != nullptr) {
		cout << current_ptr->student_name << "->";
		current_ptr = current_ptr->next;
	}
	cout << "NULL" << endl;
}

