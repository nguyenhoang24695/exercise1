#include <stdio.h>
//(Mẹo để dùng kiểu dữ liệu Float cho hàm phép chia bên dưới)
float divi(int a, int b);
//Hàm Nhập 2 số và trả kết quả của các phép tính cộng trừ nhân chia 2 số vừa nhập
//Phần in ra màn hình em chưa biết gộp lại cho ngắn mong thầy giúp đỡ ạ
int main(int a, int b ){
    printf("Nhập số thứ nhất: ");
    scanf("%i", &a);
    printf("Nhập số thứ 2: ");
    scanf("%i", &b);
    printf("Tổng 2 số bạn nhập là: ");
    printf("%i\n",plus(a,b));
    printf("Hiệu 2 số bạn nhập là: ");
    printf("%i\n",minus(a,b));
    printf("Kết quả phép nhân 2 số là: ");
    printf("%i\n",multi(a,b));
    printf("Kết quả phép chia số thứ nhất cho số thứ 2 là: ");
    printf("%.2f",divi(a,b));
    return 0;
}
//Hàm cho phép tính cộng 2 số
int plus(int a, int b){
    return a+b;
}
//Hàm cho phép tính trừ 2 số
int minus(int a,int b){
    return a-b;
}
//Hàm cho phép tính nhân 2 số
int multi(int a, int b){
    return a*b;
}
//Hàm cho phép tính chia số thứ nhất cho số thứ 2
float divi(int a, int b){
    return (float) a/b;
}
//Coded by hoangnvd00536

