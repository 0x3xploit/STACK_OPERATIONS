#include<stdio.h>
#include<conio.h>
#define SIZE 50
struct stack
{
	int itmes[SIZE];
	int top;
}s;
void push(struct stack *s,int x)
{
	int i;
	if(s->top==SIZE-1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		s->top++;
		s->itmes[s->top]=x;
		printf("value inserted %d\n",x);
		printf("%d\n",s->top);
	}
}
int pop(struct stack *s)
{
	int x;
	if(s->top==-1)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		x=s->itmes[s->top];
		s->top--;
		return x;
	}
	return x;
}
void display(struct stack *s)
{
	int i;
	if(s->top==-1)
	{
		printf("Stack is Empty");
	}
	for(i=0;i<=s->top;i++)
	{

		printf("%d\n",s->itmes[i]);

	}
}

void main()
{
	int value1,value2,n,w=1,x;
	clrscr();
	//s.top=-1;
	while(w!=0)
	{
	printf("1] Push\n");
	printf("2] Pop\n");
	printf("3] Display\n");
	printf("4] Exit\n");
	printf("Enter Your Choice :: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("Enter Element :: ");
			scanf("%d",&value1);
			push(&s,value1);
			break;
		case 2: x=pop(&s);
			printf(" Deleted Element %d",x);
			break;
		case 3: display(&s);
			break;
		case 4: exit(0);
		default:
			printf("Wrong Choice");
	}
	}
	getch();
}
