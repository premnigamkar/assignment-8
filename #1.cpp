# lab-8
//question 1
#include <iostream>
using namespace std;
class node
{
  public:
   int number;
   node *next;
};
bool Empty(node *head);
void add_node(node *&head,node *&tail,int number);
void insert_node(node *&head,node *&tail,int number);
void delete_node(node *&head,node *&tail);
void display(node*ak);
bool Empty(node *head)
{
    if(head == NULL)
     return true;
    else
     return false;
}
void add_node(node*&head,node*&tail,int number)
{
    node *temp = new node;
    temp->number = number;
    temp->next = NULL;
    head = temp;
    tail = temp;

}
void insert_node(node*&head,node*&tail,int number)
{
    if(Empty(head))
     add_node(head,tail,number);
    else
    {
     node*temp = new node;
     temp->number = number;
     temp->next = NULL;
     tail->next=temp;
     tail=temp;
    }
}
void delete_node(node *&head,node*&tail)
{
    if(Empty(head))
      cout<<"The list is already empty."<<endl;
    else if(head == tail)
    {
      delete head;
      head = NULL;
      tail = NULL;
    }
    else
    {
      node *temp = head;
      head = head->next;
      delete temp;
    }
}
void display(node*ak)
{
    if(Empty(ak))
     cout<<"The list is already empty."<<endl;
    else
    {
        cout<<"List is : \n";
        while(ak !=NULL)
        {
            cout<<ak->number<<endl;
            ak = ak->next;
        }
    }

}
char menu()
{
  char ch;
  cout<<"Menu \n";
  cout<<"1.Add a item : \n";
  cout<<"2.Delete a item : \n";
  cout<<"3.Show athe list : \n";
  cout<<"4.Exit. \n";
  cin>>ch;
  return ch;
}
int main()
{
  node*head=NULL;
  node*tail=NULL;
  char ch;
  int num;
  do
  {
      ch = menu();
      switch(ch)
      {
        case '1': cout<<"Enter a number : ";
                  cin>>num;
                  insert_node(head,tail,num);
                  break;
        case '2': delete(head,tail);
                  break;
        case '3': display(head);
                  break;
        default: cout<<"Exit \n ";
      }
  }while(ch!='4');
  return 0;
}
