#include <stdio.h>
#include <stdlib.h>

typedef struct list{
	int data;
	struct list* next;
	
}list;

void printList(list* n);


int main(){
	
	list* head = NULL;
	list* second = NULL;
	list* third = NULL;
	
	head = (list*)malloc(sizeof(list));
	second = (list*)malloc(sizeof(list));
	third = (list*)malloc(sizeof(list));
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	printList(head);
	
	
	return 0;
}

void printList(list* n){
	while(n!=NULL){
		printf(" %d ", n->data);
		n = n->next;
	}
}
