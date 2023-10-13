/*  Relation betw. lcm and gcd

  lcm(a,b) * gcd(a,b) =  a*b

*/


#include <iostream>

using namespace std;

                                        // Brute Force approach

/* int gcd(int a, int b)
{
    if(a > b)
    {
        return gcd(b, a);
    }

    for(int i = a; i >= 2; i--)
    {
        if(a%i == 0)
        {
            if(b%i == 0)
            {
                return i;
            }
        }
    } 

    return 0;
} */

                                    // Better Approach 

/*int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)  // if a > b then a-b and store the value in a
        {
            a = a - b;
        }
        else    // if b > a then b-a and store the value in b
        {
            b = b - a;
        }
    }

    return a;
} */

                                    // Best Approach
                                    // We are just subtracting in fast manner, means dividing 
                                    // and storing the remainder

int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }

    if(b == 0)
    {
        return a;
    }

    while(a != 0 && b != 0)
    {
        if(a > b)       // if a > b then a%b and store the remiander in a
        {
            a = a%b;
        }
        else        // if b > a then b%a and store the remiander in b
        {
            b = b%a;
        }
    }

    if(a == 0)
    {
        return b;
    }

    return a;
}




int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;

    cout << "Greatest Common Factor of "
         << a
         << " and "
         << b
         << " is " << gcd(a, b);

    return 0;
}
