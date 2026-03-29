#include<iostream>
#include<stdexcept>
using namespace std;

class Stack{
   private:
   int* arr;
   int capacity;
   int top = -1;

   public: 
   //constructor
   Stack(int size = 5){
   if(size <= 0) 
   throw runtime_error("Given Size is not valid");
    capacity = size;
    arr = new int[capacity];
   }

   ~Stack(){
     delete[] arr;
   }


    // In Cpp:- A const method (constant member fun) is a class member fun that is guarnteed not to modify the object on which it is called.

    bool full() const{
        return (top >= (capacity - 1));
    }

    bool empty() const{
        return (top == -1);
    }

    void push(int x){
        if(full()){
            throw runtime_error("Stack Overflow");
        }
        else{
            arr[++top] = x;
        }
    }

    void pop(){
        if(empty()){
            throw runtime_error("Stack Underflow");
        }
        else{
            --top;
        }
    }

    int peek() const{
        if(empty()){
            throw runtime_error("Stack is Empty");
        }
        else{
            return arr[top];
        }
    }

    int size() const{
        return (top + 1);
    }
};


int main(){

    try{
        Stack s(6);

        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        cout << "Size: " << s.size() << endl;
        cout << "Top: " << s.peek() << endl;
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        cout << "Size: " << s.size() << endl;

    }catch(const runtime_error& e){
        cout << "Error caught:- " << e.what() << endl;
    }




    return 0;

}