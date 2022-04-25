//
// Created by fk035 on 2022/4/26.
//

#include "SymmetricTree.h"

bool SymmetricTree::isSymmetric(SymmetricTree::TreeNode *root) {
    if(root == nullptr) return true;
    return NodeCompare(root->left, root->right) && NodeCompare(root->right, root->left);
}

bool SymmetricTree::NodeCompare(SymmetricTree::TreeNode *left, SymmetricTree::TreeNode *right) {
    if(left == nullptr || right == nullptr)
        return left == right;
    if(left->val != right->val)
        return false;
    return NodeCompare(left->left, right->right) && NodeCompare(left->right, right->left);
}
