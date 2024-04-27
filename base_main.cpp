#include "A.h"
#include <iostream>

// Passes an object of type A by reference. The const type qualifier ensures that the 
// object cannot be altered by the function.
void printObj1(const A & a)
{
    std::cout << "Object of Type A" << a.foo() << std::endl;
}
// Another important thing about this function is that if the object is passed with the 
// const type qualifier, then all of the methods that are called using the function
// must also have the const type qualifier 

// Passes an object of type A by value. A new object will be created that will take on the 
// values of the data fields in the object that is used in the argument.
void printObj2(A a)
{
    std::cout << "Object of Type A" << a.foo() << std::endl;
}

template<typename T>
void display(const T arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int nArr[] = {1,2,3,4,5};
    std::string sArr[] = {"abc", "def", "ghi"};
    double dArr[] = {1.0,2.0,4.5};

    display(nArr, 5);
    display(sArr, 3);
    display(dArr, 3);

    return 0;
}