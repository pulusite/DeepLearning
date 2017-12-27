//
// Created by Eric on 12/26/2017.
//
#include <iostream>
using namespace std;

void Merge(int A[],int low,int mid,int high){
    int *B=new int[high-low+1];
    int i=low,j=mid+1,k=0;
    while (i<mid && j<=high){
        if(A[i]<=A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    while (i<=mid) B[k++]=A[i++];
    while (j<high) B[k++]=A[j++];
    for (int l = low,k=0; l < high; l++) {
        A[l]=B[k++];
    }
}

void MergeSort(int A[],int low,int high){
    if (low<high){
        int mid=(low+high)/2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}

//int main(){
//    int nums[]={3,9,5,1,0,4,8,2,7,3,6};
//    MergeSort(nums,0,9);
//    for (int i = 0; i < 10; ++i) {
//        cout<<nums[i]<<" ";
//    }
//}