#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct second{
	int data;
	struct second* next;
}second;

typedef struct list{
	int data;
	struct list* next;
}list;

list *head;
second *s_head;

//void printList(int );

void printList(int);

void createList(int, int);

void appendList(int, int);

int main(){

	char *listName;
//	listName = malloc(10);
	int select;
	int nodes;
	int addnodes;
	int s_list;



	
	//head = (list*)malloc(sizeof(list));
	//second = (list*)malloc(sizeof(list));
	//third = (list*)malloc(sizeof(list));
	list *test;
	
	while(1){
		printf("\n\nSelect an option:\n\n\n");
		printf("[1]Set List\n");
		printf("[2]Print List\n");
		printf("[3]Add to List\n");
		scanf("\n%d", &select);
		if (select == 1)
		{
			printf("Select List:");
			printf("\n[1]Cars\n[2]Bikes\n");
			scanf("%d", &s_list);
			printf("Enter the node number of the new list: ");
			scanf("%d", &nodes);
			createList(s_list, nodes);
		}
		else if (select == 2)
		{
			printf("[SELECT THE LIST TO BE PRINTED]\n");
			printf("\n[1]Cars\n[2]Bikes\n");
			scanf("%d", &s_list);
			printList(s_list);

		}
		else if (select == 3)
		{
			printf("[SELECT THE LIST TO BE APPENDED]\n");
			printf("\n[1]Cars\n[2]Bikes\n");
			scanf("%d", &s_list);
			printf("How many nodes to add? ");
			scanf("%d", &addnodes);
			appendList(s_list, addnodes);

		}

	}



	return 0;
}


void createList(int s_list, int n){

	list *newNode, *temp;
	int data, i;

	if(s_list == 1){
	head = (list*)malloc(sizeof(list));
		if(head==NULL){
		printf("Cannot Allocate Memory.\n");
		exit(0);
	}

	printf("Enter the data of node 1: ");
	scanf("%d", &data);

	head->data = data;
	head->next = NULL;

	temp = head;

	for(i=2;i<=n;i++){
		newNode = (list*)malloc(sizeof(list));

		if(newNode == NULL){
			printf("Cannot Allocate Memory.\n");
			break;
		}

		printf("Enter the data of node %d: ", i);
		scanf("%d",&data);

		newNode->data = data;
		newNode->next = NULL;

		temp->next = newNode;
		temp = temp->next;
	}
		newNode = head;
		/*for(i=1;i<=n;i++)
		{
			printf(" %d ",newNode->data);
			newNode = newNode->next;
		}
		*/
	}

	else if(s_list == 2){
		second *newNode, *temp;
		s_head = (second*)malloc(sizeof(second));
		if(s_head==NULL){
			printf("Cannot Allocate Memory.\n");
			exit(0);
		}

	printf("Enter the data of node 1: ");
	scanf("%d", &data);

	s_head->data = data;
	s_head->next = NULL;

	temp = s_head;

	for(i=2;i<=n;i++){
		newNode = (second*)malloc(sizeof(second));

		if(newNode == NULL){
			printf("Cannot Allocate Memory.\n");
			break;
		}

		printf("Enter the data of node %d: ", i);
		scanf("%d",&data);

		newNode->data = data;
		newNode->next = NULL;

		temp->next = newNode;
		temp = temp->next;
	}
		newNode = s_head;
		/*
		for(i=1;i<=n;i++)
		{
			printf(" %d ",newNode->data);
			newNode = newNode->next;
		}
		*/
	}

	
}


void appendList(int c, int nodes){
	if(c==1){
		int current_node=2;
		int data;
		list *newNode;
		list *temp;

		if(head == NULL){
      	  printf("The list is empty. Please set the list first.\n");
      	  exit(0);
    	}

    		temp = head;
			while(temp->next != NULL){
				temp = temp->next;
				current_node++;
			}

		for(int i=1;i<=nodes;i++){
			newNode = (list*)malloc(sizeof(list));
			//printf("Current Node: %d, current data: %d\n", current_node, newNode->data);
			printf("Enter data for node %d: ", current_node);
			scanf("%d",&data);
			newNode->data = data;
			newNode->next = NULL;
			current_node++;


			temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newNode;

			
		}



	}

	if(c==2){
		int current_node=2;
		int data;
		second *newNode;
		second *temp;

		if(s_head == NULL){
      	  printf("The list is empty. Please set the list first.\n");
      	  exit(0);
    	}

    		temp = s_head;
			while(temp->next != NULL){
				temp = temp->next;
				current_node++;
			}

		for(int i=1;i<=nodes;i++){
			newNode = (second*)malloc(sizeof(second));
			//printf("Current Node: %d, current data: %d\n", current_node, newNode->data);
			printf("Enter data for node %d: ", current_node);
			scanf("%d",&data);
			newNode->data = data;
			newNode->next = NULL;
			current_node++;


			temp = s_head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newNode;

			
		}



	}
}


void printList(int c){
	if(c == 1){
		list *temp;
		temp = head;
		printf("[Cars]: ");
		while(temp!=NULL){
			printf(" %d", temp->data);
			temp = temp->next;
		}
	}
	else if(c == 2){
		second *temp;
		temp = s_head;
		printf("[Bikes]: ");
		while(temp!=NULL){
			printf(" %d ", temp->data);
			temp = temp->next;
		}
	}
	else{
		printf("Incorrect Input\n");
		exit(0);
	}
	//head = (list*)malloc(sizeof(list));

}