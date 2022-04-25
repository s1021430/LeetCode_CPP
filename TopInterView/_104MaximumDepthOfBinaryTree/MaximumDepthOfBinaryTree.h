//
// Created by fk035 on 2022/4/26.
//

#ifndef LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H
#define LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H



class MaximumDepthOfBinaryTree {
public:
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
    int maxDepth(TreeNode* root);
};


#endif //LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H
