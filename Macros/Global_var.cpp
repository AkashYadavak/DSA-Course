#include<iostream>

using namespace std;

// Using global variable is NOT a good practise because it is accessable by any 
// function in the program and if any function make any change in it then it will creat a problem.

int glb_var = 5;


void a()
{
    cout << glb_var << " in a";
}

void b()
{
    cout << glb_var << " in b";
}


int main()
{
    cout << glb_var << " in main";
    cout << endl;
    a();
    cout << endl;
    b();
    cout << endl;
    return 0;
}