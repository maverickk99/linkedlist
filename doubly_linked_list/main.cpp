#include <iostream>


using namespace std;

    struct  node {
    int data;
    node* next;
    node* prev;
    };

void printForward(node* head);

void printBackwards(node* tail);

int main()
{
    node* head  ;
    node* tail  ;
    node* temp  ;

    temp = new node;
    temp->data = 3;
    temp->prev = NULL;
    head = temp;
    tail = temp;

    temp = new node;
    temp->data = 17;
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
    tail->next = NULL;

    printForward(head);
    return 0;
}

void printForward(node* head){
    node* x = head;
    while(x != NULL) {
    cout << x->data << endl;
    x = x->next;
    } cout << "\n";
    }
void printBackwards(node* tail){
    node* x = tail;
    while(x != NULL) {
    cout << x->data << endl;
    x = x->prev;
    } cout << "\n";
    }
