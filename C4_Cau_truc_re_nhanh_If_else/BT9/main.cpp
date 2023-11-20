/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * Một hs có 7 môn học để xếp loại: toán, lý, hóa, văn, anh, sử, địa
 * Cách xếp loại như sau:
 * - HSG ĐTB > 8 và ko có môn nào dưới 4.0
 * - HSK ĐTB 6.5 - 8 VÀ ko có môn nào dưới 3.0
 * - HCTB ĐTB 4.0 - 6.5 và ko có môn nào 0đ
 * - Nếu có một mộn bị 0đ thì HSY
 * - HSY các trường hợp còn lại
 * 
 * thang điểm 0-10
 * 
 * Viết chương trình nhập điểm phẩy
 * 1. Kiểm tra xem điểm nhập vào có hợp lệ không, điểm hợp lệ là 0-10
 * 2.Nếu hợp lệ thì in ra điểm tổng kết và xếp loại của học sinh 
 *  
 * @version 0.1
 * @date 2023-11-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    // Thay thể lệnh nhập thủ công để test nhanh hơn
    float toan = 5;
    float ly = 6;
    float hoa = 6;
    float van = 6;
    float anh = 4;
    float su = 4;
    float dia = 0;

    // Điểm trung bình
    float tb = 0;
    tb = (toan+ly+hoa+van+anh+su+dia)/7;

    

    // Xet điểm có hop le khong
    if((toan >= 0 && toan <= 10) && (ly >= 0 && ly <= 10) && (hoa>= 0 && hoa <= 10) && (van>= 0 && van <= 10) && (anh>= 0 && anh <= 10) && (su>= 0 && su <= 10) && (dia>= 0 && dia <= 10))
    {
        cout << "Diem hop le.\n";
        cout << "Diem trung binh: " << tb << '\n';
        if(tb > 4 && tb <= 6.5)
        {
            // TB
            if(toan != 0 && ly != 0 && hoa != 0 && van != 0 && anh != 0 && su != 0 && dia != 0)
            {
                cout << "Xep loai: trung binh.";
            } 
            else 
            {
                cout << "Xep loai: yeu";
            }
        } 
        else if(tb > 6.5 && tb <= 8)
        {
            //Khá
            if(toan >= 3 && ly >= 3 && hoa >= 3 && van >= 3 && anh >= 3 && su >= 3 && dia >= 3)
            {
                cout << "Xep loai: kha.";
            } 
            else 
            {
                cout << "Xep loai: trung binh";
            }
        } 
        else if( tb > 8)
        {
            //giỏi
            if(toan >= 4 && ly >= 4 && hoa >= 4 && van >= 4 && anh >= 4 && su >= 4 && dia >= 4)
            {
                cout << "Xep loai: gio.";
            } 
            else 
            {
                cout << "Xep loai: kha";
            }
        } else
        {
            //Yếu
            cout << "Xep loai: yeu"; 
        }

    } 
    else 
    {
        cout << "Diem khong hop le.";
    }



    return 0;
}