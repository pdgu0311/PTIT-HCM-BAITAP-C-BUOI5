#include <stdio.h>

int main(){
    
    int n,sum = 0;
    printf("yeu cau nguoi dung nhap so nguyen tu (1 - 10): ");
    scanf("%d", &n);
    
    if(n <= 0){
        printf("yeu cau nhap lon hon 0");
        return 1;
    }
    
    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}