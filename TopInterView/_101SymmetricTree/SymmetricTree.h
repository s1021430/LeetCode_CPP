//
// Created by fk035 on 2022/4/26.
//

#ifndef LEETCODE_SYMMETRICTREE_H
#define LEETCODE_SYMMETRICTREE_H


class SymmetricTree {
public:
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
    bool isSymmetric(TreeNode* root);
private:
    bool NodeCompare(TreeNode *left, TreeNode *right);
};


#endif //LEETCODE_SYMMETRICTREE_H
