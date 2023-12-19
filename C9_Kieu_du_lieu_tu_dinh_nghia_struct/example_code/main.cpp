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


};

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
    std::cout << nguoi.hoVaTen << " hien nay " << nguoi.tuoi << " tuoi\nSong tai: "<< nguoi.diaChi.thanhPho;
    //tạo array có kiểu dữ liệu struct 
    Person List_nguoi[100];
    //Truy cập như sau
    List_nguoi[0].hoVaTen = "Nguyen Trung Kien";




    return 0;
}