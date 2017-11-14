//
// Created by dong Zhang on 11/1/17.
//

#include <iostream>
#include <vector>

using namespace std;


class Solution{
public:
    double findMedianSortedArrays(const vector<int>& A, const vector<int>& B){
        const int m=A.size();
        const int n=B.size();
        int total=m+n;
        if(total & 0x1)
            return 0;
    }

private:
    static int find_kth(std::vector<int>::const_iterator A,int m,std::vector<int>::const_iterator B,int n,int k){
        //always assume that m is equal or smaller than n
        if(m>n) return find_kth(B,n,A,m,k);
        if (m==0) return *(B+k-1);
        if (k==1) return min(*A,*B);

        //divide k into two parts
        int ia=min(k/2,m),ib=k-ia;
        if (*(A+ia-1) < *(B+ib-1))
            return find_kth(A+ia-1,m-ia,B,n,k-ia);
        else if (*(A+ia-1) > *(B+ib-1))
            return find_kth(A,m,B+ib,n-ib,k-ib);
        else
            return A[ia-1];
    }
};

class SubSolution : Solution{
public:


};

int main() {
    cout << "Hello World"<<endl;
    Solution s;
    vector<int> A ={1,2};
    vector<int> B= {3,4};
    cout<<s.findMedianSortedArrays(A,B);

    return 0;
}
