/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief 
 * @version 0.1
 * @date 2023-12-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
/*******************************************************************************

Hoàn thành hàm findLongestSubArrayK có các tham số:
a: mảng số nguyên
n: số phần tử của a 
k: một số nguyên

Một mảng K được định nghĩa mảng con trong mảng a và các phần tử liên tiếp bằng nhau và bằng k 
Ví dụ 
(1) a[N] = {1, 1, 1, 2, 3}, k = 1 => 1 mảng con là  {1, 1, 1} 
(2) a[N] = {2, 2, 3, 4, 2, 2, 2, 2 }, k = 2 => 2 mảng con là {2, 2}, {2, 2, 2, 2}
Hàm cần trả về độ dài lớn nhất của mảng K tìm được. Nếu ko tồn tại mảng K nào,
trả về giá trị là -1

Ví dụ
(1) trả về 3 
(2) trả về 4

*******************************************************************************/

#include <iostream>

using namespace std;

int findLongestSubArrayK(int *a, int n, int k)
{
    // Nội dung cần hoàn thành 

}

// Ko sửa hàm main 
int main()
{
    // Test cases: 
    {
        const int N = 5;
        int a[N] = {1, 1, 1, 2, 3};
        cout   << "Test 1: " << (findLongestSubArrayK(a, N, 1) == 3 ? "Pass" : "Failed") << "\n";
    }
    
    {
        const int N = 7;
        int a[N] = {2, 2, 3, 4, 2, 2, 2 };
        cout   << "Test 2: " << (findLongestSubArrayK(a, N, 2) == 3 ? "Pass" : "Failed") << "\n";
    }
    
    {
        const int N = 11;
        int a[N] = {3, 3, 4, 5, 6, 3, 3, 3, 4, 3, 3 };
        cout   << "Test 3: " << (findLongestSubArrayK(a, N, 3) == 3 ? "Pass" : "Failed") << "\n";
    }
    
    {
        const int N = 10;
        int a[N] = {1, 1, 2, 3, 1, 1, 1, 2, 1, 1 };
        cout   << "Test 4: " << (findLongestSubArrayK(a, N, 1) == 3 ? "Pass" : "Failed") << "\n";
    }
    
    {
        const int N = 10;
        int a[N] = {1, 1, 2, 3, 1, 1, 1, 2, 1, 1 };
        cout   << "Test 5: " << (findLongestSubArrayK(a, N, 10) == -1 ? "Pass" : "Failed") << "\n";
    }
    
    {
        const int N = 2;
        int a[N] = {1, 2};
        cout   << "Test 6: " << (findLongestSubArrayK(a, N, 1) == 1 ? "Pass" : "Failed") << "\n";
    }
}
