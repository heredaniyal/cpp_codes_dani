#include<iostream>
using namespace std;

struct node{
	int data;
	node * next;
	
	node(int x)
	{
		data = x;
	}
};

node *head = NULL;
node *tail = NULL;

void insert_rear(int x)
				{
					node *newnode = new node(x);
					if(head == NULL)
					{
						head = tail = newnode;
						tail->next = head;
					}
					else{
						tail->next = newnode;
						newnode->next = head;
						tail = newnode;
					}
				}
				
void insert_front(int x)
				{
					node *newnode = new node(x);
					
					if(head == NULL)
					{
						head = tail = newnode;
						tail->next = head;
					}
					else{
						newnode->next = head;
						head = newnode;
						tail->next = head;
					}
				}
				
void print()
				{
					if(head == NULL)
					{
						cout<<"EMpty!!!\n";
					}
					else{
						node * temp = head;
						
						while (temp->next != head)
						{
							cout<<temp->data<<" -> ";
							temp = temp->next;
						}
						cout<<temp->data;
					}
				}
				
int main()
		{
			int size;
			int x;
			cout<<"HOw many nodes you want to create?\n";
			cin>>size;
			
			for(int i=0; i<size; i++)
			{
				cout<<"ENter your "<<i+1<<" value: ";
				cin>>x;
				insert_rear(x);
			}
			print();
		}
