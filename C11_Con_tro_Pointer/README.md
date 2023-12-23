# Con trỏ - Pointer

<h2>Bài 1. Khái niệm con trỏ</h2>

<h3>Nội dung chính:</h3>

- Con trỏ cũng giống như 1 biến bình thường, nó được lưu ở `STACK` và các biến bình thường có thể làm gì nó cũng có thể làm như thế chỉ khác là các thao tác của nó là nới giá trị địa chỉ
- Con trỏ là một biến dùng để lưu giá trị địa chỉ của các biến khác có cùng kiểu dự liệu với con trỏ
- Kiểu dự liệu thông thường không thể lưu được giá trị địa chỉ 

<h4>Ghi chú:</h4>

Cú pháp khuyên dùng: dấu sao `*` được viết cạnh tên biến

```C++
int *x;

float *y;
```

<h3>Các con trỏ đặc biệt:</h3>

NULL pointer - Con trỏ rỗng: Đây là con trỏ chứa giá trị rỗng, không trỏ đến biến nào cả 

```C++
int *z = NULL
```

Void pointer - Đây là con trỏ có thể trỏ đến bất cứ kiểu dữ liệu nào : nhưng không thể thao tác truy cập, cộng trừ,.. cần phải ép kiểu thành kiểu `con trỏ cụ thể` (vd: int *) rồi gán  nó cho 1 con trỏ khác hoặc in ra

```C++
struct Person{
    string fullName;
    float weight;
};

Person Men;

void *z = &Men;
```

<h2>Bài 2: Các phép toán với con trỏ</h2>

Đối với các biến thông thường, ta có thể cộng, trừ, nhân, chia,...
Trong bài này, sẽ nghiên cứu về các thao tác với pointer

<h3>Nội dung chính:</h3>

- Phép toàn gán: là gán 1 địa chỉ của biến khác cho biến con trỏ
- Phép truy cập vào giá trị của biến đang được trỏ đến - `dereference`: dùng dấu sao `*` 
- Phép cộng, trừ (không có nhân chia khi dùng con trỏ 1 cách chuẩn): khi động 1 đơn vị cho con trỏ thì giá trị nó đang lưu sẽ cộng thêm bằng số dung lượng của kiểu dữ liệu của nó (vd: int là 4 byte)
- Phép so sánh (với số, với giá trị con trỏ khác, `NULL`)