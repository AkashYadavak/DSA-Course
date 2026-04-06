// (top_2 - top_1 > 1) for variable size stacks

#include<iostream>
#include<stdexcept>
using namespace std;

template <typename T>
class St_2{
    T* arr;
    int capacity;
    int top_1;
    int top_2; 
    int size_1;
    int size_2;

    public:
    St_2(int s = 100){
        capacity = s;
        arr = new T[capacity];
        top_1 = -1;
        size_1 = 0;

        top_2 = capacity;
        size_2 = 0; 
    }

    ~St_2(){
        delete[] arr; 
    }

    bool full(int st_no = 1) const{
        if(st_no == 1){
            return (top_1 == ((capacity/2 )-1));
        }else{
            return (top_2 == (capacity/2));
        }
    }

    bool empty(int st_no = 1) const{
        if(st_no == 1){
            return top_1 == -1;
        }else{
            return top_2 == capacity;
        }
    }

    void push_1(T elem){
        if(full()){   // (top_2 - top_1 > 1)    //for variable size stacks
            throw runtime_error("Stack 1 Overflow");
        }

        arr[++top_1] = elem;
        size_1++;
    }

    void push_2(T elem){
        if(full(2)){
            throw runtime_error("Stack 2 Overflow");
        }

        arr[--top_2] = elem;
        size_2++;
    }

    void pop_1(){
        if(empty()){
            throw runtime_error("Stack 1 Underflow");
        }

        top_1--;
        size_1--;
    }

    void pop_2(){
        if(empty(2)){
            throw runtime_error("Stack 2 Underflow");
        }

        top_2++;
        size_2--;
    }

    T peek_1() const{
        if(empty()){
            throw runtime_error("Stack 1 empty");
        }

        return arr[top_1];
    }

    T peek_2() const{
        if(empty(2)){
            throw runtime_error("Stack 2 empty");
        }
        return arr[top_2];
    }

    int getSize_1() const{
        return size_1;
    }
    int getSize_2() const{
        return size_2;
    }
    };

int main(){

    
    try{

        St_2<char> s(5);
        s.push_1('a');
        s.push_1('b');
        
        s.push_2('x');
        s.push_2('y');
        s.push_2('z');

        cout << "St_1 Peek: " << s.peek_1() << endl;
        cout << "St_2 Peek: "  << s.peek_2() << endl;
        
        s.pop_1();
        s.pop_2();
        
        cout << "St_1 Peek: " << s.peek_1() << endl;
        cout << "St_2 Peek: "  << s.peek_2() << endl;
        
        cout << "St_1 size: " << s.getSize_1() << endl;
        cout << "St_2 size: "  << s.getSize_2() << endl;


    }catch(const runtime_error& e){
        cout << "Error: " << e.what() << endl;
    }



    return 0;
}
