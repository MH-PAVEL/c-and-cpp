#include<stdio.h>

int main(void){
    int number_of_input;

    scanf("%d",&number_of_input);
    int inputs[number_of_input];

    for(int i=0; i<number_of_input;i++){
        scanf("%d",&inputs[i]);
    }



    int count[101] = {0};
    for(int i=0; i<number_of_input;i++){
            int x = inputs[i];
            count[x]++;
    }

    for(int i=1; i<=101;i++){
//        printf("%d --> %d\n",i,count[i]);
        if(count[i]>0) printf("%d --> %d\n",i,count[i]);
    }
}
