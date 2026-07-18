/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p == NULL && q == NULL){
        return TRUE;
    }
    if(((p == NULL) && (q != NULL)) ||((p != NULL) && (q == NULL))){
        return FALSE;
    }
    if(p->val != q->val){
         return FALSE;
    }
    if(((p->left != NULL) && (q->left == NULL)) || ((p->left == NULL)&&(q->left != NULL))){
        return FALSE;
    }
    if(p->left != NULL && q->left != NULL){
    if(isSameTree(p->left,q->left) == FALSE){
        return FALSE;
    }
    }
    if(((p->right != NULL) && (q->right == NULL)) || ((p->right == NULL)&&(q->right != NULL))){
        return FALSE;
    }
    if(p->right != NULL && q->right != NULL){
    if(isSameTree(p->right,q->right) == FALSE){
        return FALSE;
    }
    }

    return TRUE;
}