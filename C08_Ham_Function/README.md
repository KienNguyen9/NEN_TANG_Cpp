# Chương 8 - Hàm Function

<h3>Định nghĩa: Hàm là gì ?</h3>

- Hàm là một khối câu lệnh có thể tái sử dụng, được thiết kế để thực hiện 1 công việc cụ thể  trong chương trình
- Hàm có thể gọi từ bất cứ vị trí nào trong chương trình, miễn là hàm đó đã được định nghĩa trước


Ví dụ:
```C++
#include <iostream>
#include <cmath> //thư viện toán học
#include <string> // thư viện chuỗi
using namespace std;

// hàm tìm số lớn hơn từ 2 số
void max(int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}

//Hàm chính
int main()
{
    int x = 1; y = 2;

    //Lời gọi hàm
    int z = max(x,y);

    cout << z;
    return 0;
}
```

<h3>Nạp chồng - Overloading </h3>

- Nạp chồng là một khái niêm quan trong khi sử dụng hàm
- Có nghĩa là ta có thể viết nhiều hàm CÙNG TÊN nhưng KHÁC THAM SỐ

<h3>Câu lệnh return trong hàm</h3>

Từ khóa ```return``` trong C++ được sử dụng để trả về giá trị của một hàm. Giá trị trả về của một hàm có thể là bất kỳ kiểu dữ liệu nào, bao gồm int, float, double, string, struct, class,...

Khi gặp câu lệnh return, hàm sẽ trả về giá trị ngay tại thời điểm đó. Tất cả câu lệnh trong hàm, sau dòng lệnh return sẽ được bỏ qua.

Từ khóa ```return``` có thể được sử dụng với nhiều cách khác nhau, chẳng hạn như:

- Để trả về giá trị của một hàm.
- Để thoát khỏi một hàm.
- Để kiểm tra lỗi và trả về giá trị cụ thể.

Hàm void không có kiểu dữ liệu trả về nhưng có thể dùng lệnh return để thoát hàm 

```C++
void Func(int a)
{
    if(a < 0)
    {
        // Sai điều kiện thoát hàm
        return;
    }
    cout << "Done";
}
```

