#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n){
    bool swapped = false;
    for(int i =1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) break;
    }
    return 0;
}

int main()
{
    int n,key;
    cin >> n;
     int arr[n];
    for(int i = 0; i<n;i++){
        cin>> arr[i];
    }
    bubbleSort(arr,n);
    for(int i = 0; i<n;i++){
        cout << arr[i]<< " ";
    }
    cout<< endl;
    return 0;
}
