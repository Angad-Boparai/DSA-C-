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

/*
 if(!hasData(root,a) and hasData(root,b)){
        return b;
    }
    if(hasData(root,a) and !hasData(root,b)){
        return a;
    }
    
    if(!hasData(root,a) and !hasData(root,b)){
        return -1;
    }
    
    
    
}

*/
bool hasData(BinaryTreeNode<int>* root,int data){
    
    if(root==NULL){
        return 0;
    }
    if(root->data==data){
        return 1;
    }
    if(root->data<data){
        return hasData(root->right,data);
    }
    
    if(root->data>data){
        return hasData(root->left,data);
    }
}
int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    // Write your code here
	if(!root){
        return -1;
    }    
    if(root->data==a){
        return a;
    }
    if(root->data==b){
        return b;
    }
    int temp1=getLCA(root->left,a,b);
    int temp2=getLCA(root->right,a,b);
    
    if(temp1!=-1 and temp2!=-1){
        return root->data;
    }
     if(temp1!=-1 and temp2==-1){
        return temp1;
    }
     if(temp2!=-1 and temp1==-1){
        return temp2;
    }
    
}
