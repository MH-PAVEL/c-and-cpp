
#include<stdio.h>
#include <string.h>

int main(void){
    int n,xn,yn;
    xn=0;
    yn=0;
    scanf("%d",&n);
    char str[n][11];
    char x[11],y[11];

   for(int i=0; i<n;i++){
       scanf("%s",&str[i]);
   }
    x[11] = str[0];
   for(int i=0; i<n;i++){
        if(strcmp(x, str[i]);){
           printf("fuck");
        }
       printf("%s\n",str[i]);
   }

}
