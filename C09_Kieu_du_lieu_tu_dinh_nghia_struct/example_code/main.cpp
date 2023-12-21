/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ đơn giản về kiểu dữ liệu struct
 * @version 0.1
 * @date 2023-12-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
#include<string>
using namespace std;

struct DiaChi
{
    std::string thanhPho;
    std::string tenDuong;
    int soNha;
};

struct Person
{
    std::string hoVaTen;
    int tuoi;
    float chieuCao;
    // kiểu dữ liệu array có thể có trong struct
    int soDo[3];
    // struct trong struct 
    DiaChi diaChi;

    // Default constructor
    Person()
    {
        //...
    }
    // Constructor - viết tường minh để thêm tham số 
    Person(string ho_va_ten, int t, float chieu_cao)
    {
        hoVaTen = ho_va_ten;
        tuoi = t;
        chieuCao = chieu_cao;
    }

    // Đây là hàm thành viên - member function
    void lamViec2() // Gọi trực tiếp biến thành viên mà không cần kí tự '.'
    {
        cout << hoVaTen << " dang lam viec.\n";
    }

};

// Viết một hàm truyền tham số là 1 struct như sau:
void lamViec(Person p)
{
    cout << p.hoVaTen << " dang lam viec.\n";
}


int main()
{
    // Để nhóm 3 biến này lại thì ta cần tạo ra một kiểu dữ liệu mới
    // std::string hoVaTen;
    // int tuoi;
    // float chieuCao;

    // Khởi tạo một biến có kiểu dữ liệu Person 
    Person nguoi;

    // Cách làm việc với các phần tử 
    nguoi.hoVaTen = "Kevin Nguyen";
    nguoi.tuoi = 25;
    nguoi.chieuCao = 156; 
    // Cách truy cập của array 
    nguoi.soDo[0] = 85;
    nguoi.soDo[1] = 70;
    nguoi.soDo[2] = 85;
    // Cách truy cập struct lồng struct
    nguoi.diaChi.thanhPho = "Can Tho";
    nguoi.diaChi.tenDuong = "Mau Than";
    nguoi.diaChi.soNha = 165;
    //Xuất ra màn hình
    std::cout << nguoi.hoVaTen << " hien nay " << nguoi.tuoi << " tuoi\nSong tai: "<< nguoi.diaChi.thanhPho << endl;
    //tạo array có kiểu dữ liệu struct 
    Person List_nguoi[100];
    //Truy cập như sau
    List_nguoi[0].hoVaTen = "Nguyen Trung Kien";

    lamViec(nguoi);
    nguoi.lamViec2();
    return 0;
}