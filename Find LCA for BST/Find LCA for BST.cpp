bool hasData(int data, BinaryTreeNode<int>* root){

	if(root==NULL){
		return 0;
	}
	
	if(root->data==data){
		return 1;
	}
	
	if(root->data>data){
		return hasData(data,root->left);
	}
	
	if(root->data>data){
		return hasData(data,root->left);
	}
}



int getLCA(BinaryTreeNode<int>* root , int val1 , int val2){
    // Write your code here
    if(hasData(val1,root) and !hasData(val2,root)){
        return val1;
    }
    if(!hasData(val1,root) and hasData(val2,root)){
        return val2;
    }
    if(!hasData(val1,root) and !hasData(val2,root)){
        return -1;
    }
        
        
        
    if(root->data< val1 and root->data<val2){
        int temp=getLCA(root->right,val1,val2);
        return temp;
    }
    else if(root->data>val1 and root->data>val2){
        int temp=getLCA(root->left,val1,val2);
        return temp;
    }
    else{
        return root->data;
    }
}
