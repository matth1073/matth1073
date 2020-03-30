#include <iostream>
#include <string>
#include "Tutorial.h"
using namespace std;

struct Node {
	string name; //data
	Node* next; //pointer

	//Constuctor
	Node(string name, Node* next_ptr = NULL) {
		this->name = name; 
		next = next_ptr; 
	}
};

void printNodes(Node* head_ptr);  //prints linked list
Node* customList();               //user creates a single linked list
void addNode(Node* head_ptr);     //user adds node to end of linked list
void deleteNode(Node* &head_ptr); //user removes node
void insertNode(Node* &head_ptr); //user creates new node and inserts at any position

void swapNode(Node*& head_ptr);	  //bonus points, recommend using a double linked list,
								  //need to update Node to have another pointer that points to previous Node

//Question: Why can we pass by value for addNode and printNodes and but need to pass by reference for delete and insert?
//Look at end of code for answer

int main() {
	runTutorial(); //comment out or delete once you begin work on program

	//Creating a custom linked list of infinte length
	Node* customListHead = customList(); 
	char userChoice; 
	
	printNodes(customListHead);

	while (true) {
		cout << endl << "Menu" << endl;
		cout << "A - Adds person to end of linked list" << endl; 
		cout << "D - Removes person from linked list" << endl; 
		cout << "I - Insert person into any position in linked list" << endl; 
		cout << "S - Swaps two people in list: Create For ***BONUS Points!!***" << endl; 
		cout << "Q - Exits Program" << endl << endl; 
		cout << "Current list is " << endl;  printNodes(customListHead); cout << endl;
		cout << "What would you like to do? "; cin >> userChoice; userChoice = toupper(userChoice); cout << endl;
		if (userChoice == 'A') {
			addNode(customListHead);
			//finish function
		}
		else if (userChoice == 'D') {
			deleteNode(customListHead);
			//finish function

		}
		else if (userChoice == 'I') {
			insertNode(customListHead);
			//finish function

		}
		else if (userChoice == 'S') {
			swapNode(customListHead);
			//finish function for bonus points 
		}
		else if (userChoice == 'Q') {
			cout << "Until next time" << endl; 
			break; 
		}
		else {
			cout << "Sorry havent built that choice yet" << endl; 
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
}

void printNodes(Node* head_ptr)
{
	Node* current_ptr = head_ptr;
	while (current_ptr != nullptr) {
		cout << current_ptr->name << "->";
		current_ptr = current_ptr->next;
	}
	cout << "NULL" << endl;

}

Node* customList()
{
	string name; 
	cout << "Insert first student's name ==> "; cin >> name; cout << endl; 
	Node* customHead = new Node(name);
	Node* current_ptr = customHead;

	while (true) {
		cout << "Insert next students name (Enter q to quit) ==> "; cin >> name;
		if (name != "q" && name != "Q") {
			//complete me
			cout << "Name not added, finish the if block" << endl; //delete me once finsihed 
			continue; //placeholder, delete once finished 
		} 
		else { 
			return customHead; //returning the pointer to the head of the linked list
		}
	}
}

void addNode(Node* head_ptr)
{
	//adds new person to the end of the linked list
	//complete me
}

void deleteNode(Node* &head_ptr)
{
	//Complete me
}



void insertNode(Node* &head_ptr)
{
	//feel free to re-work or delete my starter code 
	string insertName; 
	int insertPosition; 
	int linkedListPosition = 0; 
	Node* print_ptr = head_ptr;
	Node* current_ptr = head_ptr;

	cout << "Enter name to insert ==> "; cin >> insertName; cout << endl; 
	cout << "Positions available" << endl; 
	while (print_ptr != nullptr) { //only for displaying linked list positions 
		cout << linkedListPosition << " ";
		print_ptr = print_ptr->next;
		++linkedListPosition;
	}
	cout << endl << "Enter integer position to insert " << insertName; cout << " ==> "; cin >> insertPosition; cout << endl;

	linkedListPosition = 0;
	//Complete me
	return; 
}

void swapNode(Node*& head_ptr)
{
	//Complete me for bonus points
}

//Answer: So we can change the head pointer, Remove the & symbol and try insert and delete on any node that is not the head
//It should still work as inteded 
//Now try to insert or delete the head, an error should happen 