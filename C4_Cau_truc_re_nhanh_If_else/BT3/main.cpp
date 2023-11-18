/**
 * @file main.cpp
 * @author Kien Nguyen  
 * @brief 
 * Nhập vào tháng của 1 năm, cho biết tháng đó thuộc quý mấy trong năm và in ra màn hình. Nếu số tháng ko hợp lệ in thông báo lỗi
 * @version 0.1
 * @date 2023-11-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    int thang = 0;
    cout << "Nhap vao 1 thang trong nam: ";
    cin >> thang;
 
    //  switch(thang)
    //  {
    //     case 1:
    //     {
    //         cout <<"Quy 1";
    //         break;
    //     }
    //     case 2: 
    //     cout <<"Quy 1";
    //     break;

    //     case 3: cout <<"Quy 1"; break;
    //     case 4: cout <<"Quy 2"; break;
    //     case 5: cout <<"Quy 2"; break;
    //     case 6: cout <<"Quy 2"; break;
    //     case 7: cout <<"Quy 3"; break;
    //     case 8: cout <<"Quy 3"; break;
    //     case 9: cout <<"Quy 3"; break;
    //     case 10: cout <<"Quy 4"; break;
    //     case 11: cout <<"Quy 4"; break;
    //     case 12: cout <<"Quy 4"; break;
    //  }
     if(thang == 1 || thang == 2 || thang == 3)
     {
        cout << "Quy 1.\n";
     }
     else if ( thang == 4 || thang == 5 || thang == 6)
     {
        cout << "Quy 2.\n";
     }
     else if ( thang == 7 || thang == 8 || thang == 9)
     {
        cout << "Quy 3.\n";
     }else if ( thang == 10|| thang == 11 || thang == 12)
     {
        cout << "Quy 4.\n";
     }
  
    else
    {
        cout << "\nThang ban da nhap ko hop le.";
    }

    return 0;
}


