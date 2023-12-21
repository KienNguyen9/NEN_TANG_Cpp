/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief 
 * Xây dựng 1 struct lưu thông tin: tên, tuổi, hệ số lương của nhân viên
 * 
 * 1. Viết 1 function bên trong struct trên để in ra tiền lương thực tế của nhân viên đó, với giả sử lương cơ bản là 3 triệu
 * Công thức tính lương như sau: Tiền lương = hệ số * lương cơ bản
 * (output: 
 * Nhap ten: Kevin nguyen
 * Nhap tuoi: 25
 * Nhap he so luong: 2.5
 * Tien luong cua Kevin Nguyen la 7,500,000 VND)
 * 
 * 2. Cải tiến bài trên
 * Viết chương trình nhập từ bàn phím một số n, là số lượng nhân viên
 * Nhập liên tục thông tin các nhân viên từ bàn phím và lưu chúng vào mộ mảng. Kết thúc chương trình in ra 
 * lương trung bình của các nhân viên:
 * 
 * @version 0.1
 * @date 2023-12-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
#include<string>
#include <iostream>
#define MAX 300

using namespace std;

/***
 * Struct lưu thông tin
*/
struct Thong_Tin
{
    std::string fullName;
    int age;
    float salaryRank;

    // Constructor
    Thong_Tin()
    {

    }

    void NhapThongTin()
    {
        cin.ignore();
        cout << "Nhap ten: ";
        getline(cin,fullName);
        cout << "Nhap tuoi: ";
        cin >> age;
        cout << "Nhap he so luong: ";
        cin >> salaryRank;
    }
    // Hàm tính tiền lương 
    long salaryCounter()
    {

        return salaryRank*3000000; 
    }
};

int main()
{
    //Thong_Tin Kien;
    int n;
    Thong_Tin nNhanVien[MAX]; 
    long sum = 0;
    // cout << "Nhap ten: ";
    // getline(cin,Kien.fullName);
    // cout << "Nhap tuoi: ";
    // cin >> Kien.age;
    // cout << "Nhap he so luong: ";
    // cin >> Kien.salaryRank;
    // cout << "Tien luong cua " << Kien.fullName << " la: "  <<  Kien.salaryCounter();

    cout << "\n\n\nTask 2: ";
    cout << "\nNhap n: ";
    cin >> n;

    for(int i = 0; i<n; i++)
    {
        cout << "\nNhap ten nhan vien thu " << (i+1) << endl;
        nNhanVien[i].NhapThongTin();
        sum += nNhanVien[i].salaryCounter();
    }

    cout << "\nTrung binh cac nhan vien: " << sum/n;
    return 0;
}