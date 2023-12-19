# Kiểu dữ liệu tự định nghĩa - struct 

<h3>Nội dung chính:</h3>

- Định nghĩa: `struct` là một kiểu dữ liệu phức hợp được sử dụng để nhóm các biến có liên quan với nhau. Mỗi biến trong struct được gọi là thành viên của `struct`.
- Trong struct có thể có tất cả các kiểu dữ liệu như: int, float, array và thậm chí là một struct khác
- Chỉ cần nhớ là để truy cập thì thêm tên biến trước dấu `.`
- Cách truy cập đơn giản, chỉ cần linh động theo kiểu dự liệu có trong `struct`. Xem ví dụ bên dưới

```C++
#include<iostream>
#include<string>
using namespace std;

struct DiaChi
{
    std::string thanhPho;
    std::string tenDuong;
    int soNha;
};

struct Person
{
    std::string hoVaTen;
    int tuoi;
    float chieuCao;
    // kiểu dữ liệu array có thể có trong struct
    int soDo[3];
    // struct trong struct 
    DiaChi diaChi;


};

int main()
{
    // Để nhóm 3 biến này lại thì ta cần tạo ra một kiểu dữ liệu mới
    // std::string hoVaTen;
    // int tuoi;
    // float chieuCao;

    // Khởi tạo một biến có kiểu dữ liệu Person 
    Person nguoi;

    // Cách làm việc với các phần tử 
    nguoi.hoVaTen = "Kevin Nguyen";
    nguoi.tuoi = 25;
    nguoi.chieuCao = 156; 
    // Cách truy cập của array 
    nguoi.soDo[0] = 85;
    nguoi.soDo[1] = 70;
    nguoi.soDo[2] = 85;
    // Cách truy cập struct lồng struct
    nguoi.diaChi.thanhPho = "Can Tho";
    nguoi.diaChi.tenDuong = "Mau Than";
    nguoi.diaChi.soNha = 165;
    //Xuất ra màn hình
    std::cout << nguoi.hoVaTen << " hien nay " << nguoi.tuoi << " tuoi\nSong tai: "<< nguoi.diaChi.thanhPho;
    //tạo array có kiểu dữ liệu struct 
    Person List_nguoi[100];
    //Truy cập như sau
    List_nguoi[0].hoVaTen = "Nguyen Trung Kien";
    return 0;
}
```