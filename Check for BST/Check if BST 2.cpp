class isBSTreturn{

public:
	int minimum;
	int maximum;
	bool isbst;
	
	

};

isBSTreturn isBST2(BinaryTreeNode<int>* root){

if(root==NULL){
	
	isBSTreturn obj2;
	obj2.minimum=INT_MAX;
	obj2.maximum=INT_MIN;
	obj2.isbst=true;
}


isBSTreturn left_output=isBSTreturn(root->left);
isBSTreturn right_output=isBSTreturn(root->right);

int minimum1=min(root->data,min(left_output.minimum, right_output.minimum));
int maximum1=max(root->data,max(left_output.maximum, right_output.maximum));

bool isBST=(root->data<=maximum1) and (minimum1<root->data) and left_output.isbst and right_output.isbst ;

	return bool
}

