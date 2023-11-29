/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief VD về các đặc điểm các dùng ở kiểu mảng char có thể dùng với string
 * @version 0.1
 * @date 2023-11-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
using namespace std;
int main()
{
    string fullName = "Nguyen Trung Kien";
    //fullName[0] = '9';
    //cout << fullName;

    /* Làm việc với chuỗi tức là thao tác với các kí tự trong chuỗi đó
    *  Câu hỏi cần đặt ra là: Duyệt mảng bao nhiêu lần?
    *  Duyệt mảng tứ là phải dụng for(;;)
    *  Bao nhiêu lần thì ở string ta có hàm con stringA.length()
    */

    //VD chuyển các kí tự in hoa thành in thường  
    //Đầu tiên là duyệt tất cả các phần tử của string   
    for(int i = 0; i < fullName.length(); i++) 
    {
        // Bước 2: Thao tác với mỗi phần tử đó
        for(char c = 'A'; c <= 'Z'; c++)
        {
            if(fullName[i] == c)
            {   /*
                Viết tắt
                fullName[i] = c + 32;
                */

                //Viết chuẩn
                int distance = c - 'A'; // Lấy khoảng các từ kí tự viết hoa tới 'A' -> Xác định đó là chữ gì
                char replaceChar = 'a' + distance;
                fullName[i] = replaceChar;
            }
        }
    }
    cout << fullName ;
    return 0;
}

