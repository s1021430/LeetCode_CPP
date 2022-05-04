//
// Created by fk035 on 2022/5/4.
//

#ifndef LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H
#define LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H
#include <vector>
using namespace std;

class ConvertSortedArraytoBinarySearchTree {
public:
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
    TreeNode* ToBST(vector<int>& nums, int left,int right);
    TreeNode* sortedArrayToBST(vector<int>& nums);
};


#endif //LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H
