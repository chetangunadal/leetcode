/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 void inorder(struct TreeNode *root,int *a,int *i)
 {
    if(root==0){
        return;
    }
    inorder(root->left,a,i);
    a[(*i)++]=root->val;
    inorder(root->right,a,i);
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {

   int *a=calloc(100,sizeof(int));
   int i=0;
inorder(root,a,&i);
* returnSize=i;
return a;
}