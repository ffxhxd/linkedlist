// INSERTING INTO lINKED lIST
//Fahad CSE-19-42.

#include<stdio.h>
#include<stdlib.h>

struct Node
	{
		int data;
		struct Node *next;
	}*head=NULL;
	
int create()
	{
		int n;  	//No. of Nodes
		printf("Enter the number of Nodes : ");
		scanf("%d",&n);
		printf("\n");
		struct Node *temp,*tail;
		for(int i=0;i<n;i++)	//Creating n number of nodes
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
	
int insert_after(struct Node *p,int index,int value)
		{
			int count=1;
			struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
			while(count<index)
				{
					p=p->next;
					count++;
				}
				temp->next=p->next;
				p->next=temp;
				temp->data=value;
		}

int insert_before(struct Node *p,int index,int value)
		{
			int count=1;
			struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
			while(count<index-1)
				{
					p=p->next;
					count++;
				}
				temp->next=p->next;
				p->next=temp;
				temp->data=value;
		}
int display()	//DISPLAYING LINKED LIST
	{
		while(head!=NULL)
			{
				printf("%d\t",head->data);
				head=head->next;
			}
			printf("\n\n");
	}

int main()
	{
		create();
		printf("\n.....................\n");
	while(1)
			{
				int ch;
				printf("Enter 1 for inserting after the index\n");
				printf("Enter 2 for inserting before the index\n");
				printf("Enter 0 to exit\n");
				printf("......................\n");
				printf("Enter your choice :");
				scanf("%d",&ch);
				printf("\n");
				if(ch==1)
					{
						insert_after(head,3,10);	
						display();
					}
				else if(ch==2)
					{
					insert_before(head,3,10);
					display();	
					}
				else
					{
						break;
					}
			}	
			
	}
