
void inorder(Node* root,vector<int>&ans){
if(root==NULL)
return;
inorder(root->left,ans);
ans.push_back(root->data);
inorder(root->right,ans);
}
int KthSmallestElement(Node *root, int K)
{ vector<int>v;
inorder(root,v);
if(K<=v.size())
return v[K-1];
else
return -1;
}
