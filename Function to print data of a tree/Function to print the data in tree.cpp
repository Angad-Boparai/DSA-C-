#include <vector>
#include <iostream>
using namespace std;



void PrintTree(TreeNode <int>* root){
	
	if(root==NULL){
		return;
	}
	
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data;
	}
	
	for(int j=0;j<root->children.size();j++){
		printTree(root->children[j]->data);
	}
}
