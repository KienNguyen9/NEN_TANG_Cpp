/**
 * @file Exercise2.cpp
 * @author Kevin Nguyen
 * @brief
 * Viết chương trình nhập từ bàn phím các thông tin sau và lưu vào các biến có kiểu dữ liệu tương ứng:
 * Tên: std::string
 * Năm sinh: int
 * Quê quán: std::string
 * Chiều cao (m): float
 * Cân nặng (kg): float
 * Tình trạng hôn nhân: bool (1 - đã kết hôn; 0 - chưa kết hôn)
 * Kết quả tốt nghiệp THPT: char (G - Giỏi, K - Khá, T - Trung bình)
 * 
 * In ra tờ khai Sơ yếu lí lịch tương ứng với các dữ liệu đã nhập. Kết quả chạy được cần giống như hình minh họa
 * @version 0.1
 * @date 2023-11-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <string>

// Dùng các lệnh trong namespace std 
//using namespace std; 

int main()
{   
    // Các biến chỉ cần KHAI BÁO - không KHỞI TẠO giá trị
    std::string hoTen = "";
    int namSinh = 0;
    std::string queQuan = "";
    float chieuCao = 0.0;
    float canNang = 0.0;
    bool honNhan = NULL;
    char xepLoai = NULL; // G K T

    // Yêu cầu thao tác nhập dư liệu
    std::cout << "\n|---------------------------------------------------|";
    std::cout << "\n|           NHAP THONG TIN SO YEU LÍ LỊCH           |";
    std::cout << "\n|---------------------------------------------------|";

    std::cout << "\n| Nhap ho va ten: ";
    getline(std::cin, hoTen); // Chú ý cin thuộc bộ công cụ std
    
    std::cout << "\n| Nhap nam sinh: ";
    std::cin >> namSinh;

    std::cin.ignore();
    std::cout << "\n| Nhap que qua: ";    
    getline(std::cin, queQuan);

    std::cout << "| Nhap Chieu cao: ";
    std::cin >> chieuCao;
    std::cout << "| Nhap can nang: ";
    std::cin >> canNang;

    std::cin.ignore();
    std::cout << "| Nhap xep loai (G/K/T): ";
    std::cin >> xepLoai;

    // Xuất dữ liệu đã nhập ra màn hình



    // In ra màn hình sơ yếu lí lịch
    std::cout << "\n|---------------------------------------------------|";
    std::cout << "\n|              THONG TIN SO YEU LI LiCH             |";
    std::cout << "\n|---------------------------------------------------|";
    std::cout << "\n| Ho va ten: "<< hoTen;
    std::cout << "\n| Nam sinh: " << namSinh;
    std::cout << "\n| Que quan: " << queQuan ;
    std::cout << "\n| Chieu cao: " << chieuCao << "Cm";
    std::cout << "\n| Can nang: " << canNang << "Kg";
    std::cout << "\n|---------------------------------------------------|";
    return 0;
}