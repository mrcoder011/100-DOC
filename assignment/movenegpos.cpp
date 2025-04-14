#include <iostream>
using namespace std;
void moveallnegleft(int arr[], int n){
    
    int  l = 0;
    int h = n-1;
    while (l <h){
        if(arr[l] < 0){
            l++;
        }
        else if (arr[h] >= 0){
            h--;

        }
        else {
            swap(arr[l], arr[h]);
            l++;
            h--;

        }
    }
}

int main (){
int arr[] = {1,2,-4,-6,7 ,0,34,-8};
int n = sizeof(arr)/sizeof(int);
moveallnegleft(arr, n);
for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
cout << endl;
return 0;
 
}