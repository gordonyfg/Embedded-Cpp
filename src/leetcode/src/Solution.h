#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <iostream>
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target);
    bool findTarget(TreeNode *root, int k);
    void inorderTraversal(TreeNode *root, vector<int>& listInordertraversal);
};

#endif // LEETCODE_SOLUTION_H
