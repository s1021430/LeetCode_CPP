//
// Created by fk035 on 2022/5/4.
//

#include "ConvertSortedArraytoBinarySearchTree.h"

ConvertSortedArraytoBinarySearchTree::TreeNode *
ConvertSortedArraytoBinarySearchTree::ToBST(vector<int> &nums, int left, int right) {
    if (left > right)
        return nullptr;

    int mid = left + (right - left) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = ToBST(nums, left, mid - 1);
    root->right = ToBST(nums, mid + 1, right);

    return root;
}

ConvertSortedArraytoBinarySearchTree::TreeNode *
ConvertSortedArraytoBinarySearchTree::sortedArrayToBST(vector<int> &nums) {
    if(nums.empty()) return nullptr;
    return ToBST(nums, 0, nums.size() - 1);
}
