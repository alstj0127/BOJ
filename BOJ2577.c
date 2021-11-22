#include<stdio.h>

int main(void){
   int num[10]={0};
   int a, tmp, ans=1;
   for(int i=0; i<3; i++){
       scanf("%d", &a);
       ans*=a;
    }
    do{
        tmp=ans%10;
        num[tmp]++;
        ans/=10;
    }while(ans!=0);
   for(int i=0; i<10; i++){
       printf("%d\n", num[i]);
   }
   return 0;
}