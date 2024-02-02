#include<iostream>

using namespace std;

// T.C: - O(n)   n: b
// S.C: - O(1)

/*
int pow(int a, int b){

    int ans = a;
    for(int i = 1; i < b; i++)
    {
        ans *= a;
    }

    return ans;

}

*/


// Recursion
// T.C: - O(n)

/*
int pow(int a, int b)
{
    // Base Case
    if(b == 1)
    {
        return a;
    }

    // recursive case

    return a * pow(a, b-1); 
}
*/

// T.C: - O(log n)

int pow(int a, int b)
{
    // Base Case

    if(b == 1)
    {
        return a;
    }

    int temp;
    if(b % 2 == 0)
    {
        temp = pow(a,  b/2);
        temp *= temp;
        return temp;
    }

    temp = pow(a, b/2);
    temp *= temp;

    return temp * a;
}


int main(){
    
    int a = 1, b = 1;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << a << " to the power " << b << " is " << pow(a, b);


    return 0;

}
