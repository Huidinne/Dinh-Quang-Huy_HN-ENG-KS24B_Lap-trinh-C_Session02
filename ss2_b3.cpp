#include <stdio.h>
 int main(){
 	int num1,num2;
 	printf("Hay nhap so dau tien: ");
 	scanf("%d", &num1);
 	
 	printf("Hay nhap so thu hai: ");
 	scanf("%d", &num2);
 	
 	int tong = num1 + num2;
 	
 	int hieu = num1 - num2;
 	
 	int tich = num1 * num2;
 	
 	int thuong = num1 / num2;
 	printf("Tong cua hai so la: %d\n",tong);
 	printf("Hieu cua hai so la: %d\n",hieu);
 	printf("Tich cua hai so la: %d\n",tich);
 	printf("Thuong cua hai so la: %d\n",thuong);
 	
 return 0;	
 }
