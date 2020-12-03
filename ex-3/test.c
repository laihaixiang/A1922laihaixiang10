#include "stack.h"

int main(int argc, char **argv)
{
	Stack *stack1 = (Stack *)malloc(sizeof(Stack));
	printf("the first:\n");
	initStack(stack1);
	pushStack(stack1, 1);
	pushStack(stack1, 3);
	pushStack(stack1, 5);
	pushStack(stack1, 7);
	pushStack(stack1, 9);
	printf("The length: %d\n", getLength(stack1));
	dispStack(stack1);
	printf("the second:\n");
	popStack(stack1);
	printf("The length: %d\n", getLength(stack1));
	dispStack(stack1);
	popStack(stack1);
	dispStack(stack1);
	printf("The length: %d\n", getLength(stack1));
	pushStack(stack1, 11);
	dispStack(stack1);
	printf("The length: %d\n", getLength(stack1));

	return 0;
}
