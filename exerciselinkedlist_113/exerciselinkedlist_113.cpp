#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};

class CircularLinkedList {
private:
	Node* LAST;

public:
	CircularLinkedList() {
	LAST = NULL;
	}
	void addNode();
	bool search(int rollno, Node** Jannah, Node** Raudatul);
	bool listEmpty();
	bool delNode();
	void traverse();

};

void CircularLinkedList::addNode() {	


}

	while (Raudatul != LAST) {
		if (rollno == (Raudatul)->rollNumber) {
			return true;
		}
		Jannah = Raudatul;
		Raudatul = (Raudatul)->next;
	}

	if (rollno == LAST->rollnumber) {
		return true;
	}
	else {
		return false;
	}
}
bool CircularLinkedList::listEmpty() {
	return LAST == NULL;
}

bool CircularlinkedList::delNode() {

}

void CircularLinkedlist::traverse() {
	if (listEmpty()) {
		cout << "\nList is empty\n";
	}
	else {
		cout << "\nRecords in the list are : \n";
		Node* currentNode = LAST->next;
		while (currenNode != LAST) {
			cout << currentnode->rollnumber << "  " << currentnode->name << endl;
			currentNode = currentNode->next;
		}
		cout << LAST->rollnumber << "  " << LAST->name << endl;
	}
}
int main() {
	CircularLinkedList obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record from the list" << endl;
			cout << "3. View all the records in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-5): ";

			char ch;
			cin >> ch;
			switch (ch) {
			case '1': {
			}
			case '2': {
			}
			case '3': {
				obj.traverse();
				break;
			}
			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0