//
// Created by dong Zhang on 12/23/17.
//
#include <iostream>
using namespace std;

const int N=100;
int a[N][N];//图用邻接矩阵表示
bool x[N];//是否将第i个节点加入团中
bool bestx[N];//记录最优解
int bestn;//记录最优值
int cn;//当前已放入团中的节点数量
int n,m;//n为途中节点数，m为途中边数

bool Place(int t){//判断是否可以把结点加入团中
    bool ok=true;
    for (int j = 0; j < t; j++) {
        if (x[j]&&a[t][j]==0){
            ok= false;
            break;
        }
    }
    return ok;
}

void Backtrack(int t){
    if (t>n){
        for (int i = 1; i <=n; i++)
            bestx[i]=x[i];
        bestn=cn;
        return;
    }
    if(Place(t)){
        x[t]=1;
        cn++;
        Backtrack(t+1);
        cn--;
    }
    if(cn+n-t>bestn){
        x[t]=0;
        Backtrack(t+1);
    }
}

