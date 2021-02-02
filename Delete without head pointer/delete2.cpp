void delete(Node* node){
	
	
	node->data=node->next->data;
	node->next=node->next->next;
}
