#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s,int e,int mid){
  //create left and right arrays
  int leftLength = mid-s+1;
  int rightLength = e - mid;
  
  int *leftArr = new int[leftLength];
  int *rightArr = new int[rightLength];

  //fill or copy the left and right arrays 
  ///copy original array -> values
  //original array ka starting index
  int index = s;
  //copying into left array
  for(int i=0; i<leftLength; i++) {
    leftArr[i] = arr[index];
    index++;
  }
  //copying into right array
  index = mid+1;
  for(int i=0; i<rightLength; i++) {
    rightArr[i] = arr[index];
    index++;
  }

  //merge logic
  int i = 0;
  int j = 0;
  int mainArrayIndex = s;

  while(i < leftLength && j < rightLength) {
    if(leftArr[i] < rightArr[j]) {
      arr[mainArrayIndex] = leftArr[i];
      i++;
      mainArrayIndex++;
    }
    else {
      arr[mainArrayIndex] = rightArr[j];
      j++;
      mainArrayIndex++;
    }
  }

  ///I have to handle the 2 cases discussed above in Merge 2 sorted arrays wala question

  while(i < leftLength) {
     arr[mainArrayIndex] = leftArr[i];
      i++;
      mainArrayIndex++;
  }

  while(j < rightLength) {
    arr[mainArrayIndex] = rightArr[j];
      j++;
      mainArrayIndex++;
  }

  //delete heap memory
  delete []leftArr;
  delete []rightArr;  
}



void mergesort(int arr[],int s,int e){
    //base case 
    if(s>=e) return; 

    int mid = (s+e)/2;

    // left part to solve with recursion
    mergesort(arr,s,mid);

    // right part to solve with recursion
    mergesort(arr,mid+1,e);

    //merge both parts
    merge(arr,s,e,mid);

}

int main(){
    int arr[] = {10,80,100,90,50,40,20,30};
    int size = 8;
    int s = 0;
    int e = size - 1;

    mergesort(arr,s,e);

    for(int i=0;i<size;i++){ 
        cout<<arr[i]<<" ";
    }
    



    return 0;

}