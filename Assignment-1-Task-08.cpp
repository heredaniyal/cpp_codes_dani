#include<iostream>
using namespace std;

struct node{
	char data;
	node *next;
	
	node(char x)
	{
		data = x;
	}
};

node *head = NULL;
node *tail = NULL;

void enque(char x)
				{
					node *newnode = new node(x);
					if(head == NULL)
					{
						head = tail = newnode;
						tail->next = NULL;
					}
					else{
						newnode->next = NULL;
						tail->next = newnode;
						tail = newnode;
					}
				}
				
void removal(int I, int J)
				{
					if(head == NULL)
					{
						cout<<"NO Books to Delete\n";
					}
					else{
						node *temp = head;
						int count= 0;
//						cout<<"check";
						while(temp != NULL)
						{
//							cout<<"Loop ka check\n";
							count++;
							temp = temp->next;
						}
//						cout<<"check";
						temp = head;
						node *temp2 = head;
						char deleted[count];
						while(count > I && temp != NULL)
						{
							cout<<"Loop ka check\n";
							for(int c = 0; c < I-1; c++)
							{
//								cout<<"Traversing ka check\n";
//								deleted[i] = temp->data;
								temp = temp->next;
								count--;
							}
							count--;
//							cout<<"check";
							temp2 = temp->next;
							cout<<"temp ki value: "<<temp->data<<endl;
							cout<<"temp2 ki value: "<<temp2->data<<endl;
							for(int i=0; i < J && temp->next != NULL; i++)
							{
								cout<<"Delete ka check\n";
								temp2 = temp->next;
								deleted[i] = temp2->data;
								temp->next = temp2->next;
//								temp = temp->next;
								cout<<"ye value delete hone wali: "<<temp2->data<<endl;
								delete temp2;
								count--;
							}
							temp = temp->next;
//							cout<<"After delettion value of temp: "<<temp->data <<endl;
//							cout<<"After delettion value of temp2: "<<temp2->data <<endl;
						}
						cout<<"loop se bahir  gaye\n";
						
					}
				}
				
void print()
				{
					if(head == NULL)
					{
						cout<<"Empty!!!\n";
					}
					else{
						node * temp = head;
						
						while(temp != NULL)
						{
							cout<<temp->data<<" -> ";
							temp = temp->next;
						}
						cout<<endl;
					}
				}
				
int main()
			{
				print();
				enque('A');
				enque('B');
				enque('C');
				enque('D');
				enque('E');
				enque('F');
				enque('G');
				enque('H');
				enque('I');
				enque('J');
				print();
//				removal(3,4);
//				removal(2,2);
				removal(3,2);
//				removal(2,2);
				print();
			}
