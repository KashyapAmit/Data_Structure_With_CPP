/*
Author	:	Amit Kashyap
Date	:	01/12/2018
Name	:	SQUEUE.cpp
Purpose	:	To perform sequential queue	*/


#include<iostream.h>
#include<conio.h>
#define max 3
class queue
{
  int arr[max],rear,front,item;
  public:
	 queue()
	 {
	   rear=-1;
	   front=-1;
	 }
	 void display();
	 void insert();
	 void del();
};
void queue::insert()
{
  if(front==(rear+1)%max)
  {
    cout<<"!!!Overflow!!!\n";
  }
  else if(front==-1)
  {
    rear=front=0;
  }
  else
  {
    rear=(rear+1)%max;
  }
  cout<<"enter the item in the Queue:\n";
  cin>>item;
  arr[rear]=item;
  display();
}
void queue::display()
{
  if(front==-1)
  {
    cout<<"!!!Underflow!!!\n";
  }
  else if(front==(rear+1)%max)
  {
    cout<<"!!!Overflow!!!\n";
  }
  else
  {
    for(int i=0;i<=front;i++)
    {
      cout<<i<<"\t";

    }
  }
  cout<<"\n";
}
void queue::del()
{
  if(front==-1)
  {
    cout<<"!!!Queue is underflow!!!:\n";
  }
  else if(front==rear)
  {
    front=rear=-1;
  }
  else
  {
    front=(front+1)%max;
  }
}
void main()
{
  queue q1;
  int ch=0;
  do
  {
    clrscr();
    cout<<"choose from the following:\n";
    cout<<"1.display\n2.insertion\n3.deletion\n";
    cin>>ch;
    switch(ch)
    {
      case 1:
	     q1.display();
	     break;
      case 2:
	     q1.insert();
	     break;
      case 3:
	     q1.del();
	     break;
      default:
	      cout<<"entered wrong choice!!!!!!:\n";
	      break;
    }
    cout<<"enter more?(press 1 for yes/2 for no)\n";
    cin>>ch;
  }   while(ch==1);
getch();
}