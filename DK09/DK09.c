#include <stdio.h>
int main(){
	long long int year; scanf("%lld", &year);
	if (year <= 0 || year > 100000) printf("INVALID");
	else if ((year % 4 == 0 && year % 100 !=0) || year % 400 == 0) printf("YES");
	else printf("NO");
}

