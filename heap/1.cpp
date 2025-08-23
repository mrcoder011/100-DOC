#include <iostream>
using namespace std;    

class heap{
    public:
    int *arr;
    int size;
    int capacity;

    heap(int capacity){
        this->capacity=capacity;
        arr=new int[capacity];
        this->size = 0;
        
      
    }
    void insert(int val){
        if (size== capacity){
            cout<<"heap is full"<<endl;
            return;
        }
        size++;
        int index = size;
        arr[index]=val;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }


    }

};
int main() {
    heap h(5);
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6); // This should print "heap is full"
    
    // Print the heap array
    cout << "Heap elements: ";
    for (int i = 1; i <= h.size; i++) {
        cout << h.arr[i] << " ";
    }
    cout << endl;

    return 0;
}