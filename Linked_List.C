#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

node* create_ll(int,node*);

void display(node*);

node* create_node(int);

struct Linked_List
{
int data;
struct Linked_List *next;
};
main()
{
typedef struct Linked_List node;
node * head = null;
int n;
printf("Enter the Value of n");
scanf( "%d" , &n );
while( n )
{
head = create_ll(n,head);
printf ("Enter the Value of n to add a node and to terminate, Enter 0);
scanf ( "%d" , &n );
}
display ( head );
getch();
}
node * create_ll(int a,node * head)
{
node * temp,ptr;
temp = create_node(a);
if(head == null)
{
head = temp;
return(head);
}
else
{
ptr = head;
while(ptr->next != null)
{
ptr = ptr->next;
}
ptr->next = temp;
return (head) ;
}
}
node * create_node(int a)
{
node * temp1;
temp1 = (node*) malloc ( sizeof (node) );
temp1->data = a;
temp1->next = null;
return temp1;
}
void display(node * head)
{
node * temp = head;
while (temp != null)
{
printf ("%d", temp->data ) ;
temp = temp->next ;
}
}
