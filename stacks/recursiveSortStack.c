#include<stdio.h>
#include<stdlib.h>

typedef struct stack {
	int top;
	unsigned capacity;
	int* arr;
}stack;

stack* createStack(unsigned capacity)
{
	stack* newnode = (stack *)malloc(sizeof(stack));
	newnode->capacity = capacity;
	newnode->top = -1;
	newnode->arr = (int *)malloc(sizeof(int));
	return newnode;  
}
int isEmpty(stack* stack)
{
	return stack->top == -1;
}
int isFull(stack* stack)
{
	return (stack->top == stack->capacity);
}

void push(stack* stack, int data) 
{
 	stack->arr[++stack->top] = data;
}

int pop(stack* stack)
{
	return stack->arr[stack->top--];
}

int peek(stack* stack)
{
	return stack->arr[stack->top];
}

void printStack(stack* st)
{
	stack* s = st;
	while(!isEmpty(s))
	{
		printf("%d\n",pop(s));
	}
}

void insert_sorted(stack* st, int temp)
{
	if(isEmpty(st) || temp > peek(st))
	{
		push(st, temp);
		return;
	}
	int x = pop(st);
	insert_sorted(st, temp);
	push(st, x);
}

void sortStack(stack* stack)
{//printf("aya");
	if(isEmpty(stack))
	{//printf("empty");
	return;
	}
	int temp = pop(stack);
	//printf("%d ",pop(stack));
	sortStack(stack);
	insert_sorted(stack, temp);
}

int main()
{
	stack* stack = createStack(100);	
	push(stack, 30);
	push(stack, -5);push(stack, 18);push(stack, 14);push(stack, -3);
	printf("Before sorting\n");
	//printStack(stack);
	printf("After Sorting\n");
	sortStack(stack);
	printStack(stack);
//	printf("%d ", peek(stack));
}
