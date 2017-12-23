//
// Created by dong Zhang on 12/23/17.
//
#include <iostream>
using namespace std;

int Partition(int r[],int low,int high){
    int i=low,j=high,privot=r[low];
    while (i<j){
        while (i<j&& r[j]>privot) j--;
        if(i<j){
            swap(r[i++],r[j]);
        }
        while(i<j && r[i]<=privot) i++;
        if (i<j){
            swap(r[i],r[j--]);
        }
    }
    return i;
}
void QuickSort(int R[],int low,int high){
    int mid;
    if(low<high){
        mid=Partition(R,low,high);
        QuickSort(R,low,mid-1);
        QuickSort(R,mid+1,high);
    }
}
int main(){
    int nums[]={30,24,5,58,18,36,12,42,39};
    QuickSort(nums,0,8);
    for (int i = 0; i < 9; i++) {
        cout<<nums[i]<<" ";
    }
}
