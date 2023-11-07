#include <iostream>
#include "linkedList.h"
using namespace std;

//constructs a node with a data property and makes the next pointer initially null
Node::Node(string data) {
    this->data = data;
    next = nullptr;
}
//constructor creates a linked list head pointer
linkedList::linkedList() {
    head = nullptr;
}
void linkedList::appendIntoConga( Node* node) {
    if (head == nullptr) {
        head = node;
        node->next = head;
    }
    else {
        node->next = head->next;
        head->next = node;
        head = node; //ensures that the end pointer points to head
    }
}
void linkedList::prependIntoConga(Node* node) {
    //if no head, set head and tail pointers to new data/dancer
    if (head == nullptr) {
        head = node;
        node->next = head;

    } else {
        Node* oldNode = head->next;
        node->next = oldNode;
        head->next = node;
    }
}
void linkedList::print(Node* head) {
    Node* temporaryNode = head; //creates a temporary variable
    if (temporaryNode != nullptr) { //while the head has data
        do {
            //print until head node is reached
            cout << temporaryNode->data << " " << endl;
            temporaryNode = temporaryNode->next; // shifts pointer
        }
        while (temporaryNode != head);
    }
}
void linkedList::searchForDancer(Node* head, string valueToSearch) {

        if (head == nullptr) { //list is empty
            cout << "There is no conga line to search in!" << endl;
        }
        Node* currentNode = head; //creates a pointer that starts at the head
        while (currentNode->next != head) {
            if(currentNode->data == valueToSearch) {
                cout << valueToSearch << " is in the conga line!" << endl;
            }
            currentNode = currentNode->next; //moves the pointer to next node if "if" statement condition is not met yet
        }



}
void linkedList::removeDancer(Node* head, string dancer) {

  //if list is empty, return
   if (head == nullptr) {
       return;
   }

   //search for the value to be removed
   Node* currentNode2 = head;
   Node* prev;
   //while the currentNode pointers data does not equal to the dancer wanted to be found
   while (currentNode2->data != dancer) {
       //if the next pointer is back to where we started
       if (currentNode2->next == head) {
           cout << dancer << " is not in the list" << endl;
           break;
       }
       prev = currentNode2;
       currentNode2 = currentNode2->next;
   }
   //if there is only one node in the list
   if (currentNode2->next == head) {
       head = nullptr;
   }
   //if more than one node we need to check if it is the first node
   if (currentNode2 == head) {
       prev = head;
       while (prev->next != head)
           prev = prev->next;
       head = currentNode2->next;
       prev->next = head;
   }
   //if node is the last one
   else if (currentNode2->next == head && currentNode2 == head) {
       prev->next = head;
   }
   else {
       prev->next = currentNode2->next;
   }

}

void linkedList:: sortAlphabetically(Node* head) {
    Node* index = nullptr; //a temporary pointer
    Node* currentNode = head; //pointer currently pointing to the head
    string temp; //temporary vairable for swapping method
    if (head == nullptr) {
        return; //if list is empty return
    }
    else {
        while (currentNode->next != head) {
            index = currentNode->next;
            while (index != head) {
                if(currentNode->data > index->data) { //if successing node is larger than current one
                    //swap the nodes
                    temp = currentNode->data;
                    currentNode->data = index->data;
                    index->data = temp;
                }
                index = index->next; //increments temporary next pointer
            }
            currentNode = currentNode->next; //increments current node pointer
        }
    }

}