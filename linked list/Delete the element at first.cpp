// delete the element at first
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
struct Node * deletefirst(struct Node * head){
	struct Node * ptr=head;
	head=head->next;
	free(ptr);
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
     head=deletefirst(head);
      printf("After the deletion\n");
    linkedlisttraversal(head);
	return 0;
    	
}
