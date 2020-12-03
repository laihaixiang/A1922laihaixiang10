#include "stack.h"

//栈初始化
void initStack(Stack *stack){
	stack->head = NULL;
	stack->tail = NULL;
}

//栈入
void pushStack(Stack *stack, DataType iData){
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = iData;                   
	node->next = NULL;

	if(stack->head == NULL){
		stack->tail = node;
	}else{
		node->next = stack->head;
	}
	stack->head = node;

	return;

}

//栈出
void popStack(Stack *stack){
	if(stack->head->next == NULL){
		stack->head = NULL;;
	}else{
		stack->head = stack->head->next;
	}

	return;
}

//栈长度
int getLength(Stack *stack){
	Node *node = stack->head;
	int i = 0;
	while(node != NULL){
		node = node->next;
		i++;

		return i;
	}
}

//栈输出
void dispStack(Stack *stack){
	Node *node = stack->head;
	int i = 0;
	while(node != NULL){
		printf("the %dth node: %d\n", i + 1, node->data);
		node = node->next;
		i++;
		}
	printf("disp finished!\n");

	return;
}
