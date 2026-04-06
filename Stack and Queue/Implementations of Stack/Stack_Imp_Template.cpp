#include<iostream>
#include<stdexcept>
using namespace std;

// ---- Template Array Implementation ------

template <typename T>
class StackArr{
    private:
    T* arr;
    int capacity;
    int top;

    public:

    StackArr(int size = 10){
        if(size <= 0){
            throw runtime_error("Invalid Size of Stack");
        }
        capacity = size;
        arr = new T[capacity];
        this->top = -1;
        // cout << "stack created" << endl;
    }

    ~StackArr(){
        delete[] arr;
        // cout << "Stack deleted" << endl;
    }

    // Copy Constructort
    StackArr(const StackArr<T>& s){
        capacity = s.capacity;
        arr = new T[capacity];
        for(int i = 0; i <= s.top; i++){
            arr[i] = s.arr[i];
        }
        top = s.top;
    }

    bool full() const{
        return (top >= capacity - 1);
    }

    bool empty() const{
        return (top <= -1);
    }

    void push(T elem){
        if(full()){
            throw runtime_error("Stack Overflow!");
        }
        arr[++top] = elem;
    }

    void pop(){
        if(empty()){
            throw runtime_error("Stack Underflow!");
        }

        top--;
    }

    T peek() const{
        if(empty()){
            throw runtime_error("Stack is empty!");
        }
        return arr[top];
    }

    int size() const{
        return (top + 1);
    }
};

int main(){

    try{

    // StackArr<int>* ss = new StackArr<int>(20);   //Dynamically allocated
    // delete ss;  //That's why we need to remove it ourselves


    // Wrong Syntax because of (),  compiler thinks you are declraing a function.
    // StackArr<char> s();  

    // Either do this
    // StackArr<char> s;   
    //   OR
    // StackArr<char> s(20);

    StackArr<char> s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');


    cout << "Size: " << s.size() << endl;
    cout << "Top elem: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "Top elem: " << s.peek() << endl;

    s.push('z');

    cout << "Top elem: " << s.peek() << endl;

    // Calling copy constructor
    // StackArr<char> s2 = s;
    StackArr<char> s2(s);

    cout << "Element in S2: " << endl;
    while(!s2.empty()){
        cout << s2.peek() << endl;
        s2.pop();
    }

    } catch (const runtime_error& e){
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}