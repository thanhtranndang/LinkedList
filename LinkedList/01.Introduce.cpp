#include <iostream>
using namespace std;
int main()
{
    return 0;
}
// Bài 1. Giới thiệu về DSLK
/*
    1.
    Định nghĩa
    Danh sách liên kết: là một cấu trúc dữ liệu được sử dụng để lưu trữ các phần tử tương tự như mảng nhưng có nhiều điểm khác biệt

    2. Tính chất
    - Danh sách liên kết có thể mở rộng và thu hẹp một cách linh hoạt
    - Phần tử cuối cùng trong DSLK trỏ vào NULL ( là con trỏ NULL )..............(Null: là kết thúc kí tự Null )
    - Không lãng phí bộ nhớ nhưng cần thêm bộ nhớ để lưu phần con trỏ
    - Các phần tử trong DSLK được gọi là Node, được cấp phát động
    - Đây là CTDL cấp phát động nên khi còn bộ nhớ thì sẽ còn thêm được phần tử vào DSLK

    data: lưu dữ liệu của Ndoe đó
    link: lưu địa chỉ của Node tiếp theo

    3. So sánh giữa mảng và DSLK
    - Mảng:
    Bộ nhớ được cấp phát cho mảng là một khối bộ nhớ liên tiếp nhau, cá phần tử trong mảng có thể truy cập thông qua chỉ số với độ phức tạp O(1)
    - Ưu điểm:
      + Đơn giản  và dễ sử dụng
      + Truy cập mảng với độ phức tạp là hằng số

     - Nhược điểm
      + Có thể gây lãng phí bộ nhớ nếu sử dụng không hết bộ nhớ xin cấp phát cho mảng
      + Kích thước mảng cố định
      + Bộ nhớ cấp phát theo khối
      +Việc chèn và xóa phần tử khó khăn


    - DSLK
    Bộ nhớ cấp phát cho các Node trong DSLK có thể nằm rải rác trong bộ nhớ

    - Ưu điểmL
    + Có thể mở rộng với độ phức tạp là hằng số
    + Dễ dàng mở rộng và thu hẹp kích thước
    + Có thể cấp phát số lượng lớn các Node tùy vào bộ nhớ

    - Nhược điểm
    + khó khăn trong việc truy cập một phần tử ở vị trí bất kỳ (O(n))
    + Khó khăn trong việc cài đặt
    + Tốn thêm bộ nhớ cho phần tham chiếu

    4. Độ phức tạp của thao tác với DSLK

        1. Truy xuất phần tử: O(n)
        2. Chèn/ Xóa ở đầu  : O(1)
        3. Chèn ở cuối      : O(1)
        4. Xóa ở cuối       : O(1)
        5. Chèn giữa        : O(n)
        6. Xóa giữa         : O(n)

    5. Danh sách liên kết đơn: bao gồm một số các node trong đô mỗi node có con trỏ next tới node tiếp theo nó trong DSLK. Liên kết của node cuối cùng trong DSLK là con trỏ NULL
*/