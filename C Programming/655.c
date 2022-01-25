#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the node number\n");
	scanf("%d",&n);
	creatnode(n);
	printf("Creat node\n");
	print();
}
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void creatnode(int n)
{
	int value,i;
	struct node *temp,temp2;
	head=(struct node*)malloc(sizeof(struct node));
	temp=head;
	if(head==NULL)
	{
		printf("Unable Memory\n");
	}
	else
	{
		printf("Enter value 1 \n");
		scanf("%d",&value);
		temp->data=value;
		temp->next=NULL;
		temp=head;
		for(i=2;i<=n;i++)
		{
			struct node*temp2=(struct node*)malloc(sizeof(struct node));
			if(temp2==NULL)
			{
				printf("Unable memory");

			}
			else
			{
				printf("Enter Value %d\n",i);
				scanf("%d",&value);
				temp2->data=value;
				temp2->next=NULL;
				temp->next=temp2;
				temp=temp->next;

			}
		}
	}

}
void print()
{
	struct node*temp;
	temp=head;
	while(temp!=NULL)
	{

		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
