#include<stdio.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
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
void deletenode(int pos)
{
	if(pos==1)
	{
		struct node*temp;
		temp=head;
		head=head->next;
		free(temp);
	}
	else
	{
		int i;
		struct node*temp1;
		temp1=head;
		for(i = 1;i<=pos-2;i++)
		{

			temp1=temp1->next;
		}
		struct node *temp2;
			temp2=temp1->next;
			temp1->next = temp2->next;
		}

	}
	void searchnode(int x)
	{

	struct node*temp;
	temp=head;
	while(temp!=NULL)
	{

		if(temp->data==x)
		{
			printf("True\n");
	    }
	    else
		{
	    printf ("false\n");

	    }
	    temp=temp->next;
	}

	}



void creatlist(int n)
{
	int value,i;
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			struct node*temp2=(struct node*)malloc(sizeof(struct node));
			printf("Enter data\n");
			scanf("%d",&value);
			temp2->data=value;
			temp2->next=NULL;
			temp->next=temp2;
			temp=temp->next;
		}
	}
}
	int main()
	{
		int n,;
		head=NULL;
		printf("Total node\n");
		scanf("%d",&n);
		creatlist(n);
		printf("Insert Number is \n");
		print();
		printf("Enter Delete Node Number = \n");
		scanf("%d",&n);
		deletenode(n);
		printf("Delete Node  is \n");
		print();
		printf("Enter Search value = \n");
		scanf("%d\n",&m);
		searchnode(m);
		return 0;
	}
