#include <iostream>

using namespace std;

int main()
{
    cout << "Story: - 1  Different Behaviour" << endl;
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "arr: " << arr << endl;

    char c_arr[5] = "abcd"; // char c_arr[5] = { 'a', 'b', 'c', 'd', '\0'};

    cout << "c_arr: " << c_arr << endl;

    cout << "Moral 1 : cout behaves differently in the char array as compared to int array." << endl;

    //-----------------------------------------------

    cout << "Story: - 2   Keep Printing until Null Char" << endl;
    char temp = 'z';

    char *ptr = &temp;

    cout << ptr << endl;

    cout << "Moral 2 : cout will keep printing the char, starting from z, until it founds a null char." << endl;

    //-----------------------------------------------

    cout << "Story: - 3   Risky Initialization" << endl;

    char ch_arr[6] = "abcde";

    cout << "char ch_arr[6] = \"abcde\";" << endl;

    cout << "Behind the scene: "
         << "\n"
         << "firstly, \"abcde\" stores in a temporary memory."
         << "\n"
         << "After that ch_arr gets a memory and now the chars of \"abcde\" starts coping in this memory one by one."
         << endl;

    char *ch = "abcde";

    cout << "char *ch = \"abcde\";" << endl;

    cout << "Behind the scene: "
         << "\n"
         << "firstly, \"abcde\" stores in a temporary memory."
         << "\n"
         << "After that ch gets a memory to store the address of \"abcde\", since the memory that \"abcde\" has got can be take back from it because it is temporary."
         << "In conclusion: it is risky, very risky practice."
         << endl;

    return 0;
}