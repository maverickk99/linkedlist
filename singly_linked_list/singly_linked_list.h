#ifndef SINGLY_LINKED_LIST_H_INCLUDED
#define SINGLY_LINKED_LIST_H_INCLUDED

class List {
private:
    typedef struct Node{

    int data;
    Node *node;
    Node *next;
    }* nodePtr;

//nodePtr next;
nodePtr head;
nodePtr current;
nodePtr temp;
public:
    List();
    void AddNode(int addData);
    void DeleteNode(int deletedNode);
    void printList();
};


#endif // SINGLY_LINKED_LIST_H_INCLUDED
