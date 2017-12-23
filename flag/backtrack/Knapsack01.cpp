//
// Created by dong Zhang on 12/23/17.
//
#include <iostream>
using namespace std;
#define M 105

int i,j,n,W;//n个物品，W表示购物车的容量
double w[M],v[M];//w[i]表示第i个物品的重量，v[i]表示第i个物品的价值
bool x[M];//x[i]表示第i个物品是否放入购物车
double cw;//当前重量 current weight
double cp;//当前价值 current p
double bestp;//当前最优价值
double bestx[M];//当前最优解

double Bound(int i){//计算上界，即剩余物品总价值
    //剩余物品为第i~n种物品
    int rp=0;
    while (i<=n){
        rp+=v[i];
        i++;
    }
    return cp+rp;
}

void Backtrack(int t){
    if(t>n){//已经到达叶子节点
        for (int j = 0; j <=n; j++) {
            bestx[j]=x[j];//保存当前最优解
        }
        bestp=cp;
        return;
    }
    if(cw+w[t]<=W){
        x[t]=1;
        cw+=w[t];
        cp+=v[t];
        Backtrack(t+1);
        cw-=w[t];
        cp-=v[t];
    }
    if(Bound(t+1)>bestp){
        x[t]=0;
        Backtrack(t+1);
    }
}
