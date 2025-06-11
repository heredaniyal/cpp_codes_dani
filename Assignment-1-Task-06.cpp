#include<iostream>
using namespace std;

struct node
			{
				int data;
				node *next;
				
				node(int x)
				{
					data = x;
				}
			};
			node *head, *tail = NULL;
			int size=0;
void push(int x)
			{
			  node * newnode = new node(x);
				if(head == NULL)
				{
					head = tail = newnode;
					tail->next = NULL;
				}
				else{
					newnode->next = head;
					head = newnode;
				}
			}
			
void enque(int x)
			{
				node *newnode = new node(x);
				if(head == NULL)
				{
					head = tail = newnode;
					tail->next = NULL;
				}
				else{
					tail->next = newnode;
					newnode->next = NULL;
					tail = newnode;
				}
			}
			
void palindrome()
			{
				bool palondrime = true;
				if(head == NULL)	
				{
					cout<<"Empty!!!"<<endl;
				}
				else{
					node *temp = head;
					int array[size];
					int i = 0;
					int check=size-1;
					
					while(temp != NULL)
					{
						array[i] = temp->data;
						i++;
						temp = temp->next;
					}
					temp = head;
//											for(int c = 0; c<size;c++)
//						{
//							cout<<endl<<array[c];
//							
//						}
//						cout<<"value of Check: "<<check;
					while(temp != NULL)
					{

						if(array[check] != temp->data)
						{
							cout<<"\nLinkList is not a Palondrome!!!"<<endl;
							palondrime = false;
							break;
						}
						temp = temp->next;
						check--;
					}
					if(palondrime)
					{
						cout<<"\nCongrats! LinkList is a Palondrome"<<endl;
					}
				}
			}
			
void reverse()
			{
				if(head == NULL)
				{
					cout<<"EMpty\n";
				}
				else{
					node * temp = head;
					node * prev , *front = NULL;
					while (temp != NULL)
					{
						front = temp->next;
						temp->next = prev;
						prev = temp;
						temp = front;
						cout<<"first loop";
					}
					temp = prev;
					cout<<"\n\nAfter reversing Link List: ";
					while(temp != NULL)
					{
						cout<<temp->data<<"--> ";
						temp = temp->next;
					}
				}
			}
			
void print()
			{
				if(head == NULL)
				{
					cout<<"EMpty Linklist!!!"<<endl;
				}
				else{
					node *temp = head;
					while(temp != NULL)
					{
						cout<<temp->data<<"--->> ";
						size++;
						temp = temp->next;
					}
				}
			}
			
int main()
{
	print();
	push(60);
//	enque(60);
	push(50);
//	enque(50);
	push(40);
//	enque(40);
	push(30);
//	enque(30);
	push(20);
//	enque(20);
	push(10);
//	enque(10);
	print();
//	palindrome();
	reverse();
}
