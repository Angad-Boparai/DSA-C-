
int height(BinaryTreeNode<int>* root) {
    // Write our code here
    if(root==NULL){
        return 0;
    }
    
    int height1=height(root->left);
    int height2=height(root->right);
    
    if(height1>height2){
        return height1+1;
    }
    else{
        return height2+1;
    }
}
