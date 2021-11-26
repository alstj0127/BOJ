#include <stdio.h>

int main(){
	int num = 0, sum = 0;
	while(scanf("%d", &num) != EOF) sum += num;
	printf("%d", sum);
    return 0;
}