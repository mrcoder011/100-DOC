#include <iostream>
#include <queue>
using namespace std;
void sliding(int *arr , int n , int k){
    deque<int > dq;
    // base case 
    for (int i=0; i<k; i++){

        int element = arr[i];
       if(element < 0){
dq.push_back(i);

       }
        
    }
    // process remaing windows -> removal and addition ;
    for (int i=k; i<n; i++){
        if (dq.empty()){
            cout << "0" << endl;
        }
        else{
            cout << arr[dq.front()] << endl;
        }
         
        
        cout << dq.front()<< endl;
        // remove element which are not part of window
        // REMOVAL 
        if(i - dq.front() >= k)
    dq.pop_front();
}

        //ADDITION 
        if (arr[i]< 0){
            dq.push_back(i);
        }
        
        
    }
if (dq.empty()){
    cout << "0" << endl;
}
else{
    cout << arr[dq.front()] << endl;
}
 

int main (){
   int arr[] = {2, -5, 4, -1, -2, 0, 5}; 
   int size = 7;
   int k = 3;
    sliding(arr, size, k);
    return 0;


}