// Stack Head
typedef struct node* Nodeptr;

typedef struct
{
	int count;
	Nodeptr top;
}STACK_HEAD;

typedef STACK_HEAD* Stack;

// Stack Data Node
typedef struct node
{
	int data;
	Nodeptr next;
}STACK_NODE;

typedef char stackItem;

Stack create();
Stack push(Stack s, stackItem item);
void display(Stack s);
int top(Stack s);
void pop(Stack s);
int isEmpty(Stack s);
int clear(Stack s);
