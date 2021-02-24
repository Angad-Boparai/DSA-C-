void Inorder(Node* root, int &k , int &ans){
    
    if(root==NULL){
        return;
    }
    
    Inorder(root->left,k,ans);
    k--;
    if(k==0){
        ans=root->data;
    }

    Inorder(root->right,k,ans);
    
}
// Return the Kth smallest element in the given BST 
int KthSmallestElement(Node *root, int K)
{   
   
    int c=0;
    int ans=-1;
    Inorder(root,K,ans);
    
    return ans;
    
    //add code here.
}
