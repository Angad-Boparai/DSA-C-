

void Inorder( node* root, node* prev){
	
	
	if(root==NULL){
		return;
	}
	
	Inorder(root->left, prev);
	
	if(prev){
		prev->next=root;
	}
	
	prev=root;
	
	Inorder(root->right,prev);
	s
}


void populateNext(struct node* root){
	
		if(root==NULL){
			return;
		}
		
		node* prev=NULL;
		
		inOrder(root,prev);
}
