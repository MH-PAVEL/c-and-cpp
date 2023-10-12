#include<stdio.h>

int main(void){
    int test;
    scanf("%d",&test);
    while(test--)
        {
        int x,y;
        scanf("%d %d",&x,&y);
        (x>y) ? printf("%d\n",(x-y)):printf("%d\n",(y-x));
        }
}
#include<stdio.h>

int main(void){
    int test;
    scanf("%d",&test);
    while(test--)
        {
        int x,y;
        scanf("%d%d",&x, &y);
        (x==y && x>0) ? printf("YES\n"):printf("NO\n");
        }
}
#include<stdio.h>

int main(void){
    int test;
    scanf("%d",&test);
    while(test--)
        {
        int w,x,y,z;
        scanf("%d%d%d%d",&w, &x, &y, &z);
        if(x-w<y*z){
            printf("overFlow\n");
        }
        else if(x-w==y*z){
            printf("filled\n");
        }
        else{
            printf("unfilled\n");
        }
        }
}
#include<stdio.h>

int main(void){
    int test;
    scanf("%d",&test);
    while(test--)
        {
        int x,y,z;
        scanf("%d%d%d",&x, &y, &z);
        (x>y+z || y>x+z || z>x+y) ? printf("YES\n"):printf("NO\n");
        }
}

































