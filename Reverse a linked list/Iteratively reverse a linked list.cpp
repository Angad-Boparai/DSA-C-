void reverse(Node* head){
	
	
	Node* prev=NULL;
	Node* current=head;
	Node* next_node=head;
	
	while(next_node!=NULL){
		
		next_node=next_node->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	
	head=prev;
}
