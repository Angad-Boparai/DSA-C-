#include <queue>
#include <stacks>
void reverseOrderLevel(BinaryTreeNode<int>* root){
	
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	stack<int> new_stack;
	
	while(pendingNodes.size()!=0){
		
		BinaryTreeNode<int>* current=pendingNodes.front();
		new_stack.push(current->data);
		pendingNodes.pop();
		
		if(current->right!=NULL){
			pendingNodes.push(current->right);
		}
		
		if(current->left!=NULL){
			pendingNodes.push(current->left);
		}
	}
	
	while(new_stack.size()!=0){
		cout<<new_stack.top();
		new_stack.pop();
	}
}
