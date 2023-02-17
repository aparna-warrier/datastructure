#include<stdio.h>
#include<stdlib.h>
struct node
{
int value;
struct node* link;
};
typedef struct node node1;
node1 * start=NULL;
node1 *create()
     {
    node1 *nptr=(node1*)malloc(sizeof(node1));
    if(nptr==NULL)
     {
     printf("memory overflow");
     return 0;
     }
    else
    {
   return nptr;
    }
}
void ins_beg()
{
 
   int val;
   node1* nptr=create();
   printf("enter the element");
   scanf("%d",&val);
   nptr->value=val;
   if(start==NULL)
   {
   start=nptr;
   nptr->link=NULL;
   }
   else
   {
   nptr->link=start;
   start=nptr;
   }
}   
void ins_end()
{
    node1 *temp,*nptr=create();
    int val;
    printf("enter the element");
    scanf("%d",&val);
    nptr->value=val;
    nptr->link=NULL;
    temp=start;
    while(temp->link!=NULL)
    {
    temp=temp->link;
    }
    temp->link=nptr;
    }
void  ins_btw()
{
   node1 *temp,*nptr=create();
   int val,pos,i;
   printf("enter the element and position to be inserted");
   scanf("%d%d",&val,&pos);
   nptr->value=val;
   nptr->link=NULL;
   temp=start;
   if(pos==1)
   {
   nptr->link=start;
   start=nptr;
   }
   else
   {
   for(i=1;i<pos-1;i++)
   {
   temp=temp->link;
   }
   nptr->link=temp->link;
   temp->link=nptr;
   }
   }
void display()
{
   node1 * temp;
   if(start==NULL)
   {
   printf("list empty");
   }
   temp=start;
   while(temp!=NULL)
   {
   printf("%d",temp->value);
   temp=temp->link;
   }
}
void del_beg()
{
  node1 *temp;
  if(start==NULL)
  {
  printf("list empty");
  }
  else
  {
  temp=start;
  start=start->link;
  free(temp);
  }
  }
 void del_end()
 {
   node1 *temp,*prev;
   temp=start;
   while(temp->link!=NULL)
   {
   prev=temp;
   temp=temp->link;
   }
   prev->link=NULL;
   free(temp);
   }
void del_btw()
{
  node1 *temp,*prev;
  int i,pos;
  printf("enter position of the node to be deleted");
  scanf("%d",&pos);
  temp=start;
  if(pos==1)
   start=start->link;
   for(i=1;i<pos;i++)
   {
   prev=temp;
   temp=temp->link;
   }
   prev->link=temp->link;
   free(temp);
   }
   
void main()
{
    int y;
    printf("Singly linked list\n");
    printf("1.Display 2.Insertion at begining 3.insert at end 4.insert inbetween 5.delete beginning 6.delete at end 7.delete in between 8.exit \n");
    while(1)
       {

        printf("\nEnter your choice: ");
        scanf("%d",&y);
            switch(y)
            {
                case 1:
                       display();
                       break;
                case 2:
                       ins_beg();
                        break;
                case 3:
                      ins_end();
                      break; 
                case 4:
                      ins_btw();
                      break;
                case 5:
                      del_beg();
                      break;
                case 6:
                     del_end();
                     break; 
                case 7:     
                      del_btw();
                      break;
                case 8:
                     exit(0);
                default:
                printf("wrong choice");
            }
        }


}
