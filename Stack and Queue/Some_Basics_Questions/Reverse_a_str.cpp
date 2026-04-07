#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main(){
    
    // char str[] = "Hello World";
    // for(int i = 0; str[i] != '\0'; i++){
    //     v.push(str[i]);
    // }

    // T.C: - O(N)  S.C: - O(N)
    string str = "";
    string reverse_str = "";
    stack<char> v;

    cout << "Enter your string: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        v.push(str[i]);
    }


    while(!v.empty()){
        reverse_str += v.top();
        v.pop();
    }

    cout << "Str: " << str << endl;
    cout << "Reverse Str: " << reverse_str << endl;


    /*  T.C: - O(N/2)  S.C: - O(1)
    string str = "Ram";

    for(int i = 0; i <= str.length()/2 - 1; i++){
        int sz = str.length();
        char temp = str[i];
        str[i] = str[sz - i - 1];
        str[sz - i - 1] = temp;
    }
    cout << "str: " << str;
    */
    return 0;
}