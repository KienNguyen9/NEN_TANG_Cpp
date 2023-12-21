#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int a = 12345;
    
    std::string str_number = " ";
    
    // Chuyển đổi số thành kí tự
    for(int i = (log10(a) + 1); i > 0 ; i--)
    {
        str_number += a/pow(10,i);
    }

    cout << str_number;
    
    return 0;
}