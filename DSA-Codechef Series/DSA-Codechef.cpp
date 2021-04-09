#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

struct Node{
	int data;
	Node *next; //Node here defines that the address stored in next here is of the data type Node
};
void printList(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
void insertFront(Node **head, int newData){
	Node *newNode = new Node();
	newNode -> data = newData;
	newNode -> next = *head; // Initially the head stores the address of the first node
	*head = newNode;
}
void insertMiddle(Node *prevNode, int newData){
	Node *newNode = new Node();
	newNode -> data = newData;
	newNode -> next = prevNode -> next;
	prevNode -> next = newNode;
}
void insertEnd(Node **head, int newData){
	Node *temp = *head;
	Node *newNode = new Node();
	newNode -> data = newData;
	newNode -> next = NULL;

	if(*head == NULL)
		*head = newNode;
	else{
		while(temp -> next != NULL)
			temp = temp -> next;
		temp -> next = newNode;
	}		
}
void deleteNode(Node **head, int key){
	Node *prev, *temp;
	temp = *head;

	if(temp != NULL && temp -> data == key){
		*head = temp -> next;
		free(temp);
	}else{
		while(temp != NULL && temp -> data != key){
			prev = temp;
			temp = temp -> next;
		}
		if(temp ==  NULL) {
			cout <<" Not present"<< endl;
			return;
		}
		prev -> next = temp -> next;
		free(temp);
	}
}
Node* reverseLL(Node *head){
	Node *prev, *curr, * front;
	prev = NULL;
	curr = head;
	front = curr -> next;

	while(curr != NULL){
		curr -> next = prev;
		prev = curr;
		curr = front;

		if(front != NULL)
			front = front -> next;
		count++;
	}
	return prev;
}
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	Node *head = NULL;
	insertFront(&head,11);
	insertFront(&head,12);
	insertFront(&head,13);

	insertMiddle(head, 14);
	insertEnd(&head, 16);
	// deleteNode(&head, 13);
	printList(head);
	head = reverseLL(head);
	cout<<endl;
	printList(head);

	return 0;
}