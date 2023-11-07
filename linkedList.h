//
// Created by Mac on 11/15/22.
//

#ifndef LAB4_2_LINKEDLIST_H
#define LAB4_2_LINKEDLIST_H
#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node(string data);

};

class linkedList{
private:
    Node* head;

public:
    //linked list constructor
    linkedList();

    //inserts a new node at the end of the list
    void appendIntoConga(Node* node);

    //inserts a new node at the beginning of the list
    void prependIntoConga(Node* head);

    //traverses through linked list until it reaches head
    void print(Node* head);

    //traverses through the linked list to find if a specific dancer exists
    void searchForDancer(Node* head, string valueToSearch);

    //removes a dancer from the conga line
    void removeDancer(Node* head, string dancer);

    //sorts the conga line dancers into alphabetical order
    void sortAlphabetically(Node* head);
};

#endif //LAB4_2_LINKEDLIST_H

