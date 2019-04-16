#include<stdio.h>

#include<stdlib.h>

void insert(int data,int pos);
void delete();

void display();

struct node
{
 
    int data;
 struct node* llink;

    struct node* rlink;
};

struct node* headptr=NULL;
int i=0;

void main()
{
  
int choice,a,pos;

  printf("\t\t\tmenu\n1.insertion\n2.deletion\n3.display\n4.exit\n");
 
 while(1)
  {
   printf("\nplease enter your choice:");

   scanf("%d",&choice);
   
   switch(choice)
   {
  
      case 1:
   
      printf("\nenter the element you want to insert&specify the position:");
   
      scanf("%d %d",&a,&pos);
   
      insert(a,pos);
    
      break;
   
     case 2:
 
      printf("\nplease specify the position:");
 
      scanf("%d",&pos); 

      delete(pos);
 
      break;
  
     case 3:
   
      display();
  
      break;
 
     case 4:
  
     exit(0);
 
     default:
  
      printf("\nwrong choice:");
    
   }}}
 
void insert(int dat,int p)
 {
  
  struct node* newnodeptr;
  struct node* l;
 
    newnodeptr=((struct node*)malloc(sizeof(struct node)));
 
    newnodeptr->data=dat;
  
    newnodeptr->rlink=NULL;
    newnodeptr->llink=NULL;
 
   if(headptr==NULL)
 {
 
    headptr=newnodeptr;

    newnodeptr->rlink=NULL;
 
    i++;
 }
 
   else if(p==1)
 {

    l=headptr;
 
    newnodeptr->rlink=l;
 
    l->llink=newnodeptr;
 
   headptr=newnodeptr;
  
   i++;
 }
 
 else if(p==(i+1))
 {
 
  l=headptr;
 
   while(l->rlink!=NULL)
 {
    l=l->rlink;
  }
 
 l->rlink=newnodeptr;
 
 newnodeptr->llink=l;

  newnodeptr->rlink=NULL;
 
 i++;
 }
 
else
 {
 
 l=headptr;

 int j;
struct node *t;
 
 for(j=1;j<p-1;j++)
  {
  
 l=l->rlink;}
 
  t=l->rlink;
 
  l->rlink=newnodeptr;
 
  newnodeptr->llink=l;
 
  newnodeptr->rlink=t;
   
  t->llink=newnodeptr;
   }
   i++;
 } 
void delete(int p)
{
 struct node* a;
 struct node* l;
 if(p==1)
 {
  printf("\nthe deleted elemnt is :%d",headptr->data);
  headptr=headptr->rlink;
  i--;
 }
 else if(p==i)
 {
  l=headptr;
  int j;
  while(l->rlink!=NULL){
    l=l->rlink;
  }
  printf("the delted element is %d",l->data);
  a=l->llink;
  a->rlink=NULL;}
else
{
 l=headptr;int j;struct node* s;
 for(j=1;j<p-1;j++)
 {
  l=l->rlink;
 }
 a=l->rlink;
 s=a->rlink;
 l->rlink=s;
 s->llink=l;
 printf("the deleted element is%d",a->data);
}
}
void display()
{
 struct node* l;
 if(headptr==NULL){
 printf("\nLinked list is empty!!!");}
 else{
 l=headptr;
 while(l->rlink!=NULL)
 {
  printf("%d\t",l->data);
  l=l->rlink;
 }
 printf("%d",l->data);
} }
  
    

