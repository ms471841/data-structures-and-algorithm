//stack using the linked list

#include<iostream>
using namespace std;


class stack{
     public:
       int data;
       stack *next;

       void push(stack ** top,int item){
         
         stack *newnode= new stack();
         newnode->data=item;
         newnode->next=NULL;
         if(*top==NULL){
         *top=newnode;
         
         }else{
         
            newnode->next=*top;
            *top=newnode;
            }
    }

    void pop(stack** top){

   if(*top==NULL){
       return ;
   }else
   {
       stack *temp= *top;
       *top=temp->next;
       delete temp;
   }
    }
   void showStack(stack* top){
    stack *temp=top;
  
   while (temp!=NULL)
   {
       cout<<temp->data<<"->";
       temp=temp->next;
   }
 } 

};

int  main(){
stack obj;
stack* top=NULL;
for (int i = 0; i <5; i++)
{
    obj.push(&top,i*5);
}
if (top!=NULL)
{
obj.showStack(top);

}else
{
    cout<<"empty";
}
obj.pop(&top);
cout<<endl<<"after pop the stack is:";
obj.showStack(top);

}