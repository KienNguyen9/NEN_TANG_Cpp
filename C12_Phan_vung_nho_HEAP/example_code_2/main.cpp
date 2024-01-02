/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ về cấp phát động cho kiểu dữ liệu struct
 * @version 0.1
 * @date 2023-12-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string fullName;
    int age;
};

int main()
{
    Person *Kien = new Person;

    // (*Kien).fullName = "Nguyen Trung Kien";
    // (*Kien).age = 25;

    Kien->fullName = "Nguyen Trung Kien";
    Kien->age = 25;

    cout << Kien->fullName << " nam nay " << Kien->age << " tuoi";
    delete Kien;

    // Mảng con trỏ ở STACK - trỏ tới 4 ô nhớ ở HEAP
    Person *Person_List[4] = { new Person, new Person, new Person, new Person};

    return 0;
}
