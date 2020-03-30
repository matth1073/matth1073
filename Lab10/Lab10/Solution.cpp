//#include <iostream>
//#include <string>
//#include "Tutorial.h"
//using namespace std;
//
//struct Node {
//	string name; //data
//	Node* next; //pointer
//
//	//Constuctor
//	Node(string name, Node* next_ptr = NULL) {
//		this->name = name;
//		next = next_ptr;
//	}
//};
//
//Node* customList();               //user creates a single linked list
//void addNode(Node* head_ptr);     //user adds node to end of linked list
//void deleteNode(Node*& head_ptr); //user removes node
//void insertNode(Node*& head_ptr); //user creates new node and inserts at any position
//void printNodes(Node* head_ptr);  //prints linked list
//void swapNode(Node*& head_ptr);	  //bonus points, recommend using a double linked list,
//								  //need to update Node to have another pointer that points to previous Node
//
////Question: Why can we pass by value for addNode and printNodes and but need to pass by reference for delete and insert? 
//
//int main() {
//	runTutorial(); //comment out or delete once you begin work on program
//
//	//Creating a custom linked list of infinte length
//	Node* customListHead = customList();
//	char userChoice;
//
//	printNodes(customListHead);
//
//	while (true) {
//		cout << endl << "Menu" << endl;
//		cout << "A - Adds person to end of linked list" << endl;
//		cout << "D - Removes person from linked list" << endl;
//		cout << "I - Insert person into any position in linked list" << endl;
//		cout << "S - Swaps two people in list: Create For ***BONUS Points!!***" << endl;
//		cout << "Q - Exits Program" << endl;
//		cout << endl;
//		cout << "Current list is " << endl;  printNodes(customListHead); cout << endl;
//		cout << "What would you like to do? "; cin >> userChoice; userChoice = toupper(userChoice); cout << endl;
//		if (userChoice == 'A') {
//			addNode(customListHead);
//		}
//		else if (userChoice == 'D') {
//			deleteNode(customListHead);
//		}
//		else if (userChoice == 'I') {
//			insertNode(customListHead);
//		}
//		else if (userChoice == 'S') {
//			swapNode(customListHead);
//		}
//		else if (userChoice == 'Q') {
//			cout << "Until next time" << endl;
//			break;
//		}
//		else {
//			cout << "Sorry havent built that choice yet" << endl;
//		}
//	}
//}
//
//void printNodes(Node* head_ptr)
//{
//	Node* current_ptr = head_ptr;
//	while (current_ptr != nullptr) {
//		cout << current_ptr->name << "->";
//		current_ptr = current_ptr->next;
//	}
//	cout << "NULL" << endl;
//
//}
//
//Node* customList()
//{
//	string name;
//	cout << "Insert first student's name ==> "; cin >> name; cout << endl;
//	Node* customHead = new Node(name);
//	Node* current_ptr = customHead;
//
//	while (true) {
//		cout << "Insert next students name (Enter q to quit) ==> "; cin >> name;
//		if (name != "q" && name != "Q") {
//			current_ptr->next = new Node(name);
//			current_ptr = current_ptr->next;
//		}
//		else {
//			return customHead; //returning the pointer to the head of the linked list
//		}
//	}
//}
//
//void addNode(Node* head_ptr)
//{
//	//adds new person to the end of the linked list
//	string name;
//	cout << "Insert student's name to add ==> "; cin >> name; cout << endl;
//	Node* current_ptr = head_ptr;
//	while (current_ptr->next != nullptr) {
//		current_ptr = current_ptr->next;
//	}
//	current_ptr->next = new Node(name);
//}
//
//void deleteNode(Node*& head_ptr)
//{
//	string name;
//	Node* current_ptr = head_ptr;
//	Node* personToDelete;
//	cout << "Insert student's name to delete ==> "; cin >> name; cout << endl;
//
//	if (current_ptr->name == name) {
//		personToDelete = current_ptr;
//		head_ptr = current_ptr->next;
//		delete personToDelete;
//		personToDelete = nullptr;
//		return;
//	}
//	while (current_ptr->next != nullptr) {
//		if (current_ptr->next->name == name) {
//			personToDelete = current_ptr->next;
//			current_ptr->next = personToDelete->next;
//			delete personToDelete;
//			personToDelete = nullptr;
//			return;
//		}
//		current_ptr = current_ptr->next;
//	}
//	cout << "Sorry name not found to delete" << endl;
//	personToDelete = nullptr;
//	return;
//
//}
//
//void swapNode(Node*& head_ptr)
//{
//	string nameOne;
//	string nameTwo;
//	int positionNameOne;
//	int positionNameTwo;
//	int totalLength = 0;
//	Node* current_ptr = head_ptr;
//	Node* nameOne_ptr = nullptr;
//	Node* nameTwo_ptr = nullptr;
//	cout << "Insert name swap ==> "; cin >> nameOne; cout << endl;
//	cout << "Insert name swap ==> "; cin >> nameTwo; cout << endl;
//	while (current_ptr != nullptr) {
//		if (current_ptr->name == nameOne) {
//			nameOne_ptr = current_ptr;
//			positionNameOne = totalLength;
//		}
//		if (current_ptr->name == nameTwo) {
//			nameTwo_ptr = current_ptr;
//			positionNameTwo = totalLength;
//		}
//		totalLength += 1;
//		current_ptr = current_ptr->next;
//	}
//	current_ptr = head_ptr;
//	swap(nameOne_ptr, nameTwo_ptr);
//
//
//}
//
//void insertNode(Node*& head_ptr)
//{
//	string insertName;
//	int insertPosition;
//	int linkedListPosition = 0;
//	Node* print_ptr = head_ptr;
//	Node* current_ptr = head_ptr;
//
//	cout << "Enter name to insert ==> "; cin >> insertName; cout << endl;
//	cout << "Positions available" << endl;
//	while (print_ptr != nullptr) {
//		cout << linkedListPosition << " ";
//		print_ptr = print_ptr->next;
//		++linkedListPosition;
//	}
//	cout << endl << "Enter integer position to insert " << insertName; cout << " ==> "; cin >> insertPosition; cout << endl;
//
//	linkedListPosition = 0;
//	if (insertPosition == 0) {
//		head_ptr = new Node(insertName, current_ptr);
//		return;
//	}
//	while (true) {
//		if (linkedListPosition + 1 == insertPosition || current_ptr->next == NULL) {
//			current_ptr->next = new Node(insertName, current_ptr->next);
//			break;
//		}
//		else {
//			current_ptr = current_ptr->next;
//			linkedListPosition++;
//		}
//	}
//	return;
//}
//
//
