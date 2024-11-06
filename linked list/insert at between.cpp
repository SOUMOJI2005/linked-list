// insert thje element at between 
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

struct Node * deletAtIndex(struct Node *head, int data,int index){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
		struct Node * p= head;
		int i =0;
		while(i!=index-1)
		{
			p= p->next;
			i++;
			
		}
		ptr->data=data;
		ptr->next=p->next;
		p->next=ptr;
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
    head = deletAtIndex(head,22, 1);
     printf(" linked list after insertion\n");
   linkedlisttraversal(head);
	return 0;
	
}
