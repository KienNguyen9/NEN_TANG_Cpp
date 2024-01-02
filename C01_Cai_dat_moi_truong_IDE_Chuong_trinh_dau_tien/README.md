# Lời mở đầu - Đây là kho lưu trữ kiến thức lập trình C++

# Chương 1. Chương trình đầu tiên.

## 1.1 Cài đặt môi trường C++ với Visual Studio.

- Cài đặt Visual Studio (bản đầy đủ hơn so với VScode).
- Chọn tích vào mục: "Desktop development with C++". Cài luôn cả môi trường C++. Tiếp tục và Install.

    ### Cách tạo project mới.

    - Create new project
    - Empty project
    - Project name - Location - Solution 
    - Thêm chương trình vào phần Source file
    - Viết code 
    - Debuger 
    - Tạo thêm project trong Solution để làm việc

## 1.2 Code C++ ngay trên trình duyệt với OnlineGDB.com

- Nếu máy của bạn cấu hình yếu và không thể chạy Visual Studio hoặc VScode 
- Bạn có thể code trên trình duyệt web: OnlineGDb.com
- Với giao diện vừa đủ dùng
- Có thể lưu lại, qua tài khoản.

## 1.3 Cấu trúc của một chương trình C++ đơn giản.
- Sau khi cài đặt IDE thì bắt đàu viết code.

    ### Tổng quan của 1 chương trình C++.

```C++
// Thư viện: liệt kê thư viện chứa các hàm sẽ dùng trong chương trình.
// input output stream: Luồng vào ra của chương trình
#include <iostream>

// thành phần bắt buộc của chương trình - hay là chương trình chính
int main() 
{
    // Nội dung chương trình: là các câu lệnh (statement or Instruction)
    /*  
    *   "std::cout<<" : đây là cú pháp(Syntax) của 1 *   câu lệnh. cần ghi nhớ thuộc lòng.
    *   "std" (standard library): là tên bộ chức năng thư viện chuẩn có sẵ trong ngôn ngữ C++
    *   "cout" (character out) là một hàm cụ thể
    *   Có thể hiểu công cụ "cout" nằm trong bộ công cụ std.
    *   "::" và "<<" là kí hiệu để dùng công cụ
    *   "\n" là kí hiệu xuống dòng
    */
    std::cout << "Hello world!\n";
   

    /*
    *   Lệnh này là trả về giá trị cho hàm main 
    *   Không có cũng ko lỗi, nhưng CẦN PHẢI CÓ để đảm bảo cấu trúc của chương trình
    */
    return 0;
    
}
```
Muốn bỏ qua dòng "std::" thì thêm lệnh này sau khi nhập tất cả các thư viện
```c++
// Dây là cú pháp thêm thư viện, có thể kết thúc bằng dấu ";" nhưng đó là thừa và ko cần thiêt 
#include <iostream>; 

// chú ý đây là 1 lệnh, khỏng phải hàm, biến,...phải có dấu ";"
using namespace std; 
```
    
