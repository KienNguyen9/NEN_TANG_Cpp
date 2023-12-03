/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief  BT 9
 * Dùng vòng lặp for hoặc while để in ra bảng cửu chương từ 1 đến 10
 * có 2 loại
 * 1. Chia theo hàng
 * 2. Chia theo cột
 * @version 0.1
 * @date 2023-12-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
    // Câu 1: chia theo hàng      
    for(int i =1 ; i <= 10; i++){        
        for(int j = 1;j <= 10; j++){
            string s = to_string(i) + 'x' + to_string(j) + '=' + to_string(i*j);
            cout << setw(10) << left << s;
        }
        cout << endl;
    }
    
    return 0;
}
