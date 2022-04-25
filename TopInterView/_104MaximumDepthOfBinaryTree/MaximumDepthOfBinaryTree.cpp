//
// Created by fk035 on 2022/4/26.
//

#include "MaximumDepthOfBinaryTree.h"

int MaximumDepthOfBinaryTree::maxDepth(MaximumDepthOfBinaryTree::TreeNode *root) {
    if(root == nullptr) return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return (left > right ? left : right) + 1;
}
