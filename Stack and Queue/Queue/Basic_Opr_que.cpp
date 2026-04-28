#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<int> q;
    q.push(20);
    q.push(50);
    q.push(10);

    cout << "Front: " << q.front() << endl;
    cout << "back: " << q.back() << endl;
    cout << "size: " << q.size() << endl;
    cout << "empty: " << q.empty() << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << "Front: " << q.front() << endl;
    cout << "back: " << q.back() << endl;
    cout << "size: " << q.size() << endl;
    cout << "empty: " << q.empty() << endl;


    return 0;
}