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
		
void sort()
				{
					if(head == NULL)
					{
						cout<<"empty";
					}
					else{
						node *temp = head;
						node *temp2 = head;
						int smallest;
//						cout<<"else wala check\n";
						while(temp->next != head)
						{
							temp2 = temp;
//							cout<<"first loop check\n";
							smallest = temp->data;
							while(temp2->next !=head)
							{
								if(smallest > temp2->data)
								{
									temp->data = temp2->data;
									temp2->data = smallest;
									smallest = temp->data;
								}
								temp2 = temp2->next;
							}
									if(smallest > temp2->data)
									{
										temp->data = temp2->data;
										temp2->data = smallest;
										smallest = temp->data;
									}
							temp = temp->next;
						}
						
									while(temp2->next !=head)
							{
								if(smallest > temp2->data)
								{
									temp->data = temp2->data;
									temp2->data = smallest;
									smallest = temp->data;
								}
								temp2 = temp2->next;
							}
									if(smallest > temp2->data)
									{
										temp->data = temp2->data;
										temp2->data = smallest;
										smallest = temp->data;
									}
						
					}
				}
				
void add_as_sorted(int x)
				{
					bool added = false;
					if(head == NULL)
					{
						cout<<"Empty\n";
					}
					else{
						node *newnode = new node(x);
						node *temp = head;
						if(temp->data > x)
						{
							newnode->next = head;
							head = newnode;
							tail->next = head;
						}else{
						
						while(temp->next != head)
						{
							cout<<"check\n";
							if(temp->next->data > x)
							{
								added = true;
								newnode->next = temp->next;
								temp->next = newnode;
								break;
							}
							temp = temp->next;
						}
						
						if(!added)
						{
							tail->next = newnode;
							newnode->next = head;
							tail = newnode;
						}
					}
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
			sort();
			print();
			add_as_sorted(13);
			print();
		}
