#include<stdio.h>
#include<stdlib.h>
void menus();
void insert();
void display();
void delete();
void search();
int choice,i=0,arr[50],lim;
void main()
{

printf("\n enter limit =");
scanf("%d",&lim);
printf("\nenter the elements of the array\n");
for(i=0;i<lim;i++)
     {
        scanf("%d",&arr[i]);
     }
menus();
 }
void menus()
{

  printf("\n");
        printf("\n MENU");
        printf("\n1. Insert");
        printf("\n2. display");
        printf("\n3. delete");
        printf("\n4. search");
        printf("\n5. exit");
        printf("\nenter your Choice :");
        scanf("%d",&choice);
        switch(choice)
        {
       
        case 1: insert();
             break;
        case 2:display();
           break;
       case 3:delete();
             break;
        case 4:search();
             break;
        case 5:exit(1);
             break;
        default:printf("\n enter a valid choice");          
        };



}

void insert()
    {
        int location,element;
        printf("\nArray Insertion\n");
        printf("\n");
        printf("\ncurrent Array : ");
        for(i=0;i<lim;i++)
            printf("%d  ",arr[i]);
        printf("\nEnter location : ");
        scanf("%d",&location);
        printf("\nEnter Element : ");
        scanf("%d", &element);
        for(i=lim;i>location-1;i--) {
            arr[i]=arr[i-1];
            };
        arr[location-1]=element;
        printf("\nElement Inserted");
        printf("\nNew Array : ");
        lim++;
        for(i=0;i<lim;i++)
        {
            printf("%d  ",arr[i]);
       };
        menus();
    }

void display()
{
 printf("\nyour array is ");
 for(i=0;i<lim;i++){
 printf("%d  ",arr[i]);
 }
 menus();


}
void delete()
{
int i, location;
printf("\n enter the location to delete");
printf("\n");
scanf("%d",&location);
for(i=location-1;i<lim-1;i++){
arr[i]=arr[i+1];


}
lim--;

for(i=0;i<lim;i++)
{
            printf("%d  ",arr[i]);
       }
        menus();
}
void search()
{
int element,i,flag=0;
printf("\n enter the element to be searched");
printf("\n");

scanf("%d",&element);
for(i=0;i<lim;i++){
if(arr[i]==element){
printf("\n");
printf("elements found at %dth position",i+1);
flag=1;
break;


}



}
if(flag==0)
{
printf("element  not found");
}

menus();




}


