/*
Q: - Why we are writing int* for creating a pointer?
A: Because it is clearing the type of data and because of that we/computers are able to decide
the amount of memory to be located.
*/

#include <iostream>
using namespace std;


void update (int** p2)
{
    // p2 = p2 + 1;
    // *p2 = *p2 + 1;
    **p2 = **p2 + 1;

}


int main()
{

    int i = 5;    // varible

    int *p = &i;    // pointer to the variable

    int **p2 = &p;  // pointer to the pointer (Double Pointer) 


    cout << "Address of i: " << &i << ", " << p << ", " << *p2 << endl;
    cout << "Address of p: " << &p << ", " <<  p2 << endl;
    cout << "Address of p2: " << &p2 << endl;

    cout << "Value of i: " << i << ", " << *p << ", " << **p2 << endl;
    cout << "Value of p: " << p << ", " << &i  << ", " << *p2 << endl;
    cout << "Value of p2: " << p2 << ", " << &p << endl;

    cout << "Before: " << i << endl;

    update(p2);

    cout << "After: " << i << endl;

    


    return 0;
}