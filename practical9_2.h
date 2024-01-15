 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
 	int data;
 	struct node*next;
 };
struct node*front=0;
struct node*rear=0;
 void enque(int x)
 {
 	struct node*temp;
 	temp=(struct node*)malloc(sizeof(struct node));
 	temp->data=x;
 	if(rear==0)
 	{
 		front=rear=temp;
 		rear->next=front;
	 }
	 else
	 {
	 	rear->next=temp;
	 	rear=temp;
	 	rear->next=front;
	 }
 }
 int deque()
 {
 	struct node*temp;
 	temp=front;
 	int x=temp->data;
 	if(front==0 && rear==0)
 	{
 		printf("circular queue is empty:\n");
 		return -1;
	 }
	 else if(front==rear)
	 {
	 	front=rear=0;
	 	return x;
	 	free(temp);
	 }
	 else
	 {
	 	front=front->next;
	 	rear->next=front;
	 	return x;
	 	free(temp);
	 }
 }
 void display()
 {
 	struct node*temp;
 		temp=front;
 	do
 	{
 		printf("%d ",temp->data);
 		temp=temp->next;
 		
	 }while(temp!= front);
 }
