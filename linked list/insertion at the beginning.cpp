// insert the element at beginning
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
struct Node * insertAtFirst(struct Node *head, int data){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr->next = head;
	ptr->data = data;
	return ptr;
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
    head = insertAtFirst(head, 22);
    printf(" linked list after insertion\n");
   linkedlisttraversal(head);
	return 0;
	
}
