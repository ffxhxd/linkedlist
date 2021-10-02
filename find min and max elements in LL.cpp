// WAP to find Minimum and Maximum elements in a linked list
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
	void display(struct Node *p)	//DISPLAYING LINKED LIST
	{
		while(p!=NULL)
			{
				printf("%d ",p->data);
				p=p->next;
			}
			printf("\n\n");
	}

int minimum_element(struct Node *p)
	{
		int x=p->data;
		while(p!=NULL)
			{
				if(p->data < x)
					x=p->data;
				p=p->next;
			}
			return x;
	}
	
int maximum_element(struct Node *p)
	{
		int x=p->data;
		while(p!=NULL)
			{
				if(p->data > x)
					x=p->data;
				p=p->next;
			}
			return x;
	}
	
int main()
	{
		create();
		display(head);
		printf("The minimum element in the linked list is : %d\n",minimum_element(head));
		printf("The maximum element in the linked list is : %d\n",maximum_element(head));
	}
