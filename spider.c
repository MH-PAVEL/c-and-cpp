

#include <stdio.h>

int main() {
    int n,t;
    scanf("%d %d", &n,&t);
    int array[n];
    for(int i=0; i<n;i++){
         scanf("%d", &array[i]);
    }
   while(t--){
     int a,b;
        int sum =0;
         scanf("%d %d", &a,&b);
        for(int i=a-1; i<b;i++){
         sum+= array[i];
    }
    printf("%d\n",sum);
   }

    return 0;
}
