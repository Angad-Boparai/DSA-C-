void reverse(Node* head){
	
	Node* temp=head;
	if(temp==NULL{
		return NULL;
	}
	
	if(temp->next==NULL){
		
		head=temp;
		return temp;
	}	

	Node* temp1=reverse(temp->next);
	temp1->next=temp;
	temp->next=NULL;
	
	return temp;

}
