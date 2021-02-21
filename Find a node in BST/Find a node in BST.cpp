
bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Write your code here
    
    if(root==NULL){
        return false;
    }
    
    if(root->data==k){
        return true;
    }
    
    if(root->data<k){
        searchInBST(root->right, k);
    }
    else{
        searchInBST(root->left, k);
    }
}
