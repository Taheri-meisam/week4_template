
#include <iostream>
#include "TemplateHeader.h"

template <class T, class K>
class MyTempClass {
public:
    T ID;
    int age;
    K grade;
    T returnID() {
        return ID;
    }
        MyTempClass()
        {

        }
        int arr[5] = { 1,2,3,4,5 };
        int* returnArr() {
            return arr;
        }
};


int main()
{
    MyTempClass<int,char> object1;
    object1.age = 20;
    object1.ID = 20002;
    object1.grade = 'A';
    std::cout << object1.returnID() << std::endl;
    std::cout <<"object 1 grade is :" << object1.grade << std::endl;

    MyTempClass<std::string,float> object2;
    object2.ID = "7282833";
    std::cout << object2.returnID();
    int* ptr = object1.arr;
    std::cout <<"PTR values: " << ptr[0];
}

