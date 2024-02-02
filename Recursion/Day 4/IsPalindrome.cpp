#include<iostream>

using namespace std;



// T.C: - O(n)
// S.C: - O(n)   n: size of the string

/*
bool IsPalindrome(string str)
{
    string reverse_str;

    reverse_str.reserve(str.size());

    for(int i = str.size()-1; i>= 0; i--)
    {
        reverse_str.push_back(str[i]);
    }

    if(str == reverse_str)
    {
        return true;
    }

    return false;
}
*/

// T.C: - O(n/2)
// S.C: - O(1)
/*
bool IsPalindrome(string str)
{
    int i = 0;
    int j = str.size()-1;

    while( i < j)
    {
        if(str[i] == str[j])
        {
            i++;
            j--;
            continue;
        }

        return false;
    }

    return true;
}
*/


// By RECURSION


bool IsPalindrome(string str, int i, int j)
{
    // Base Case
    if(i >= j)
    {
        return true;
    }

    // Recursive case

    if(str[i] != str[j])
    {
        return false;
    }

    i++;
    j--;

    return IsPalindrome(str, i, j);

}




int main()
{
    string str = "";

    cout << "Please enter your string: ";
    cin >> str;

    if(IsPalindrome(str, 0, str.size()-1))
    {
        cout << "Yes, your string is a palindrome." << "\n";
    }
    else
    {
        cout << "No, your string is not a palindrome." << "\n";
    }

    return 0;
}