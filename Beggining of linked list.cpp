#include<iostream>
#include<malloc.h>

using namespace std;

struct Node
{
    int data;
    struct Node *link;
} *FIRST = NULL, *n1;         

int main(){
 
    FIRST=(Node*)malloc(sizeof(struct Node));
    FIRST->data=3105;
    FIRST->link=NULL;

    n1=(Node*)malloc(sizeof(struct Node));
    n1->data=7421;
    n1->link=NULL;
    FIRST->link=n1;

    n1=(Node*)malloc(sizeof(struct Node));
    n1->data=9853;
    n1->link=NULL;

    FIRST->link->link=n1;
    
    cout << "linked list:-"<<endl;
    struct Node *temp;
    temp=FIRST;           
    while(temp!=NULL)
    {
        cout<<"\n"<<temp->data;
        temp=temp->link;          
    }
    struct Node *temp1;
    temp1=new Node;
    if(FIRST == NULL)
    {
        temp1->data=31;
        temp1->link=NULL;
    }
    temp1->data=7421;
    temp1->link=FIRST;
    FIRST=temp1;
    cout<< "\n\nThe linked list After insertion at first position:-";
      
    temp=FIRST;
    while(temp!= NULL)
    {
        cout<<" \n"<<temp->data;
        temp=temp->link;
    }
}