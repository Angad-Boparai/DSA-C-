void rightview(Node* root){
	
	if(root==NULL){
		return;
	}
	
	queue<Node*> q1;
	q1.push(root);
	
	
	while(q1.size()!=0){
		
		int n=q1.size();
		
		for(int i=1;i<=n;i++){
			
			Node* current=q1.front();
			
			if(i==n){
				cout<<current->data;
			}
			
			if(current->left!=NULL){
				q1.push(current->left);
			}
			
			
			if(current->right!=NULL){
				q1.push(current->right);
			}
		}
	}
}
