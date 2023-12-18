#include<iostream>

using namespace std;


// Increase the performance of our program but can also increase the size of our program.

// Instead of function call, the compiler replace the function call statement with the function body.

// if the body is of 1 line only, the compiler definitely agree for making it inline.

// if it is of 2 to 3 line, the compiler may or may not be agree for making it inline.

// if it is more than 3 line, the compiler: NO NO NO, it can not be inline.



inline void fun(int a, int b)
{
    cout << (a < b) ? a : b;
    cout <<  endl;
}


int main()
{
    
    return 0;
}