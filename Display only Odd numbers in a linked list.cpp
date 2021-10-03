//Print only odd Numbers in a linked list
//Fahad CSE-19-42

#include<stdio.h>
#include<stdlib.h>

struct Node
	{
		int data;
		struct Node *next;
	}*head=NULL;
	
int create()
	{
		int n;  	
		printf("Enter the number of Nodes : ");
		scanf("%d",&n);
		printf("\n");
		struct Node *temp,*tail;
		for(int i=0;i<n;i++)	
			{
				temp=(struct Node *)malloc(sizeof(struct Node));
				printf("Enter data for Node %d :",i+1);
				scanf("%d",&temp->data);
				temp->next=NULL;
				if(head==NULL)
					{
						head=temp;
						tail=temp;
					}
				else
					{
						tail->next=temp;
						tail=temp;
					}
					
			}
			temp->next=NULL;
			
	}
	
void display(struct Node *p)
	{
		while(p!=NULL)
			{
				printf("%d ",p->data);
				p=p->next;
			}
			printf("\n\n");
	}

void print_odd(struct Node *p)
	{
		printf("\nODD values from the above linked list are :\n");
		while(p!=NULL)
			{
				if(p->data%2!=0)
					{
						printf("%d ",p->data);
					}
					p=p->next;
			}
	}

int main()
	{
		create();
		display(head);
		print_odd(head);
	}
