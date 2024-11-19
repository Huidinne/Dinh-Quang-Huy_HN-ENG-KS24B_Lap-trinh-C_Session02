#include <stdio.h>
 int main(){
 	const float PI = 3.14;
 	int radius;
 	printf("Nhap ban kinh: ");
 	scanf("%d", &radius);
 	
 	float perimeter = radius * 2 * PI;
 	
 	float acreage= radius * radius * PI;
 	
 	printf("Chu vi hinh tron la:%.2f\n", perimeter);
 	printf("Dien tich hinh tron la:%.2f\n", acreage);
 	
return 0;

 }
