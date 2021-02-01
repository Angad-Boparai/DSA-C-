void reverse(Node* head){
	

if(head==NULL || head->next==NULL){
	return head;
}


	Node* temp=reverse(head->next);
	
	Node* temp1=temp;
	while(temp1->next!=NULL){
		
		temp1=temp1->next;
		
	}
	
	temp1->next=head;
	head->next=NULL;

}
