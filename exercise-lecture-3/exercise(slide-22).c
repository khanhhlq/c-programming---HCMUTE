#include <stdio.h>

int main(){
	int n, avg = 0, i=1;
	printf("Nhap so luong sinh vien: ");	
	scanf("%d", &n);	
	while (n <= 0){
		printf("Gia tri vua nhap khong hop le. Vui long nhap lai so luong sinh vien: ");
		scanf("%d", &n);
	}
	
	i=1;
	
	while(i <= n){
		unsigned int diemsv;
		printf("Nhap diem cua sinh vien thu %d: ", i);
		scanf("%u", &diemsv);
		avg += diemsv;
		i++;
	}
	
	printf("\nDiem trung binh cua sinh vien: %.4f", (float)avg/n);
	
	printf("\n -------------------------- \n");
	
	unsigned int a=1,b;
	while (a <= 10){
		b=1; 
		printf("Bang cuu chuong %u \n", a);
		while (b <= 10){
			printf("%u x %u = %u \n", a, b, a * b);
			b++;
		} 
		a++;
	}
}
