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
		
void remove_duplicate()
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
						
						temp = head;
						
						while(temp->next != head )
						{
							cout<<"first loop check\n";
							temp2 = temp;
							while(temp2->next != head )
							{
								cout<<"second loop check\n";
								if(temp->data == temp2->next->data)
								{
									node *del = temp2->next;
									temp2->next = del->next;
									delete del;
//									temp2 = temp->data->next;
								}
								temp2 = temp2->next;
								if(temp2 == head)
								{
									break;
								}
							}
//										if(temp->data == temp2->next->data)
//										{
//											node *del = temp2->next;
//											temp2->next = del->next;
//											delete del;
//										}
							temp = temp->next;
							if(temp == head)
							{
								break;
							}
						}
									
//									temp2 = temp;
//											while(temp2->next != head)
//							{
//								if(temp->data == temp2->next->data)
//								{
//									node *del = temp2->next;
//									temp2->next = del->next;
//									delete del;
////									temp2 = temp->data->next;
//								}
//								temp2 = temp2->next;
//							}
//										if(temp->data == temp2->next->data)
//										{
//											node *del = temp2->next;
//											temp2->next = del->next;
//											delete del;
//										}		
						
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
			remove_duplicate();
			print();
		}
