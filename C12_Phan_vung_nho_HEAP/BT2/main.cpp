/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Cho chương trình sau:
 * Biết có 1 cấu trúc là PersonList gồm 1 biến thành viên là 1 mảng quản lí tối đa 100 phần tử cấp phát động
 * Cùng 1 biến count để đếm số phần tử đã được cấp phát 
 * Hãy hoàn thành các hàm thành viên của PersonList
 * 1. Hàm show_all() in ra tất cả các Person có trong mảng
 * 2. Hàm append() thêm 1 phần tử vào cuối mảng
 * 3. Hàm remove() xóa 1 phần tử tại vị trí bất kì trong mảng
 * 4. Hàm get_oldest_person() in ra person có tuổi cao nhất
 * Chương trình cần vượt qua các bài test bên dưới
 * không sửa hàm main và tham số của hàm thành viên 
 * @version 0.1
 * @date 2023-12-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
/*******************************************************************************
*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

// const int MAX = 100; là biến hằng tối đa của mảng
const int MAX = 100;

struct Person
{
	std::string ho_ten;
	int tuoi;
	
    // Default constructor
	Person(): ho_ten(""), tuoi(-1){}
    // Constructor 
	Person(string ht, int t) : ho_ten(ht), tuoi(t) {}
};

struct PersonList 
{
    // MẢNG con trỏ kiểu Person có 100 phần tử
    // Dùng để lưu 100 địa chỉ (ở HEAP)
	Person *person_list[MAX];
    
    // Biến đếm số phần tử
	int count;
	
	PersonList()
	{
	    count = 0;
	}
	
    void show_all()
    {
        // Noi dung can hoan thanh
        // Duyệt mảng con trỏ và in ra giá trị của nó
        for(int i = 0; i < count; i++)
        {
            //cout << "Person thu " << i+1;
            cout << person_list[i]->ho_ten << " nam nay " << person_list[i]->tuoi << " tuoi\n";
        }
    
    }
    
    void append(Person *new_person)
    // Tham số truyền vào là con trỏ - địa chỉ của 1 vùng nhớ 
    {
        // Noi dung can hoan thanh 
        person_list[count++] = new_person;
        
    }
    
    void remove(int i)
    {
        // Noi dung can hoan thanh 
        // Xóa phần tử thứ i 
        delete (person_list[i]);
        count--;
        // đưa các phần tử phía sau lên
        for(int j = i; j < count; j++)
        {
            person_list[j]=person_list[j+1];
        }

    }
    
    string get_oldest_person()
    {
        int max = person_list[0]->tuoi;
        // Noi dung can hoan thanh 
        for(int i = 1; i < count; i++)
        {
            if(person_list[i]->tuoi > max)
            {
                max = person_list[i]->tuoi;   
            }
        }

        for(int i = 1; i < count; i++)
        {
            if(person_list[i]->tuoi == max)
            {
                return person_list[i]->ho_ten;   
            }
        }

    }

};

int main()
{
    // Tạo 1 list person
    PersonList *list = new PersonList;

    // Thêm các phần tử
    list->append(new Person("Trung Kien", 20));
    list->append(new Person("Linus Torvalds", 50));
    list->append(new Person("Jenny Quach", 27));
    list->append(new Person("Monkey D Luffy", 29));
    
	{
	    cout << "Test 1 - Print all person:\n";
	    list->show_all();
	}
	
	{
	    cout << "Test 2 - Append Tokuda:\n";
        list->append(new Person("Son Goku", 60));
	    list->show_all();
	}
	
	{
	    cout << "Test 3 - Remove Ngoc Trinh:\n";
	    list->remove(2);
	    list->show_all();
	}
	
	{
	    cout << "Test 4 - Oldest person: ";
	    cout << list->get_oldest_person() << "\n";
	}
}
