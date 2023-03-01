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
//        or at an specific index. It also works with retrieve functions and tells the user if list
//        is either empty, full, or clear. 
//
//        Other files required: AList.h
//
//
//*****************************************************************************************************

#include <iostream>
using namespace std;
#include "AList.h"

//*****************************************************************************************************

int main()
{
    short   min,
            dataOut,
            dataIn;
    
    AList <short> shortList(3);
    
    if (shortList.isEmpty())
    {
        cout << "List is empty" << endl;
    }
    else if (shortList.isFull())
    {
        cout << "List is full" << endl;
    }
    
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
    
    if (shortList.insertBack(3))
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
    
    if (shortList.isEmpty())
    {
        cout << "List is empty" << endl;
    }
    else if (shortList.isFull())
    {
        cout << "List is full" << endl;
    }

    if (shortList.removeFront(dataOut))
    {
        shortList.display();
        shortList.getSmallest(min);

        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to remove front";
    }

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

    if (shortList.removeAtIndex(dataOut,1))
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
        cout << "Unable to remove the value";
    }
    
    if (shortList.retrieveFront(dataOut))
    {
        shortList.display();
        shortList.getSmallest(min);
       
        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to retrieve the front value";
    }

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
        cout << "Unable to retrieve the back value";
    }
    
    if (shortList.retrieveAtIndex(dataOut,0))
    {
        shortList.display();
        shortList.getSmallest(min);
        cout<<"the value at index 1 :" << dataOut << endl;
        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to retrieve at index 1";
    }
    
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
    
    if (shortList.updateFront(3))
    {
        shortList.display();
        shortList.getSmallest(min);

        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to update the front value";
    }
    
    if (shortList.updateBack(3))
    {
        shortList.display();
        shortList.getSmallest(min);

        cout << endl << "capacity is " << shortList.getCapacity() << "\t numValues is "
        << shortList.getNumValues() << "\t smallest value is " << min << endl;
    }
    else
    {
        cout << "Unable to update the back value";
    }
    
    if (shortList.updateAtIndex(3,1))
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

    cout << " What value would you like to update? \t";
    cin>>dataIn;
    
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
    
    if (shortList.isEmpty())
    {
        cout << "List is empty" << endl;
    }
    else if (shortList.isFull())
    {
        cout << "List is full" << endl;
    }
    
    if (shortList.clear())
    {
        cout << "The list is clear" <<endl;
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
