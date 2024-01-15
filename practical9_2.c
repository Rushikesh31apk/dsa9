#include<stdio.h>
#include<stdlib.h>
#include "practical9_2.h"
void main()
{
    int ch ,x;
    do
    {
    	printf("\n->------MENU------>-");
    	printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
    	scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1:
    			printf("enter element to enqueue:\n");
    			scanf("%d",&x);
    			enque(x);
    			break;
    		case 2:
    			x=deque();
    			printf("poped element or dequeue element is:%d",x);
    			break;
    		case 3:
    			printf("show queue element:\n");
    			display();
    			break;
    		default:
    			printf("wrong input\n");
    			break;
		}
	}while(ch!=4);
		
}
