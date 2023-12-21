# Phần 1: Kiểu dữ liệu tự định nghĩa - struct 

<h3>Nội dung chính cơ bản về struct:</h3>

- Định nghĩa: `struct` là một kiểu dữ liệu phức hợp được sử dụng để nhóm các biến có liên quan với nhau. Mỗi biến trong struct được gọi là thành viên của `struct`.
- Trong struct có thể có tất cả các kiểu dữ liệu như: int, float, array và thậm chí là một struct khác
- Chỉ cần nhớ là để truy cập thì thêm tên biến trước dấu `.`
- Cách truy cập đơn giản, chỉ cần linh động theo kiểu dự liệu có trong `struct`. Xem ví dụ bên dưới

<h3>Lưu ý:</h3>

- Khi nào thì nên nhóm dữ liệu vào trong `struct` ?
- Việc nhóm này là không bắt buộc, nhưng khi làm việc sẽ gặp các kiểu dữ liệu có liên quan với nhau 
- Nhóm vào struct để dữ liệu của chúng ta gọn hơn và dễ quản lí
- Nó là tiền đề của lập trình hướng đối tượng `OOP` Object-oriented programming 

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

# Phần 2: Hàm trong struct

<h3>Nội dung chính:</h3> 

- Trong bài trước ta đã nghiên cứu về biến thành viên của struct
- Trong bài này ta sẽ nghiên cứu về hàm trong struct `member-function`
- Khi một hàm là hàm thành viên của struct, thì sẽ được phép truy cập trực tiếp tới các biến thành viên đó (không cần truyền tham số) 
- Từ đó có thể suy ra, các hàm và các biến nào có liên quan chặt chẽ với nhau thì ta có thể đưa vào 1 `struct` để dễ dàng quản lí
- Các tính chất của `constructor`: tự chạy hàm khi có một đối tượng được khởi tạo, có thể dùng `default-constructor` hoặc `overloading` để có thêm gán các giá trị cho biến thành viên nhanh hơn trong khi khởi tại biến kiểu `struct` 
