//*****************************************************************************************************
//
//        File:                    driverAList.cpp
//
//        Student:                 Juan Hernandez Fonseca
//
//        Assignment:              Assignment #4
//
//        Course Name:             Data Structures I
//
//        Course Number:           COSC 3050-01
//
//        Due:                     Monday, February 23rd
//
//
//        This program works with an array and allows you to insert a new element either front, back
//        or at an specific index. It also returns the smallest value inside the array.
//
//        Other files required: AList.h
//
//
//*****************************************************************************************************

#include <iostream>
using namespace std;
#include "AList.h"

void insertFront(AList<short>, short);
void isEmptyOrFull(AList<short>);
//*****************************************************************************************************

int main()
{
    short   min,
            dataOut,
            dataIn;
    
    AList <short> shortList(3);
    
//    isEmptyOrFull(shortList);
    shortList.insertFront(4);
    shortList.insertFront(8);
    shortList.insertFront(9);
    
    if (shortList.insertFront(3))
    {
        shortList.display();
        shortList.getSmallest(min);
        
        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to insert the value 3";
    }
    
//    isEmptyOrFull(shortList);
    
//
//    if (shortList.insertBack(3))
//    {
//        shortList.display();
//        shortList.getSmallest(min);
//
//        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
//        << shortList.getNumValues() << "\t smallest value is " << min << endl;
//    }
//    else
//    {
//        cout << "Unable to insert the value 3";
//    }
//
//    isEmptyOrFull(shortList);
//
    if (shortList.insertAtIndex(5,1))
    {
        shortList.display();
        shortList.getSmallest(min);

        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to insert the value 5 at index 1";
    }
//
//    isEmptyOrFull(shortList);
//
    if (shortList.removeFront(dataOut))
    {
        shortList.display();
        shortList.getSmallest(min);

        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to insert the value 5 at index 1";
    }
//
//    isEmptyOrFull(shortList);
//
    if (shortList.removeBack(dataOut))
    {
        shortList.display();
        shortList.getSmallest(min);

        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to remove back";
    }
//
//        isEmptyOrFull(shortList);
//
//
    if (shortList.removeAtIndex(dataOut,0))
    {
        shortList.display();
        shortList.getSmallest(min);

        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to insert the value 5 at index 1";
    }
//
//    isEmptyOrFull(shortList);
//

//
//    isEmptyOrFull(shortList);
//
    if (shortList.retrieveFront(dataOut))
    {
        shortList.display();
        shortList.getSmallest(min);
        cout<<"The front value is " << dataOut << endl;
        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to retrieve the value 5 at index 1";
    }
//
//    isEmptyOrFull(shortList);
//
    if (shortList.retrieveBack(dataOut))
    {
        shortList.display();
        shortList.getSmallest(min);
        cout<<"The back value is " << dataOut << endl;
        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to retrieve the value 5 at index 1";
    }
//
//    isEmptyOrFull(shortList);
//
    if (shortList.retrieveBack(dataOut))
    {
        shortList.display();
        shortList.getSmallest(min);
        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to insert the value 5 at index 1";
    }
//
//    isEmptyOrFull(shortList);
//
    if (shortList.retrieveAtIndex(dataOut,1))
    {
        shortList.display();
        shortList.getSmallest(min);
        cout<<"the value at index 1 :" << dataOut << endl;
        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to insert the value 5 at index 1";
    }
//
//    isEmptyOrFull(shortList);
//
    dataOut = 10;
    if (shortList.retrieve(dataOut))
    {
        shortList.display();
        shortList.getSmallest(min);
        cout<<"The value retrieved is: " << dataOut << endl;
        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to retrieve the value " << dataOut << endl;
    }
//
//    isEmptyOrFull(shortList);
//
    if (shortList.updateFront(3))
    {
        shortList.display();
        shortList.getSmallest(min);

        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to update the list at front";
    }
//
//    isEmptyOrFull(shortList);
//
    if (shortList.updateBack(3))
    {
        shortList.display();
        shortList.getSmallest(min);

        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to updTE THE LIST AT BACK";
    }
//
//    isEmptyOrFull(shortList);
//
    dataIn = 3;
    if (shortList.updateAtIndex(dataIn,1))
    {
        shortList.display();
        shortList.getSmallest(min);
        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to updte at index 1";
    }
//
//    isEmptyOrFull(shortList);
//
    dataIn = 5;
    if (shortList.update(dataIn))
    {
        shortList.display();
        shortList.getSmallest(min);

        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to update value"<< endl;
    }
    dataOut = 3;
    if (shortList.remove(dataOut))
    {
        shortList.display();
        shortList.getSmallest(min);
        cout<<"The value "<< dataOut << "has been removed" << endl;
        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to remove the value 3 ";
    }
//
//    if (shortList.isEmpty())
//    {
//        cout << "List is empty" << endl;
//    }
//    else if (shortList.isFull())
//    {
//        cout << "List is full" << endl;
//    }
}
void isEmptyOrFull(AList<short> shortList)
{
    if (shortList.isEmpty())
    {
        cout << "List is empty" << endl;
    }
    else if (shortList.isFull())
    {
        cout << "List is full" << endl;
    }
}
//*****************************************************************************************************

/*
 
 List is empty
 [0] 3
capacity is 3     numValues is 1     smallest value is 3
 [0] 3     [1] 5
capacity is 3     numValues is 2     smallest value is 3
 [0] 3     [1] 5     [2] 3
capacity is 3     numValues is 3     smallest value is 3
 
*/
