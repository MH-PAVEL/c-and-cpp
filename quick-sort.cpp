#include <iostream>

using namespace std;

int main()
{
    int n=8;
    int arr[n] = {2,3,100,26,588,66,90,1}; 
    
   for(int i=0;i<n-1;i++){
       for(int j=i+1; j<n;j++){
           if(arr[i]>arr[j]){
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
   }

    for(int i = 0; i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}