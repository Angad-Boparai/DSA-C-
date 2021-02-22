bool checkBST(BinaryTreeNode<int*> root, int min1=INT_MIN, int max1=INT_MAX){
	
	if(root==NULL){
		return true;
	}
	
	
	bool left=checkBST(root->left,min1,root->data -1);
	bool right=checkBST(root->right,root->data,max1);
	
	
	return (left and right);
	
}
