# Chương 7 Làm việc với kiểu dữ liệu string

<h4>Nội dung chính:</h4>

- String là một mảng (array) các phần tử kiểu char.
- Tính năng chỉ ```string``` mới có đó là: cộng 2 chuỗi với nhau. Còn ở kiểu ```char``` thì thì khi cộng lại tức là cộng 2 mã ASCII lại với nhau thành 1 kí tự khác hoàn toàn. 
- Tính năng xuất ra nhanh số lượng phần tử của chuỗi (VD: stringA.length() = số lượng phần tử của stringA)
- Tính năng trích xuất một mảng kí tự trong chuỗi (VD: stringA.substr(3,4) => trả về mảng kí tự: từ kí tự thứ 3 về sau 4 phần tử) 
- Một biến ```string``` có thể dùng như một ```mảng kiểu char```, hiểu đơn giản string là nâng cấp của ``` mảng kiểu char ``` nhưng có thêm các tính năng mới.
- Chú ý khi làm việc với chuỗi tức là các thao thác xử lí các kí tự trong chuỗi đó (chỉ cần hiểu đơn giản như thế) 


<h4>Chú ý khi nhập xuất chuỗi và các hàm hay dùng:</h4>

```C++
string s;

// Hàm cin chỉ có thể nhập chuỗi không có dấu cách ' ' 
cin >> s; // Nguyen Kien -> Nguyen

// Muốn nhập chuỗi có dấu cách thì phải dùng hàm
getline(cin, s); // Nguyen Kien -> Nguyen Kien

//Hàm lấy số lượng phần tử
s.length(); // Cho ta số lượng phần tử của chuỗi s

//Hàm trích 1 phần trong chuỗi 
string Name = s.substr(13,4); // từ kí từ 13 về sau lấy 4 phần tử

```


```C++
char c = 'K';
//Cách 1: RẤT cũ của lập trình C
char name[10] = {'K','i','e','n'};
//Cách 2: cũ của lập trình C
char name[10] = "Kien";

// Cách 3: cách mới trong LT C++
string name = "Trung Kien";
```

Đây là tính năng mà ```string``` mới có, ```array``` ko có.
```C++
//Nối chuỗi(cộng chuỗi)
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstName = "Kien";
    string lastName = "Nguyen";
    string fullName = firstName + ' ' + lastName;
    cout << fullName;
    return 0;
}
```