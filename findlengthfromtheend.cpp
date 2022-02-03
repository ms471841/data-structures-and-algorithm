//find nth node the end of the list

#include<iostream>
using namespace std;

class list{

 int data;
 list* next;

 public:
 void insert(list** head,int item);
 int countNode(list* head);
 int nthNode(list* head,int k);
};

int main(){

    list *head= NULL;
    list obj;
    for (int i = 0; i <5; i++)
    {
        obj.insert(&head,i*5);
    }
    int listLength=obj.countNode(head);
   int k=3;
   cout<<listLength;
   
  int  pos=listLength-k;
   cout<<endl<<pos<<endl;
   cout<<obj.nthNode(head,pos);
   
}

void list:: insert(list** head,int item){
  list*  newnode = new list();
  newnode->next=NULL;
  newnode->data=item;
  if(head==NULL){
      *head=newnode;
  }else
  {
      newnode->next=*head;
      *head=newnode;
  }
  }


  int list::countNode(list*head){
    list *temp=head;
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
    }


    int list::nthNode(list *head,int k){

   list* temp=head;
   int pos=0;
   while (temp!=NULL&&pos<k){
       pos++;
       
       temp=temp->next;
       
   }
   return temp->data;


    }