// question 2
#include <iostream>
using namespace std;
int ar[5];
int top = -1;
void push(int num);
void pop();
void display();
void push(int num)
{
  if(top == 4)
  {
   cout<<"\n   Stack is full or overflow! \n";
  }
  else
  {
     top++;
     ar[top] = num;
  }
}
void pop()
{
  if(top == -1)
  {
      cout<<"\n Stack is Empty or underflow! \n";
  }
  else
  {
      top--;
      cout<<"Deleted number is : ";
      cout<<ar[top];
  }
}
void display()
{
  int top;
  if(top == -1)
  {
     cout<<"Array is Empty or underflow.\n";
  }

     else
     {
       cout<<"\n Array is : ";
      while(top!=-1)
      {
          cout<<"    "<<ar[top];
          top--;
      }
     }
}
class node
{
  public:
   int data;
   node*next;
   node*top;
   node()
   {
       top = NULL;
   }
void push(int x)
{
   node *head;
   head = new node;
   head->data;
   head->next = NULL;
   if(top!=NULL)
   {
        head->next=top;
        top = head;
   }
}
void pop()
{
  node*temp;
  if(top==NULL)
  {
      cout<<"\n The stack is empty!!!";
      return;
  }
  temp=top;
  top=top->next;
  delete temp;
}
void display()
{
    node *ptr=top;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<endl;
}
};
int main()
{
   char ch,ch1;
   int num;
   node n;
   cout<<"1.Stack using array \n 2.Stack using linklist\n";
   cin>>ch1;
   switch(ch1)
   {
   case '1':
   do
   {
       cout<<"\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit : \n";
       cin>>ch;
       switch(ch)
       {
           case '1' : cout<<"Enter a value : ";
                      cin>>num;
                      push(num);
                      break;
           case '2' : pop();
                      break;
           case '3' : display();
                      break;
       }
   }while(ch!='4'); break;
   case '2':
    do
   {
       cout<<"\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit : \n";
       cin>>ch;
       switch(ch)
       {
           case '1' : cout<<"Enter a value : ";
                      cin>>num;
                      n.push(num);
                      break;
           case '2' : n.pop();
                      break;
           case '3' : n.display();
                      break;
       }
   }while(ch!='4'); break;
   default: cout<<"worng input";
   }

   return 0;
}
