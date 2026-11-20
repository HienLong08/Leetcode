bool hasPathSum(struct TreeNode* root, int targetSum) {
    if (root == NULL) {
        return false;
    }

    targetSum -= root->val;

    if (root->left == NULL && root->right == NULL) {
        return targetSum == 0;
    }

    return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
}

#Runtime: 1ms - Beats 7.61%
#Memory: 12.19MB - Beats 36.93%