#include<iostream>

using namespace std;

// void fibonacci(int num, int f_num = 0, int sec_num = 1)
// {
//     // Base Case
//     static int i = 1;
//     if(i == num)
//     {
//         cout << f_num << endl;
//         return;
//     }
//     else
//     {
//         int third_num = f_num + sec_num;
//         f_num = sec_num;
//         sec_num = third_num;
//         i++;
//         fibonacci(num, f_num, sec_num);
//     }
// }


/*
string Say(int num)
{

    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    if(num < 10)
    {
        return arr[num];
    }

    string ans = "";
    int q = num;

    while(q != 0)
    {
        int i = q%10;
        q /= 10;

        if(q == 0)
        {
            ans = arr[i] + ans;
        }
        else
        {
            ans = " " + arr[i] + ans;
        }

    }

    return ans;
}

*/

string SayDigit(int num)
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", 
                      "Seven", "Eight", "Nine"};

    int i = num % 10;

    num /= 10;

    if(num == 0)
    {
        return arr[i];
    }
    else
    {
        return SayDigit(num) + " " + arr[i];
    }
}


int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << SayDigit(num);

    return 0;
}