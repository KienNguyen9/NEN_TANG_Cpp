/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief BT4
 * 
 * @version 0.1
 * @date 2023-12-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */
/*******************************************************************************

Viết hàm convert string thành số 

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

std::string convert_from_number_to_string(int number)
{
    std::string str_number = "";
    
    // Chuyển đổi số thành kí tự
    
    
    return str_number;
}

std::string convert_from_number_to_string(float number, int precision)
{
    std::string str_number = "";
    
    // Nội dung cần hoàn thành...
    
    return str_number;
}

int convert_from_string_to_integer(std::string str_number)
{
    int number = 0;
    
    // Nội dung cần hoàn thành...
    
    return number;
}

float convert_from_string_to_float(std::string str_number)
{
    float number = 0;

    // Nội dung cần hoàn thành...

    return number;
}

int main()
{
    // Câu 1, 2: Chuyển đổi số thành xâu kí tự 
    {
        std::string str_number_1 = convert_from_number_to_string(3267);
        std::string str_number_2 = convert_from_number_to_string(123.654, 2);
        cout << str_number_1 << "\n" << str_number_2 << "\n";
    }
    
    // Câu 3, 4: Chuyển đổi xâu kí tự thành số 
    {
        int number_1 = convert_from_string_to_integer("158");
        int number_2 = convert_from_string_to_integer("158abc3");
        float number_3 = convert_from_string_to_float("392.153");
        float number_4 = convert_from_string_to_float("3abc92.153");
        cout << number_1 << "\n" << number_2 << "\n" << number_3 << "\n" << number_4 << "\n";
    }
}
