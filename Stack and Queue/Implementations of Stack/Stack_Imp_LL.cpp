#include<iostream>
#include<stdexcept>
using namespace std;


class Node{
    public:
    int data;
    Node* nextNode = nullptr;
};

class Stack{
    private:
    Node* top;
    int size;

    public:
    Stack(){
        top = nullptr;
        size = 0;
    }

    ~Stack(){
        while(!empty()){
            pop();
        }
    }

    bool empty() const{
        return (top == nullptr);
    }

    void push(int elem){
        Node* temp = new Node();
        // No need of throw here because new do it itself if allocation fails
        // if(temp == NULL)
        // {
        //     throw runtime_error("Stack is Full")
        // }
        temp->data = elem;
        temp->nextNode = top;
        top = temp;
        size++;
    }

    void pop(){
        if(empty()){
            throw runtime_error("Stack is Empty");
        }
        Node* temp = top;
        top = top->nextNode;
        size--;
        delete temp;
    }

    int peek() const{
        if(empty()){
            throw runtime_error("Stack is Empty");
        }
        return top->data;
    }

    int getSize() const{
        return size;
    }

};

int main(){

   try{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout << "Top element: " << s.peek() << endl;
    }catch(const runtime_error& e){
        cout << "Error: " << e.what() << endl;
    }

    return 0;   // optional, the C++ standard automatically inserts "return 0" if the control reaches the end of the main() without an explicit return statement.
}