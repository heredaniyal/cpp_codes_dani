#include <iostream>
using namespace std;

struct Node
{
   int data;
   Node *next;
};

void priroty(int m, int n) // FOR SWAPPING CUSTOMERS
                                       
  {
    if(head == NULL)
    {
        cout<<"Empty !!!"<<endl;
        return;
    }
    Node *temp = head;
    Node *t_head = head;
    Node *newhead = NULL;
    Node *newtail = NULL;
    Node *lasttail = NULL;
    int temp_m = m;
    int temp_n = n;
    bool checker = true;
    while(temp != NULL)
    {
        m = temp_m;
        n = temp_n;
        while(m > 1 && temp -> next != NULL)
        {
            temp = temp -> next;
            m--;
        }
        if(temp -> next == NULL)
        return;
        newtail = temp;
        newhead = temp -> next;
        while(n > 0 && temp -> next != NULL)
        {
            temp = temp -> next;
            n--;
        }
        if(checker == true)
        {
            lasttail = newtail;
        }
        newtail -> next = temp ->next;
        temp -> next = t_head;
        if(checker == true)
        {
            head = newhead;
        }
        temp = newtail -> next;
        t_head = temp;
        if(checker == false)
        {
            lasttail -> next = newhead;
        }
        checker = false;


    }
}

void removal(int i , int j) // REMOVAL WALA ALAG HAI
{
    if(head == NULL)
    {
        return;        
    }
    Node *temp = head;
    Node *prev = NULL;
    Node *todel = NULL;
    int t_i = i;
    int t_j = j;
    while(temp != NULL)
    {
        i = t_i;
        j = t_j;
    while (i > 0 && temp -> next != NULL)
    {
        prev = temp;
        temp = temp -> next;
        i--;
    }    
    while(j > 0 && temp != NULL)
    {
        todel = temp;
        temp = temp -> next;
        delete todel;
        j--;
    }
        prev -> next = temp;
        
    }
}