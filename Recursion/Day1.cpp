#include<iostream>

using namespace std;

// int factorial(int num)
// {
//     if(num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * factorial(num-1);
//     }
// }

// int expo(int num, int power)
// {
//     if(power == 1)
//     {
//         return num;  // Base case
//     }
//     else
//     {
//         return num * expo(num, power-1);  // Recursive case
//     }
// }

void Reverse_Counting(int num)
{
    // Base Case
    if(num == 0)
    {
        cout << num << " ";
        return;
    }
    else
    {
        cout << num << "";

        // Recursive Case
        if(num > 0)
        {
            Reverse_Counting(num-1);
        }
        else
        {
            Reverse_Counting(num + 1);
        }
    }
}


int main()
{
    /*
    int num;

    cout << "Enter the number: ";
    cin >> num;

    int ans = factorial(num);

    cout << "Factorial of " << num << " is " << ans;
    cout << endl;*/

    /*
    int num;
    int power;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Enter its power: ";
    cin >> power;

    int ans = expo(num, power);

    cout << num 
         << " to the power " 
         << power 
         << " is " << ans 
         << endl;*/

    int num;

    cout << "Enter the number: ";
    cin >> num;

    Reverse_Counting(num);

    return 0;
}