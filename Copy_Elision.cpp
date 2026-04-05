// Copy Elision = Direct construction in the caller’s memory instead of creating and copying temporaries.
#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout << "Constructor Called" << endl;
    }

    Base(const Base& obj){
        cout << "Copy Constructor Called" << endl;
    } 
};

Base fun(){
    return Base();
};

int main(){
    Base b = fun();
    return 0;
}


/*

g++ fileName.cpp
Answer: -
Constructor Called     (guaranteed RVO since C++17)

g++ -fno-elide-constructors FileName.cpp
Answer: -
Constructor Called
Copy Constructor Called
Copy Constructor Called      (removing RVO manually)

*/


/*

Copy Elision:- Copy Elision is a compiler optimization technique where the compiler avoids creating unnecessary temporary objects.

Instead of:
1. Creating a temporary object
2. Copying/moving it to the destination object
3. Destroying the temporary object

-> the compiler constructs the object directly in the caller's memory location.

-> So the copy/move operation never happens.

-> This saves execution time by avoiding extra construction, copying, and destruction.

There are 2 types of copy elision: 
1. RVO (Return Value Optimzation)
2. NRVO (Named Return Value Optimization)


1. RVO: - When a function returns a temporary object.
Base fun(){
    return Base();
}
Here Base() is a temporary object.

Instead of creating this temporary and then copying it to the caller, the compiler directly constructs the object in the caller's memory.


2. NRVO: - When a function returns a named local object.
Base fun(){
    Base obj;
    return obj;
}
Normally:
1. obj would be created inside the function
2. Then copied to the returned object

But with NRVO, the compiler constructs obj directly in the caller's memory.


How Copy Elision save time? 
Ans: 
class Base{
    public:
    int arr[1000000];
}

If copy elision did not happen:
1. The object is constructed
2. The entire array is copied to another object
3. The temporary object is destroyed

Copying such large objects is expensive.

With copy elision:
• No temporary object is created
• No copy happens
• The object is constructed only once in the caller's memory

So the program avoids large memory copies and extra constructor calls, making it faster.


Important Concept
Copy elision does NOT remove the function call.

The function still executes, but the returned object is constructed directly in the caller's memory space.

*/