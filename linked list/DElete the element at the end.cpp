// delete the element at the end
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
struct Node * deleteAtend(struct Node * head){
	struct Node * p=head;
		struct Node * q=head->next;
while(q->next!=NULL){

		p=p->next;
		q=q->next;
	}
p->next=NULL;
free(q);
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
    printf("Before the deletion\n");
    linkedlisttraversal(head);
     head=deleteAtend(head);
      printf("After the deletion\n");
    linkedlisttraversal(head);
	return 0;
    	
}
