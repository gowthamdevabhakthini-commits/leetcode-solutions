/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int leftmax(struct TreeNode* root){
    if(root->left != NULL){
        root = root->left;
    }
    while (root->right != NULL){
        root = root->right;
    }
    return root->val;
}
int rightmin(struct TreeNode* root){
    if(root->right != NULL){
        root = root->right;
    }
    while (root->left != NULL){
        root = root->left;
    }
    return root->val;
}
bool isValidBST(struct TreeNode* root) {
    if(root == NULL) return 1;
    if((root->left == NULL)&&(root->right == NULL)) return 1;
    if(((root->left != NULL)&&(leftmax(root) >= root->val))||((root->right != NULL)&&(rightmin(root) <= root->val))) return 0;

    return ((isValidBST(root->left))&&(isValidBST(root->right)));
}