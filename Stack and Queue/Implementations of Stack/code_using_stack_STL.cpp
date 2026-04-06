#include<iostream>
#include<stack>
using namespace std;


int main(){

    stack<int> s;
    
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack size: " << s.size() << "\n";

    cout << "Stack Top: " << s.top() << "\n";

    s.pop();
    s.pop();

    cout << "Stack Top: " << s.top() << "\n";

    cout << boolalpha;
    cout << "is stack empty: " << s.empty() << "\n";
    cout << noboolalpha;
    cout << "is stack empty: " << s.empty();
 return 0;
}