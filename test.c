#include"list.h"
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
    List *list = (List *)malloc(sizeof(List));
    printf("the first:\n");
    initList(list);
    addHead(list, 1);
    addHead(list, 3);
    addHead(list, 5);
    addHead(list, 7);
    addHead(list, 9);
    dispList(list);
    printf("the second:\n");
    delNode(list, 5);
    dispList(list);
    printf("The length: %d\n", getLength(list));
    Node *node = getNode(list, 7);
    printf("The getNode result: %d\n", node->data);

    return 0;
}
