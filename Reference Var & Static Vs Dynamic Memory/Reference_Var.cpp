#include<iostream>

using namespace std;

/*
// Bad Practice

int& fun(int a)
{
    int num = a;
    int &ans = num;

    return ans; //Since you are returning the reference of a local variable
}
*/


// void Ref_update(int& x)
// {
//     x++;
//     return;
// }


// void update(int x)
// {
//     x++;
//     return;
// }

int main()
{
  /*
    // Creating a variable
    int i = 5;

    // creating a REFERENCE variable (for i)
    int& j = i;

    //Operation on j and results in i

    cout << "Operation on j and results in i" << endl;
    
    cout  << "i = " << i << endl;

    j++;  

    cout  << "i = " << i << endl;

    j *= 2;

    cout  << "i = " << i << endl;

    //Operation on i and result in j

    cout << "Operation on i and result in j" << endl;

    cout << "j = " << j << endl;

    i--;

    cout << "j = " << j << endl;

    i /= 2;

    cout << "j = " << j << endl;
    */

   /* int n = 10;

    // Pass by Value
    cout << "The value of n before function call: " << n << endl;

    update(n);

    cout << "The value of n after function call: " << n << endl;

    //Pass by Reference
    cout << "The value of n before function call: " << n << endl;

    Ref_update(n);

    cout << "The value of n after function call: " << n << endl;
    */



   /*
   #Static Variable and Dynamic Variable

===>> When ever you are writing like this 
    int a;
    int arr[a];
    int b = 10;

    so, the memory for a, arr, and b come from stack.
    This type of memory allocation is called static memory alloction

===>> However, when you are using malloc, new, etc keyword for dynamic memory allocation
      then the memory came from heap (heap is a memory which is very large as compared to stack).
      Since the memory is allocated dynamically to the variable, so this type
      of memory allocation is called dynamic memory allocation.

      Ex: int* p = new int;

      here, the (new int) statement showing the dynamic memory allocation.
      However, the (int* p) statement is showing the static memory allocation.
      p is storing the address of the memory which is equal to int. 


      Now, there are 2 ways to creat a dynamic array: -

      #1 Best Practice:
      int N;
      cin >> N;
      int *arr = new int[N];

      ----------------------
      int N   --> 4 bytes static memory allocation
      int *arr --> 8 bytes static memory allocation
      new int[5] --> 4*N bytes dynamic memory allocation

      Since, memory is coming from heap (which is very big memory),
      so if the value of N is too big then it will be easily handel by the heap. 

---------------------------------------------------------------------------------

      #2 bad practice:

      int N;
      cin>>N;
      int arr[N];   // since, you did not use "new" keyword here. So, the memory allocation will be static for the arr.


      Q: Why it is called bad practice?
      A: Since, we all know that as per the code, the memory already decided at the compile time, and
        that memory come from stack. In the same way, the some memory space is alredy preserved for the arr
        in the stack. However, if the value of N is too big than the preserved memory then our program will be 
        crashed. This is why we considered it as a bad practice.


===>> Coded example for best practice:     
    int n;
    cin >> n;

    int* arr = new int[n];

    // taking input 
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;


######## Difference between static memory allocation V/S Dynamic memory allocation

        1. Less memory consuption in static as compared to dynamic memory allocaion.

        Ex:  
        In static: - 
        int a;  // 4 bytes

        ------
        In Dynamic:
        int* a = new int;  // 12 bytes


        2. Autoclean the memory in static, but not in dynamic.

        !!!!!Please do NOT run following 2 programs

        while()     // tru inside the braces
        {
          //NOT try it.
          int i = 5       // since as the loop starts again the previously created i deleted
        }                   and its memory released.

        while()     // tru inide the braces
        {
          // NOT try it.
          int* p = new int;       // since as loop starts again the previously created p deleted
        }                        and its memory (8 bytes) releasd,
                                 but the memory (4 bytes) allocated dynamically was NOT released.
                                 For releasing the dynamically allocated memory we need to use 
                                 "delete" keyword.


        ===>>> Syntax for "delete" keyword:

        1. for a variable:

            int* ptr = new int;
            delete ptr;

        2. for an array:

            int* arr = new int[10];
            delete[] arr;

   */
  
    return 0;
}