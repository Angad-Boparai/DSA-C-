
void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
     
	queue<BinaryTreeNode<int>*> pendingNodes;
    
    BinaryTreeNode<int>* temp=NULL;
    pendingNodes.push(root);
    pendingNodes.push(temp);

    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* current=pendingNodes.front();
        
        pendingNodes.pop();
        
        if(current==NULL){
            cout<<endl;
            pendingNodes.push(temp);
        }
    	else{
        cout<<current->data;
        
        if(current->left!=NULL){
         pendingNodes.push(current->left);   
        }
        if(current->right!=NULL){
         pendingNodes.push(current->right);   
        }
        }
}

}
