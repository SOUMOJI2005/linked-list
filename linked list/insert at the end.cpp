// insert the elemewnt at the end
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
void linkedlisttraversal(struct Node * ptr){
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}

struct Node * insertAtEnd(struct Node *head, int data){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr->data=data;
struct Node * p=head;
		while(p->next!=NULL)
		{
			p=p->next;
			
		}
		p->next=ptr;
		ptr->next=NULL;
	return head;
}
int main(){
		struct Node * head;
		struct Node * second;
		struct Node * third;
    head = (struct Node *) malloc(sizeof(struct Node));
     second = (struct Node *) malloc(sizeof(struct Node));
    third= (struct Node *) malloc(sizeof(struct Node));
    head->data=5;
    head->next=second;
 second->data=12;
    second->next=third;
     third->data=19;
    third->next=NULL;
    printf(" linked list before insertion\n");
    linkedlisttraversal(head);
    head = insertAtEnd(head,22);
    printf(" linked list after insertion\n");
   linkedlisttraversal(head);
	return 0;
	
}
