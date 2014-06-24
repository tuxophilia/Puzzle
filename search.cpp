#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

struct node{
                char val;
                int count;
                node *next;
                }*head;

void check(char);
void printfirst(struct node *);
node  *createnode(char);
node *createnode(char val)
{
        node *temp;
        //temp=(struct node*)malloc(sizeof(struct node));
        temp = new node;
        temp->val=val;
        temp->count=1;
        temp->next=NULL;
        return temp;
}


void check(char str)
{
        int flag=0;
        struct node *p,*q;
        p=head;

        if(head==NULL)
        {
                head=createnode(str);
                flag=1;
                cout<<"hello";
}
        else if(p->next==NULL)
        {
                if(p->val==str)
                {
                        p->count=(p->count)+1;
                        flag=1;
                }
        }
        else
        for(p=head;p!=NULL;p=p->next)
        {
                if(p->val==str)
                {
                        p->count=(p->count)+1;
                        flag=1;
                }
                q=p;
        }

        if(flag==0)
        {
                q=createnode(str);
        }

}

void printfirst(struct node *p)
{
        p=head;
        while(p->count!=1);
        p=p->next;
        cout<<"\n\n"<<p->val;
}


main()
{
        char str[20];
        int len;

        cout<<"Enter size of the string";
        cin>>len;
        cout<<"Enter the string that we want to use:";

        for(int i=0;i<len;i++)
        cin>>str[i];
        cout<<str;

        for(i=0;i<len;i++)
        {
                cout<<"hello";
                check(str[i]);
        }

        printfirst(head);

        return 0;
}
                                      
