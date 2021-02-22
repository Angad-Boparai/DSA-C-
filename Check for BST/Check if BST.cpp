

int maximum(BinaryTreeNode<int> *root) {

	if(root==NULL){
		return INT_MIN;
	}	
	
	return max(root->data,max(maximum(root->left),maximum(root->right)));
}



int minimum(BinaryTreeNode<int> *root) {

	if(root==NULL){
		return INT_MAX;
	}	
	
	return min(root->data,min(minimum(root->left),minimum(root->right)));
}


bool isBST(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
    	return true;
    }
    
 int max_left=maximum(root->left);
 int min_right=minimum(root->right);
 
 bool output= (max_left<root->data) and (min_right>=root->right) and isBST(root->left) and isBST(root->right);
 	
 	return output;
}
