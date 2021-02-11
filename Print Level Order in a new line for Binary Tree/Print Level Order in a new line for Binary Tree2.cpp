
void printLevelWise(BinaryTreeNode<int> *root) {

    if(root==NULL){
        return;
    }
    
    queue<BinaryTreeNode<int>*> q1;
    queue<BinaryTreeNode<int>*> q2;
    
    q1.push(root);
    
    while(q1.size()!=0 || q2.size()!=0){
        
        while(q1.size()!=0){
            
            if(q1.front()->left!=NULL){
                q2.push(q1.front()->left);
            }
            
            if(q1.front()->right!=NULL){
                q2.push(q1.front()->right);
            }
            
        	cout<<q1.front()->data<<" ";
        	
            q1.pop();
        }
        
        cout<<endl;
        while(q2.size()!=0){
            
            if(q2.front()->left!=NULL){
                q1.push(q2.front()->left);
            }
            
            if(q2.front()->right!=NULL){
                q1.push(q2.front()->right);
            }
            
        	cout<<q2.front()->data<<" ";
        	
            q2.pop();
        }
        cout<<endl;
        
    }

}
