#include <stdio.h>

int main() {
	int n;
	float tong;
	scanf("%u", &n);
	
	for (float i=1; i<=n; i++) tong += 1/i;
	
	printf("%f", (float)tong);
}
