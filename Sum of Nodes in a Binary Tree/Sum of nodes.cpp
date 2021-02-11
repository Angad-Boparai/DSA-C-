/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

int getSum(BinaryTreeNode<int>* root) {
    // Write your code here
    
    if(root==NULL){
        return 0;
    }
    
    int sum3=root->data;
    int sum1=getSum(root->left);
    int sum2=getSum(root->right);
    
    return sum1+sum2+sum3;
}
