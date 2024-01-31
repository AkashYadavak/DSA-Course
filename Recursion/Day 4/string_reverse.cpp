#include<iostream>

using namespace std;

// String reverse by loop
// T.C: - O(n/2)
// S.C: - O(1)

inline void swap(char &one, char &two)
{
    char temp = one;
    one = two;
    two = temp;
}

/*
string reverse(string str)
{
    int size = str.size();

    for(int i = 0; i <= (size/2)-1; i++)
    {
        swap(str[i], str[size - 1 - i] );
    }

    return str;
}
*/

/*

// String Reverse by Recursion
//  T.C: - O(n)
//  S.C: - O(1)
string reverse(string str)
{
    // Base case
    if(str.size() == 1)
    {
        return str;
    }

    // Recursive case

    
    return reverse(&(str[1])) + str[0];
}

*/


// Optimize version of above recursive function (Two pointers approach (also applied in loop as well))
// T.C: - O(n/2)
// S.C: - O(1)

void reverse(string str, int i, int j)  // you can use {str.size() - 1 - i}, instead of j 
{
    // Base case
    if(i >= j)
    {
        return ;
    }

    // recursive case

    swap(str[i], str[j]);

    i++;
    j--;


    reverse(str, i, j);

}


int main()
{
    string str = "";

    cout << "Please enter your string here: ";
    cin >> str;

    reverse(str, 0, str.size()-1);
    cout <<"Your string after reversing is: " << str; 


    return 0;
}
