void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
	
	
	if(root==NULL){
		return;
	}
	// if key matches with roots data
	if(root->data==key){
		
		if(root->left!=NULL){
		
		Node* temp=root->left;
	
		while(temp->right!=NULL){
			
			temp=temp->right;
		}
		
		pre=temp;
	}
		
		if(root->right!=NULL){
			Node* temp1=root->right;
		
		
		while(temp1->left!=NULL){
			temp1=temp1->left;
			}
		 suc=temp1;		
		}
		return;
	}
	
	// if key is on the left side
	
	if (root->data>key){
		findPreSuc(root->left,pre,suc,key);
	}
		// if key is on the right side

	if (root->data<key){
		findPreSuc(root->right,pre,suc,key);
	}
	
}
