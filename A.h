#ifndef A_H
#define A_H
#include <iostream>

class A{
    // When creating functions that use a class's private data fields, you can directly access them 
    // by just using their name. However, outside of the class, such as in the main function or
    // in another class, they can only be accessed by the user if the class provides an accessor function
    private: 
        int a,b,c;
        double x,y,z;
        int size;
        int *nums;

        static int numObjs;
    public:
        A(const int arr[], int size){
            a = 0, b = 0, c = 0;
            x = 0, y = 0, z = 0;
            this->size = size;
            nums = new int[size];
            for(int i = 0; i<size; i++)
            {
                nums[i] = arr[i];
            }
            numObjs++;
        }
        A(const A &obj){
            a = obj.a, b = obj.b, c = obj.c;
            x = obj.x, y = obj.y, z = obj.z;
            size = obj.size;
            nums = new int[size];
            for(int i = 0; i<size; i++)
            {
                nums[i] = obj.nums[i];
            }
            numObjs++;
        }
        ~A(){
            numObjs--;
            delete [] nums;
            std::cout << "Destructing A object" << std::endl;
        }

        // Since foo is defined in the class definition, it is automatically an inline function 
        double foo() const{
            return 1.0;
        } 
        // Since fi is not defined in the class definition, it is not an inline function
        int fi() const;

        void displayNums()
        {
            for(int i = 0; i<size; i++)
            {
                std::cout << nums[i] << " ";
            }
            std::cout << std::endl;
        }

        static int getNumObjs()
        {
            return numObjs;
        }
};


#endif