#include<iostream>
using namespace std;

class Heap{
public:
    int *arr;
    int capacity;
    int index;

    Heap(int n){
        this->capacity = n;
        arr = new int[n];
        index = 0;
    }

    void printHeap(){
        for(int i=0;i<capacity;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void insert(int val){
        if(index == capacity - 1){
            cout<<"overflow"<<endl;
            return;
        }
        index++;
        arr[index] = val;

        int i = index;
        
        while (i > 1)
        {
            int parentIndex = i/2;

            if(arr[parentIndex] < arr[i]){
                swap(arr[parentIndex],arr[i]);
                i = parentIndex;
            }
            else{
                break;
            }
            /* code */
        }
        

    }

    void deletefromHeap(){
        swap(arr[1],arr[index]);
        index--;
        // Heapify(arr,index,1);

    }
    // void Heapify(int *arr, int n,int currIndex){
    //     int i = currIndex;
    //     int leftindex = 2*i;
    //     int rightindex = 2*i +1;

    //     int largestindex = i;
    //     if(leftindex < n && arr[leftindex] > arr[largestindex]){
    //         largestindex = leftindex;


    //     }
    //     if(rightindex < n && arr[rightindex] > arr[largestindex]){
    //         largestindex = rightindex;
    //     }

    //     if(largestindex != i){
    //         swap(arr[i],arr[largestindex]);
    //         i = largestindex;
    //         Heapify(arr,n,i);

    //     }

    // }
};

void Heapify(int *arr, int n,int currIndex){
    int i = currIndex;
    int leftindex = 2*i;
    int rightindex = 2*i +1;

    int largestindex = i;
    if(leftindex < n && arr[leftindex] > arr[largestindex]){
        largestindex = leftindex;


    }
    if(rightindex < n && arr[rightindex] > arr[largestindex]){
        largestindex = rightindex;
    }

    if(largestindex != i){
        swap(arr[i],arr[largestindex]);
        i = largestindex;
        Heapify(arr,n,i);

    }

}

void BuildHeap(int *arr,int n){
    for(int i=n/2;i>0;i--){
        Heapify(arr,n,i);
    }
}

void heapsort(int* arr,int n){
    
    while(n>1){
        swap(arr[1],arr[n-1]);
        n--;
        Heapify(arr,n,1);

        cout<<"printing inside heap sort:"<<endl;

    }
}

int main(){
    Heap pq(6);
    // 50 40 20 10 30
    int arr[] = {-1,10,20,30,40,50};
    int n = 6;
    BuildHeap(arr,n);
    cout<<endl;
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // pq.insert(10);
    // pq.printHeap();
    // pq.insert(20);
    // pq.printHeap();
    // pq.insert(30);
    // pq.printHeap();
    // pq.insert(40);
    // pq.printHeap();
    // pq.insert(50);
    // pq.printHeap();

    // pq.deletefromHeap();
    // pq.printHeap();
    // pq.deletefromHeap();
    // pq.printHeap(); 
    // pq.deletefromHeap();
    // pq.printHeap(); 


    return 0;

}