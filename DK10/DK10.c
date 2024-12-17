#include <stdio.h>
int main(){
	int month, year;
	scanf("%d %d", &month, &year);
	if ((month < 1 || month > 12) || year <= 0) printf("INVALID");
	else if (month == 2){
		if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0)){
			printf("%d", 29);
		} else {
			printf("%d", 28);
		}
	} else if (month == 4 || month == 6 || month == 8 || month == 11){
		printf("%d", 30);
	} else {
		printf("%d", 31);
	}
}
