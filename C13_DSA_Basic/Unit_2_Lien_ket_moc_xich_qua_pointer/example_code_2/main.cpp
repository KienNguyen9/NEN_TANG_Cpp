/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ: có 2 struct riêng biệt nam và nữ liên kết với nhau 
 * 
 * @version 0.1
 * @date 2024-01-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <string>
using namespace std;

// Định nghĩa trước
struct Nu; 

//Struct nam
struct Nam{
    std::string name;

    // Liên kết bằng con trỏ: biến lưu địa chỉ của dữ liệu cần liên kết
    Nu *Link;
};

//Struct Nữ
struct Nu{
    std::string name;
    Nam *Link;
};

int main()
{
    Nam *Kevin = new Nam;
    Kevin->name = "Kevin Nguyen";
   

    Nu *Sakura = new Nu;
    Sakura->name = "Sakura";

    // Liên kết 
    Sakura->Link = Kevin;
    Kevin->Link = Sakura;

    if(Kevin->Link == Sakura && Sakura->Link == Kevin)
    {
        cout << "They connected.\n";
        
    }

    cout << "The connection of Kevin is "<< Kevin->Link->name;
    return 0;
}