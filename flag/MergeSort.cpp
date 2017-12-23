//
// Created by dong Zhang on 12/23/17.
//
#include <iostream>
using namespace std;

void Merge(int A[],int low,int mid,int high){
    int *B=new int[high-low+1];
    int i=low,j=mid+1,k=0;
    while(i<mid&&j<=high){
        if(A[i]<=A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    while(i<=mid) B[k++]=A[i++];
    while(j<high) B[k++]=A[j++];
    for (int i = low,k=0; i < high; i++) {
        A[i]=B[k++];
    }
}
void MergeSort(int A[],int low, int high){
    if(low<high){
        int mid=(low+high)/2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}

void main(){
    int nums[]={42,15,20,6,8,38,50,12};
    MergeSort(nums,0,9);
    for (int i = 0; i < 8; i++) {
        cout<<nums[i]<<" ";
    }
}
