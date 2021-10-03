//Create a linked list such that each node stores details about student name,roll no and marks
//Fahad CSE-19-42.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
	{
		char Name[100];
		int roll_number;
		float marks;
		struct Node *next;
	}*head=NULL;
	
int create()
	{
		int n; 
		printf("Enter the number of Students : ");
		scanf("%d",&n);
		printf("\n");
		struct Node *temp,*tail;
		for(int i=0;i<n;i++)
			{
				temp=(struct Node *)malloc(sizeof(struct Node));
				printf("Enter name of the student %d : ",i+1);
				scanf("%s",&temp->Name);
				printf("Enter Roll No. : ");
				scanf("%d",&temp->roll_number);
				printf("Enter marks : ");
				scanf("%f",&temp->marks);
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
				printf("\n");
			}
			temp->next=NULL;
			
	}
	
void display(struct Node *p)
	{
		int count=0;
		while(p!=NULL)
			{
				count++;
				printf("Name of the student %d : %s\n",count,p->Name);
				printf("Roll No. : %d\n",p->roll_number);
				printf("Marks : %f\n",p->marks);
				printf("..........................................................");
				printf("\n");
				p=p->next;
			}
	}

int main()
	{
		create();
		display(head);
	}
