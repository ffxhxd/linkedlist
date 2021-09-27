// C Program to find smallest and largest element in single linked list 
//Fahad CSE-19-42.


#include<stdio.h>
#include<stdlib.h>

struct node
{
        int info;
        struct node *link;
};

struct node *create_list(struct node *start);
void display(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
int largest(struct node *start);
int smallest(struct node *start);

int main()
{
        struct node *start=NULL;
        int n;

        start=create_list(start);
        display(start);
        printf("\nLargest element is %d\n",largest(start));
        printf("\nSmallest element is %d\n",smallest(start));

        return 0;

}


int largest(struct node *ptr)
{
        int large=ptr->info;
        while(ptr!=NULL)
        {
                if(ptr->info >large)
                        large = ptr->info;
                ptr=ptr->link;
        }
        return large;
}
int smallest(struct node *ptr)
{
        int small=ptr->info;
        while(ptr!=NULL)
        {
                if(ptr->info < small)
                        small = ptr->info;
                ptr=ptr->link;
        }
        return small;
}

struct node *create_list(struct node *start)
{
        int i,n,data;
        printf("Enter the number of nodes : ");
        scanf("%d",&n);
        start=NULL;
        if(n==0)
                return start;

        printf("\nEnter the element to be inserted : ");
        scanf("%d",&data);
        start=addatbeg(start,data);

        for(i=2;i<=n;i++)
        {
                printf("Enter the element to be inserted : ");
                scanf("%d",&data);
                start=addatend(start,data);
        }
        return start;
}

void display(struct node *start)
{
        struct node *p;
        if(start==NULL)
        {
                printf("\nList is empty\n");
                return;
        }
        p=start;
        printf("\nList is :\n");
        while(p!=NULL)
        {
                printf("%d ",p->info);
                p=p->link;
        }
        printf("\n\n");
}

struct node *addatbeg(struct node *start,int data)
{
        struct node *tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        tmp->link=start;
        start=tmp;
        return start;
}

struct node *addatend(struct node *start,int data)
{
        struct node *p,*tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        p=start;
        while(p->link!=NULL)
                p=p->link;
        p->link=tmp;
        tmp->link=NULL;
        return start;
}
