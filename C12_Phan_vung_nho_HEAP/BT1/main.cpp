/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief 
 * @version 0.1
 * @date 2023-12-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
/*******************************************************************************
Biết chương trình sau đã cấp phát tĩnh và động một số vùng dự liệu kiểu Person. Hoàn thiện các hàm sau:
1. Hàm show_infor() in ra địa chỉ và dữ liệu của 1 Person
2. Viết hàm check_duplicate(Person *p1, Person *p2) để kiểm tra sự trùng lập
Hàm sẽ trả về: 0 hoặc 1 hoặc 2 theo các trường hợp sau:
Trả về 0 : địa chỉ vùng nhớ giống nhau
       1 : địa chỉ vùng nhớ khác nhau nhưng dữ liệu (họ tên) giống nhau
       2 : địa chỉ vùng nhớ và dữ liệu (họ tên) khác nhau
Chương trình cần vượt qua các bài test trong minh họa
Lưu ý: ko sửa hàm main 
*******************************************************************************/

#include <iostream>
using namespace std;

struct Person
{
    // Constructor
    Person(std::string fn)
    {
        fullname = fn;
    }
    string fullname;
};

void show_info(Person *p)
{
    // Noi dung can hoan thanh
    // In ra địa chỉ của person 
    cout << "Adress of memory in HEAP: " << p << '\n';
    // Dữ liệu của Person
    cout << "Full name: " << p->fullname << '\n'; 

}

int check_duplicate(Person* p1, Person *p2)
{
    // Noi dung can hoan thanh 
    if(p1 == p2)
    {
        return 0;
    } 
    else if (p1 != p2 && (p1->fullname) == (p2->fullname))
    {
        return 1;
    } 
    else
    {
        return 2;
    }
}

// Ko sua ham main 
int main()
{
    Person p1("Kien Nguyen");
    Person *p2 = new Person("Linux");
    Person *p3 = new Person("Kevin Nguyen");
    Person *p4 = new Person("Kien Nguyen");
    Person *p5 = &p1;
    
    {
        cout << "Test 1 - Show info: \n";
        show_info(&p1);
    }
    
    {
        cout << "Test 2 - Show info: \n";
        show_info(p2);
    }
    
    {
        cout << "Test 3 - check_duplicate: \n";
        cout << "\t3.1 " << (check_duplicate(&p1, p2) == 2 ? "Pass" : "Failed") << "\n";
        cout << "\t3.2 " << (check_duplicate(&p1, p4) == 1 ? "Pass" : "Failed") << "\n";
        cout << "\t3.3 " << (check_duplicate(&p1, p5) == 0 ? "Pass" : "Failed") << "\n";
    }
}
