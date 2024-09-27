#include <stdio.h>

int main(){
	unsigned int income;
	printf("Income: ");
	scanf("%u", &income);
	if (income <= 60) printf("Tax: 5%%");
	else if (income > 60 && income <= 120) printf("Tax: 10%%");
	else if (income > 120 && income <= 216) printf("Tax: 15%%");
	else if (income > 216 && income <= 384) printf("Tax: 20%%");
	else if (income > 384 && income <= 624) printf("Tax: 25%%");
	else if (income > 624 && income <= 960) printf("Tax: 30%%");
	else printf("Tax: 35%%");
}
