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

//void reverse(int k)
//				{
//					if(head == NULL)
//					{
//						cout<<"Empty\n";
//					}
//					else{
//						int count = 1;
//						node * temp = head;
//						
//						while(temp->next != head)
//						{
//							count++;
//							temp = temp->next;
//						}
//						temp = head;
//						node *temp2 = head;
//						int array[k];
//						while (count > k)
//						{
//							for(int i=0; i<k; i++)
//							{
//								array[i] = temp->data;
//								temp = temp->next;
//								count--;
//							}
//							
//							for(int i=k-1; i>-1; i--)
//							{
//								temp2->data = array[i];
//								temp2 = temp2->next;
//							}
//						}
//					}
//				}

//void delete_points(int j, int k)
//				{
//					if(head == NULL)
//					{
//						cout<<"Empty!!!\n";
//					}else{
//					
//					node *temp = head;
//					int count=1;
//					
//					while(temp->next != head)
//					{
//						count++;
//						temp = temp->next;
//					}
//					temp = head;
//					
//					if(count > k)
//					{
//						for (int i=1; i<j-1; i++)
//						{
//							temp = temp->next;
//						}
//						for(int i=j-1; i < k; i++)
//						{
//							node *del = temp->next;
//							temp->next = del->next;
//							delete del;
//						}
//				}
//					}
//				}
		
void reverse()
				{
					if(head == NULL)
					{
						cout<<"empty\n";
					}
					else{
						node * temp = head;
						node *prev = tail, *front;
						while (temp->next != head)
						{
							front = temp->next;
							temp->next = prev;
							prev = temp;
//							temp->next = prev;
							temp = front;
						}
						front = temp->next;
						temp->next= prev;
						prev = temp;
//						temp = front;
//						temp = prev;
						cout<<"After reversing: \n";
						while(temp->next != tail)
						{
							cout<<temp->data<<" -> ";
							temp = temp->next;
						}
						cout<<temp->data<<endl;
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
						cout<<temp->data<<endl;
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
//			remove_duplicate();
//			print();
//			reverse(3);
//			delete_points(6,8);
//			print();
			reverse();
			
		}
