#pragma region 1
//#include <iostream>
//using namespace std;
//
//struct node {
//	int value = 0;
//	node* next;
//};
//
//node* head = NULL;
//
//// insert function
//
//void insertNode(int date) {
//	node* newNode;
//	node* last;
//	newNode = new node;
//	newNode->value = date;
//
//	if (head == NULL)
//	{
//		head = newNode;
//		newNode->next;
//	}
//	else
//	{
//		last = head;
//		while (last->next != NULL)
//		{
//			last = last->next;
//		}
//		last->next = newNode;
//		newNode->next = NULL;
//	}
//
//}
//int main()
//{
//	insertNode(20);
//	cout << "Linked List\n";
//}  
#pragma endregion


#pragma region 2
				//// ProgrammingAdvices.com
//// Mohammed Abu-Hadhoud
//
//#include <iostream>
//using namespace std;
//
//// Creating a node
//class Node
//
//{
//public:
//	int value;
//	Node* next;
//};
//
//int main()
//
//{
//
//	Node* head;
//
//	Node* Node1 = NULL;
//	Node* Node2 = NULL;
//	Node* Node3 = NULL;
//
//	// allocate 3 nodes in the heap
//	Node1 = new Node();
//	Node2 = new Node();
//	Node3 = new Node();
//
//	// Assign value values
//	Node1->value = 1;
//	Node2->value = 2;
//	Node3->value = 3;
//
//	// Connect nodes
//	Node1->next = Node2;
//	Node2->next = Node3;
//	Node3->next = NULL;
//
//	// print the linked list value
//	head = Node1;
//
//	while (head != NULL) {
//		cout << head->value << endl;
//		head = head->next;
//	}
//
//	system("pause>0");
//	return 0;
//
//}

#pragma endregion



//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include <iostream>
using namespace std;

// Create a node
class Node
{
public:
	int value;
	Node* next;
};

void InsertAtBeginning(Node*& head, int value)
{

	// Allocate memory to a node
	Node* new_node = new Node();

	// insert the data
	new_node->value = value;
	new_node->next = head;

	// Move head to new node
	head = new_node;

}

// Print the linked list
void PrintList(Node* head)

{
	while (head != NULL) {
		cout << head->value << " ";
		head = head->next;
	}
}

int main()
{
	Node* head = NULL;

	InsertAtBeginning(head, 1);
	InsertAtBeginning(head, 2);
	InsertAtBeginning(head, 3);
	InsertAtBeginning(head, 4);
	InsertAtBeginning(head, 5);

	PrintList(head);

	system("pause>0");

}


