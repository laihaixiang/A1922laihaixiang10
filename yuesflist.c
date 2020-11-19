#include<stdio.h>
#include <malloc.h>

int main(int argc, char **argv) {
        
	int n ,m;
	printf("Please input n:");
	scanf("%d",&n);
        printf("Please input m:");
	scanf("%d",&m);

typedef struct node {
	int null;
	struct node *next;
} node;

	int k = 0;
	node *p, *q, *r;
	p = q = (node*)malloc(sizeof(node));
	p -> null = 1;
   for (int i = 2; i <= n; i++) {
	   r = (node*)malloc(sizeof(node));
	   r -> null =i;
	   q -> next = r;
	   q = r;
   }
   q -> next = p;

   q = p;
   while (q -> next != q){
	   k++;
	   if (k == m){
		   p -> next = q -> next;
		   free(q);
		   q = p -> next;
		   k = 0;
	    } else {
		    p = q;
		    q = q -> next;
	    }
	 }
         printf("最后一个是：%d\n", q -> null);
}
