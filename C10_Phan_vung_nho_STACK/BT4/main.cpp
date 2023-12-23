/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief 
 * @version 0.1
 * @date 2023-12-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*
Chương trình sau cần in ra được 10 và 20, nhưng đang gặp lỗi. 
Ko thêm bớt dòng code nào, chỉ được phép di chuyển các dòng code có sẵn. 
Hãy sửa để chương trình sau chạy được mà ko lỗi. 

Lưu ý: Các dòng code có đánh dấu (*) là được phép di chuyển 
*/
// #include <iostream>

// using namespace std;

// int main()
// {int x = 10;     // (*)
//             int y = 20;     // (*)
//     {
//         {
            
//         }
//         {
//         }
//         cout << x << "\n";  // (*)
//     }
//     if(2 > 1)
//     {
//         cout << y;          // (*)
//     }
// }


/**
 * @brief Chương trình sau cần in ra được 1000, nhưng đang gặp lỗi 
Ko thêm bớt dòng code nào, chỉ được phép di chuyển các dòng code có sẵn. 
Hãy sửa để chương trình sau chạy được mà ko lỗi. 

Lưu ý: Các dòng code có đánh dấu (*) là được phép di chuyển 
 * 
 */


// #include <iostream>

// using namespace std;

// int main()
// {
//             int x = 0;      // (*)
//     {
//         for(int i = 0; i < 10; i++)
//         {
//             x+=2;
//         }
//         x *= 5;
//     }
//     cout << 10 * x;
// }


/*******************************************************************************

đang gặp lỗi 
Ko thêm bớt dòng code nào, chỉ được phép di chuyển các dòng code có sẵn. 
Hãy sửa để chương trình sau chạy được mà ko lỗi. 

Lưu ý: Các dòng code có đánh dấu (*) là được phép di chuyển 
*******************************************************************************/

#include <iostream>

using namespace std;
std::string ho_ten = "Toyota";                 // (*)
    int tuoi = 20;                                  // (*)
    std::string que_quan = "Nhat Ban";     // (*)
    int so_do_ba_vong[3] = {100,80,90};  // (*)
void xin_chao()
{
    cout << "Xin chao. Toi ten la " << ho_ten << ".\n";
}

void thong_tin_tuoi()
{
    cout << "Toi nam nay " << tuoi << " tuoi.\n";
}

void thong_tin_que_quan()
{
    cout << "Toi den tu " << que_quan << ".\n";
}

void thong_tin_so_do()
{
    std::cout << "So do ba vong cua toi la: ";
    for(int i = 0; i < 3; i++)
    {
        cout << so_do_ba_vong[i] << " ";
    }
}


int main()
{
    
    {
        
        {
            {
                
                {
                    
                }
                xin_chao();
            }
            thong_tin_tuoi();
        }
        thong_tin_que_quan();
    }
    thong_tin_so_do();
}





