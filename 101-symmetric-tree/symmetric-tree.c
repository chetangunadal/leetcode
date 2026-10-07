/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 bool s(struct TreeNode*l,struct TreeNode*r);
bool isSymmetric(struct TreeNode* root) {
    return root==NULL ||s(root->left,root->right);
}

bool s(struct TreeNode*l,struct TreeNode*r){
    if(l==NULL && r==NULL)
    return true;
    if(l==NULL || r==NULL ||l->val!=r->val)
    return false;
    return s(l->left,r->right)&&s(l->right,r->left);
}