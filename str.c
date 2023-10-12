
#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    char str[n][30];

    for(int i=0; i<n;i++){
        scanf("%s",&str[i][i]);
    }

    for(int i=0; i<n;i++){
        printf("Hello, %s\n",&str[i][i]);
    }

}
