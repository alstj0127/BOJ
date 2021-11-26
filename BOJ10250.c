#include<stdio.h>

int main(void)
{
    int T, H, W, N;
    int F, R; 
	scanf("%d", &T);
	while(T--) {
        scanf("%d %d %d", &H, &W, &N); //H:층 W:방 N:손님순서
		if(N%H==0){
			F = H;
			R = N/H;
		}
        else{
			F = N%H;
			R = N/H+1;
		} 
		printf("%d\n", F*100+R);
    }
	return 0;
}