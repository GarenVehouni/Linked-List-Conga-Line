/*
 * Lab 4
 *  This C++ program implements a circular linked list that represents a conga line and performs various functions on the list
 *  CS210-02
 *  5 December 2022
 *  @author Garen Vehouni
 */
#include <iostream>
#include "linkedList.h"
using namespace std;
int main() {
    cout << "Hello, World!" << std::endl;


    //creates dancer objects
    linkedList conga;

    Node* head = new Node("Garen");
    Node* second = new Node("Donovan");
    Node* third = new Node("Dylan");
    Node* fourth = new Node("Ethan");
    Node* fifth = new Node("Reece");

    //adds a dancer to the end of the list, making each new person the tail object
    conga.appendIntoConga(head);
    conga.appendIntoConga(second);
    conga.appendIntoConga(third);
    conga.appendIntoConga(fourth);
    conga.appendIntoConga(fifth);

    conga.print(head);

    cout << "------------------------------------------------------------------------------------------------" << endl;

    cout << "After adding kyle to the front of the conga line, the line is: " << endl;
    Node* sixth = new Node("Kyle");
    conga.prependIntoConga(sixth); //makes kyle the head of the conga line
    conga.print(head);

    cout << "------------------------------------------------------------------------------------------------" << endl;

    conga.searchForDancer(head, "Dylan");

    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << "The conga line sorted in alphabetical order looks like: " << endl;
    conga.sortAlphabetically(head);
    conga.print(head);
    cout << "------------------------------------------------------------------------------------------------" << endl;
    conga.removeDancer(head, "Kyle");
    cout << "One of the dancers is tired, the new line is: " << endl;
    conga.print(head);

    return 0;
}
