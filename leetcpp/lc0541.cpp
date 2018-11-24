
#include <iostream>
#include "../leetcode/TreeNode.cpp"
using namespace std;

class Solution{
public:
    int minDepth(const TreeNode *root){
        return minDepth(root, false);
    }

private:
    static int minDept(const TreeNode *root,bool hasbrother){
        if(!root) return hasbrother ? INT_MAX : 0;

        return 1+min(minDepth(root->left,root->right != NULL),minDept(root->right,root->left!=NULL));

    }
};