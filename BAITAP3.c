#include <stdio.h>

int main(){
    
    int n,sum = 0;
    printf("yeu cau nguoi dung nhap vao 1 so nguyen duong: ");
    scanf("%d", &n);
    
    if (n <= 0){
        printf("nhap mot so nguyen duong lon hon 0\n");
        return 1;
    }
    
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
    
    return 0;
}