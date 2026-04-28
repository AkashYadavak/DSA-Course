#include<iostream>
#include<stdexcept>
#define EMPTY_MSG "Queue is empty!"
using namespace std;

class Queue{
    private:
    int frontptr = -1;
    int backptr = -1;
    int* arr = nullptr;
    int cap = 0;

    public:
    Queue(int size = 100){
        if(size < 1){
            throw runtime_error("Given size is invalid!");
        }
        arr = new int[size];
        cap = size;
    }

    ~Queue(){
        delete[] arr;
    }

    bool full() const{
        return (backptr == (cap - 1)); 
    }

    bool empty() const{
        return (frontptr == -1);
    }

    void push(int elem){
        if(full()){
            throw runtime_error("Queue is full already!");
        }
        if(empty()){
            arr[++backptr] = elem;
            frontptr++;
        }else{
            arr[++backptr] = elem;
        }
       
    }

    void pop(){
        if(empty()){
            throw runtime_error(EMPTY_MSG);
        }
        if(frontptr == backptr){
            frontptr = backptr = -1;
        }else{
            frontptr++;
        }
    }

    int front() const{
        if(empty()){
            throw runtime_error(EMPTY_MSG);
        }
        return arr[frontptr];
    }

    int back() const{
        if(empty()){
            throw runtime_error(EMPTY_MSG);
        }
        return arr[backptr];
    }

    int size() const{
        return backptr - frontptr + 1;
    }

};

int main() {
    try {
        // 1. Initialize a small queue to test capacity easily
        Queue q(3);
        cout << "--- Testing Push & Basic Access ---" << endl;
        
        q.push(10);
        q.push(20);
        q.push(30);
        
        cout << "Size after 3 pushes: " << q.size() << endl;   // Should be 3
        cout << "Front element: " << q.front() << endl;       // Should be 10
        cout << "Back element: " << q.back() << endl;         // Should be 30

        // 2. Test Full Exception
        cout << "\n--- Testing Full Overflow ---" << endl;
        try {
            q.push(40); // This should trigger an error
        } catch (const runtime_error& e) {
            cout << "Caught expected error: " << e.what() << endl;
        }

        // 3. Test Popping
        cout << "\n--- Testing Pop ---" << endl;
        q.pop();
        cout << "New Front after 1 pop: " << q.front() << endl; // Should be 20
        cout << "New Size: " << q.size() << endl;               // Should be 2

        // 4. Test Emptying the queue
        q.pop();
        q.pop();
        cout << "Is empty after popping all? " << (q.empty() ? "Yes" : "No") << endl;

        // 5. Test Empty Exception
        cout << "\n--- Testing Empty Underflow ---" << endl;
        q.pop(); // This should trigger the EMPTY error

    } catch (const runtime_error& e) {
        // This catches any top-level errors we didn't handle specifically
        cout << "Final catch (Unexpected Error): " << e.what() << endl;
    }

    return 0;
}