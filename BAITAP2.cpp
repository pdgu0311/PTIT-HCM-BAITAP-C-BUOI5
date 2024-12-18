#include <stdio.h>

int main(){
	int n, i = 10;
	printf("vui long nhap vo 1 so de dung ket qua\n");

    do{
    	printf("nhap vao 1 so ");
	    scanf("%d",&n);
    	if(n != i){
    		printf("vui long nhap lai\n");
		}
	
	}while(n != i);
		printf("end");
	
	return 0;
}
