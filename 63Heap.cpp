#include<iostream>
using namespace std;

int main()
{
    int a=10;     //stored in stack
    int *p = new int();     //allocate memory in heap
    *p = 10;
    delete(p);   //deallocate memory
    p = new int[4];

    p = NULL;               // If memmory is allocated and not deallocate memory , dangling pointer.

                        //Memory leak is situation when memory is allocated and not deallocated. It must be avoided.

    return 0;
}