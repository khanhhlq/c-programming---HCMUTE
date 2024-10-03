#include <stdio.h>

int main() {
	int n;
	float tong;
	scanf("%u", &n);
	
	for (int i=1; i<=n; i++){
		tong += 1/n;
	}
	
	printf("%f", tong);
}
