//
// Created by dong Zhang on 12/24/17.
//
#include <iostream>
#include <queue>

using namespace std;
const int INF=1000000;
const int N=100;
double g[N][N];//景点地图邻接矩阵
int bestx[N];//记录当前最优路径
double bestl;//当前最优路径长度
int n,m;//景点个数n，边数m

struct Node{//定义结点，记录当前结点的解信息
    double cl;//当前已走过的路径长度
    int id;//景点序号
    int x[N];//记录当前路径
    Node(){}
    Node(double _cl,int _id){
        cl=_cl;
        id=_id;
    }
};

bool operator < (const Node &a, const Node &b){
    return a.cl>b.cl;
}

double Travelingbfs(){
    int t;//当前处理的景点序号t
    Node livenode,newnode;//定义当前扩展结点livenode，生成新结点newnode
    priority_queue<Node> q;//创建优先队列，优先级为已经走过的路径长度cl,cl值越小，越优先
    newnode=Node(0,2);
    for (int i = 0; i <=n; i++) {
        newnode.x[i]=i;
    }
}