/*
The Rule of Three in C++ is a design guideline stating that if a class requires a user-defined version of any of the following three special member functions, it almost certainly requires all three to manage resources (like dynamic memory or file handles) safely: 
-> Destructor (~ClassName())
-> Copy Constructor (ClassName(const ClassName&))
-> Copy Assignment Operator (ClassName& operator=(const ClassName&)) 


Difference between Copy Constructor and Copy Assignment Opperator
1. Copy Constructor:- In a copy constructor, a new object is being created and it is initialized using the value of an already existing object.

Meaning:- The object does not exist yet, and we are constructing it using another object's data.

Example:
Obj obj2 = obj1;

or

Obj obj2(obj1);

Here:
-> obj1 already exists
-> obj2 is being created
-> The copy constructor initializes obj2 with the data of obj1

So the idea is:
Copy Constructor → Creating a new object using another object's value

2. Copy Assignment Operator:- In a copy assignment operator, both objects already exist, and we are copying the values from one object into another.

Example:
obj2 = obj1;


Here:
obj1 already exists
obj2 already exists
We are assigning the values of obj1 to obj2

So the idea is:
Copy Assignment → Assigning values between already constructed objects.


*/