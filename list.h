#ifndef list_h
#define list_h

#include <stdio.h>

typedef int dataType;

typedef struct _node{
	dataType data;
	struct _node *next;
}Node;

typedef struct _list{
	Node *head;
	Node *tail;
}List;

void initList(List *);
void addHead(List *,dataType);
Node *getNode(List *,dataType);
void delNode(List *, dataType);
int getLength(List *);
void dispList(List *);
void clearList(List *);
void isEmpty(List *);

#endif
