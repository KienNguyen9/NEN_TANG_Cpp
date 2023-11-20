<h1>Chương 5. Vòng lặp - Looping statments :dollar:</h1>
<details>
    <summary>
        <h3>Vòng lặp for - for loop statements</h3>
    </summary>

CHÚ Ý: Vòng lặp là phần quan trọng cần nắm thật chắc

Vòng lặp là gì?
Thực hiện câu lệnh lặp đi lặp lại nhiều lần

Cú pháp:
```C++
    /*
    for(biến đếm; điều kiện thực hiện; tự tăng biến đếm)
    {
        các câu lệnh cần lặp
    }
    */
    for(int i = 0; i <5; i++)
    {
        cout << "Hello world!";
    }
```

Ví dụ: 
```C++
#include <iostream>
using namespace std;
int main()
{
    // Viết tay các câu lệnh giống nhau nhiều lần
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n";
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n";
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n"; 
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n"; 
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n"; 
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n"; 
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n"; 

    // Dùng vòng lặp for để làm điều tương tự 30 lần
    for(int i = 0; i<30; i++) // i mean "index: số thứ tụ" or "interate: lập lại"  
    {
        cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n";
    }

    //Các cách viết có thể dùng khi lập trình với for
    // Biến đếm nằm bên ngoài for
    int j = 0;
    for(; j<5; j++)
    {
        cout << "Bien dem nam ben ngoai vong lap for";
    }

    // VỌNG LẶP KO CÓ ĐK DỪNG
    for(int i = 0; ; i++)
    {
        cout << "bien dem: " << i << '\n' ;
    }
    //Vòng lặp vô hạn
    for(;;)
    {
        cout << "Vong lap vo han";
    }
}
```
</details>




<details>
    <summary>
        <h3>Vòng lặp while - while loop statements</h3>
    </summary>

<h4>Vòng lặp while là: </h4>

- Dùng khi KHÔNG BIẾT TRƯỚC số lần lặp
- Về bản chất cũng là vòng lặp giống như for, và có thể thay thế cho nhau. Nhưng 2 cách này đều có ưu nhược điểm riêng
- Có rất nhiều cách viết vòng lặp, có thể linh hoạt trong các viết
Cú pháp:
```C++
/*
    (Khai báo biến đếm bên ngoài)
    int i = 0;
    while(1 điều kiện)
    {
        (các câu lệnh)
        (lệnh tăng hoặc giảm)
    }
*/
int i = 0;
while(i < 100)
{
    cout << "Nguyen Trung Kien\n";
    i++
}
``` 

Tương tự như while() thì do{}while() là giống nhau mọi thứ chỉ trừ ở 1 điểm

```C++
do
{
    // các câu lệnh
}while(dieu_kien_dung)

``` 
Là các lệnh sẽ được thực hiện ít nhất một lần.

</details>





<details>
    <summary>
        <h3>Câu lệnh cotinue và break - Continue and break statement</h3>
    </summary>
    <h4>Hai phép lệnh continue và break điều khiển vòng lặp như thế nào: </h4>

Chú ý: ```continue``` chỉ dùng với for, while và switch case.
- Lệnh  ```continue``` cho phép bỏ qua tất cả các lệnh phía dưới để đi đến đầu vòng lặp tiếp theo.
- Lệnh ```break``` cho phép thoát ra khỏi vòng lặp

Vi dụ:    
```C++
for(int i = 0; i< 10; i++)
{   
    cout << "di lam";
    continue;
    cout << "di vong vong";
}
```

Chỉ có tác dụng với for()
```C++
//VD bỏ qua việc đi làm thêm vào ngày chẵn
for(int i = 0; i <=10; i++)
{
    if(i%2==0)
    {
        continue;
    }
    cout << "di lam them\n";
}
```

VD lệnh break, khi không có điều kiện duy trì

```c++
for(int i = 2;; i++)
{
    if(i == 7)
    {
        break;
    }
    cout << "Di lam cham chi vao thu " << i << '\n';
}
```

</details>





<details>
    <summary>
        <h3>Vòng lặp for - for loop statements</h3>
    </summary>
</details>

