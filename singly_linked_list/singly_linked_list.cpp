#include <iostream>
#include <cstdlib>
#include  "singly_linked_list.h"

using namespace std;

List::List() {

head = NULL;
current = NULL;
temp = NULL;

}
void List::AddNode(int AddData){

nodePtr n = new Node;
n->next = NULL;
n->data = AddData;

if (head != NULL) {
    current = head;
    while(current->next != NULL){
        current = current->next;
    }current->next = n;
}else
head = n;
}

void List::DeleteNode(int deletedNode) {

nodePtr delPtr = NULL;
current = head;
temp = head;

while(current != NULL && current->data != deletedNode){
    temp = current;
    current = current->next;
    } if (current == NULL) {
    cout << "the value you are searching for is not in the list " << endl;
    delete delPtr;

    } else {

    delPtr = current;
    current = current->next;
    temp->next = current;
    if(delPtr == head) {head = head->next;temp = NULL;}
    delete delPtr;
    cout << " the value: " << deletedNode << " has been deleted\n";
    }

}

void List::printList() {
current = head;
while(current != NULL) {
    cout << current->data << "\t";
    current = current->next;
}

}
