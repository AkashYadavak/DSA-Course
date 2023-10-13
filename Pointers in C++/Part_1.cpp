/*              Symbol Table: - In computer science, a symbol table is a data structure
                                used by a language translator such as a compiler or interpreter,
                                where each identifier (or symbol), constant, procedure and function in a program's source code
                                is associated with information relating to its declaration or appearance in the source.
*/


/*

        Types of pointer: -
1. Null Pointer
2. Double Pointer
3. Void Pointer
4. Wild Pointer
5. Dangling Pointer


1. Null Pointer: A null pointer is a pointer that is pointing to nothing. 
                If we don't have an address to be assigned to a poninter then we can use NULL.

    Advantages: -
    *We can initialize a pointer varaible when that pointer variable is not assigned any actual memory address.
    *We can pass a null pointer to a function argument when we are unwilling to pass any actual memory address. 
-------------------------------------------------------------------------------------------------
    int *ptr;   //Contains Garbage value   --->>> Bad pratice, leads to Segmentation Fault
    int *ptr = NULL;  // NULL is constant with value 0
    int *ptr = 0; // Same as above
-------------------------------------------------------------------------------------------------

2. Double Pointer: Pointer to a pointer, means The first pointer is having the address of a variable, 
                   however the second pointer is having the address of the first poninter.
-----------------------------------------------
    int a = 4;
    int *first_ptr = &a;
    int **Sec_ptr = &first_ptr;     // Double pointer
-----------------------------------------------

3. Void Pointer: A void pointer is a generic pointer; it has no associated type with itself.
                 A void pointer can hold an address of any type and can be typecasted to any type.

    Note: - * Void pointer canNOT be dereferenced. It can, however, be done using typecasting the void pointer.
-----------------------------------------------          
            Ex: int a = 48;
                void *ptr = &a;
                cout << (*(int*)ptr);  
-----------------------------------------------
            * Pointer arithmetic is NOT possible on pointers of void due to lack of concerete value and size.

4. Wild Pointers: A pointer behaves like a wild pointer when declared but not initialized.
                  So, they point to any random memeory location.

                Note: *If a pointer p points to a known variable, it's NOT a wild pointer.

-----------------------------------------------
                Ex: - int *p;  // wild pointer     
                    int a = 10;  // variable

                    p = &a; // Thank God, p is not a wild pointer any more.
                    *p = 12;  // it's fine we can change the value of variable - a via pointer p.
-----------------------------------------------

5. Dangling Pointer: A dangling pointer is a pointer to a memory location that has been freed(or deleted).

                NOTE: *If you assigned NULL to a dangling pointer then the dangling pointer is NOT a dangling pointer anymore.
                    See option b)


            There are THREE different ways where pointer acts as a dangling pointer.

    a) Function Call:
-----------------------------------------------
    int *fun()
    {
        int a = 10;
        int *ptr = &a;

        return ptr;
    }

    int main()
    {
        int *p = fun();  // P - Points to something which is not valid anymore. 
        cout << *p; // but still *p will print 10 
        //because varible has destroyed, however the memory is not located to some other variable and it is still containing 10. 

        return 0;
    }
-----------------------------------------------

    b) Deallocaion of memory: Deallocating a memory pointed by a pointer causes dangling pointer.
-----------------------------------------------
    int main()
    {
        // dynamic memory allocation
        int *ptr = (int*) malloc(sizeof(int)); 

        free(ptr); // after calling free() ptr becomes a Dangling pointer.

        ptr = NULL; // ptr is NOT dangling pointer anymore.  

        return 0;
    }
-----------------------------------------------

    c) Variable goes OUT OF SCOPE
-----------------------------------------------
    int main()
    {
        int *ptr = NULL;
        {
            int var = 50;
            ptr = &var;
        }
        //from here onwards, ptr is a dangling pointer.

        cout << *ptr;  // but still *ptr will print 50 
        //because varible has destroyed, however the memory is not located to some other variable and it is still containing 50. 
        return 0;
    }
-----------------------------------------------    


*/
