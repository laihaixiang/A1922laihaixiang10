#include <stdlib.h>
#include <stdio.h>

#ifndef stack_h
#define stack_h

typedef int DataType;

typedef struct _node{
	    DataType data;
	    struct _node *next;
} Node;

typedef struct _stack{
	    Node *head;
	    Node *tail;
} Stack;

void initStack(Stack *);
void pushStack(Stack *, DataType);
void popStack(Stack *);
int getLength(Stack *);
void dispStack(Stack *);

#endif
