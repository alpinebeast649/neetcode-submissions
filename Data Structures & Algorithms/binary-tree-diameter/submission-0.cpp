class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        depth(root, diameter);
        return diameter;
    }

    int depth(TreeNode* root, int& diameter) {
        if(root == NULL) {
            return 0;
        }

        int leftDepth = depth(root->left, diameter);
        int rightDepth = depth(root->right, diameter);

        diameter = max(diameter, leftDepth + rightDepth);

        return 1 + max(leftDepth, rightDepth);
    }
};