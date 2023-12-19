#include<iostream>
using namespace std;

#define PI 3.14         // this is Macro, and it does not take memory
                        // because the pre-processor replace the PI before 
                        // the compilation take place.


int main()
{
    int r = 5;
    double pi = 3.14;
    double area = PI * r * r;
    cout << area;
    return 0;

}

// Four types of Macros
// ------------------------------------------
/*

1. Object-like Macros

#include<iostream>
using namespace std;

#define PI 3.14       

int main()
{
    int r = 5;
    double pi = 3.14;
    double area = PI * r * r;
    cout << area;
    return 0;

}

*/


// ----------------------------------------

/*
2. Chain Macro

#include<iostream>

using namespace std;

#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

int main()
{
    int len = 10, bre = 5;

    cout << "My Instagram followers are "
         << INSTAGRAM << " in number.";

    return 0;
}

here first INSTAGRAM expands in FOLLOWERS then FOLLOWERS expands in 138.

*/

// ------------------------------------------

/*

3. Multi-line Macro



#include<iostream>

using namespace std;

// #define ELE  1, 2, 3, 4, 5, 6      this is also right

#define ELE  1, \
             2, \
             3

int main()
{
    int arr[] = {ELE};

    for(int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


*/





// ------------------------------------------



/*

4. Function-like Macros

===>>> Pair of parentheses immediately after the macro name is necessary.
       If we put a space between the macro name and the parentheses in the macro definition,
       then the macro will not work.

Ex: 1




#include<iostream>

using namespace std;

#define min(a, b)  ((a < b) ? a : b)

int main()
{
    int a = 10;
    double b = 9.5;
    cout << min(a, b);
    return 0;
}


Ex: 2


#include<iostream>

using namespace std;

#define Area(l, b) (l*b)

int main()
{
    int len = 10, bre = 5;

    cout << Area(len, bre);     // ans is 50.

    return 0;
}

*/

// ------------------------------------------

