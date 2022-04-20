#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack create()
{
	Stack s;
	
	s = (Stack)malloc(sizeof(STACK_HEAD));
	s->count = 0;
	s->top = NULL;
	
	return s;
}

Nodeptr createNode(int item)
{
	Nodeptr ptr;
	
	ptr = (Nodeptr)malloc(sizeof(STACK_NODE));
	ptr->data = item;
	ptr->next = NULL;
	
	return ptr;
}

Stack push(Stack s, stackItem item)
{               
	Nodeptr temp = createNode(item);
	temp->next = s->top;
	s->top = temp;
	s->count++;
}

void display(Stack s)
{
	Nodeptr ptr = s->top;
	
	printf("Elements in Stack: ");
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

int top(Stack s)
{
	return s->top->data;
}

void pop(Stack s)
{
	Nodeptr temp;
	
	temp = s->top;
	s->top = temp->next;
	temp = NULL;
	free(temp);	// currently the top of the stack
	s->count--;
}

int isEmpty(Stack s)
{
	return s->count == 0;
}

int clear(Stack s)
{
	Nodeptr temp = NULL;
	Nodeptr ptr = s->top;
	
	while(ptr != NULL)
	{
		temp = ptr;
        ptr = ptr->next;
        free(temp);
	}
	
	s->top = ptr;
	s->count = 0;
}
