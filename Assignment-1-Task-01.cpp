#include<iostream>
using namespace std;

// WORKING JUST IMPROVE PRINT FUNCTION
struct node{
	int data;
	node *next;
	
	node(int x){
		data = x;
	}
};
node *head,*tail = NULL;

void insert_at_start(int x)
{
	node *newNode = new node(x);
	if(head == NULL){
		head = tail = newNode;
		head->next= NULL;
	}else{
		newNode->next = head;
		head = newNode;
	}
}

void insert_at_end(int x)
{
	node *newNode = new node(x);
	
	if(head == NULL)
	{
		head = tail = newNode;
		tail->next = NULL;
	}
	else{
		tail->next = newNode;
		tail = newNode;
		tail->next = NULL;
	}
}
void specific(int x, int y)
{
//	cout<<"check";
	bool found;
	if(head == NULL)
	{
//		cout<<"check";
		cout<<"There is no such key!!!"<<endl;
		}	else{
//			cout<<"check";
			node *temp = head;
			node *Newnode = new node(x);
			while(temp->next != NULL)
			{
//				cout<<"check";
				if(temp->data == y)
				{
					Newnode->next = temp->next;
					temp->next = Newnode;
					found = true;
					break;
				}else{
					found = false;
					temp = temp->next;
				}
			}
			if(!found)
			{
				cout<<"No Such Value Exists!!!"<<endl;
//				return 0;
			}
		}
}
void delete_specific(int x)
{
	if(head == NULL)
	{
		cout<<"Empty linklist!!!"<<endl;
	}
	else{
		node *temp = head;
		if(head->data == x)
		{
			head = head->next;
			delete temp;
		}else{
		
		while(temp != NULL)
		{
			if(temp->next->data == x)
			{
				node *del = temp->next;
				temp->next = temp->next->next;
				delete del;
				break;
			}
			else{
				temp = temp->next;
			}
		}
	}
	}
}
void print()
{
	if(head == NULL)
	{
		cout<<"Empty Lisklist!!!"<<endl;
	}else{
		node *temp = head;
		while(temp != NULL)
		{
			cout<<temp->data<< " -> "; // testing values by daniyal saqib
			temp = temp->next;
		}
		cout << endl;
	}
}

int main(){
	int key, del;
	print();
	insert_at_end(5);
	insert_at_start(10);
	insert_at_end(15);
	insert_at_start(20);
	insert_at_end(25);
	insert_at_start(30);
	insert_at_end(35);
	insert_at_start(40);
	insert_at_end(45);
	insert_at_start(50);
	insert_at_start(60);
	insert_at_end(55);
	print();
	cout<<"Enter the value after which you wish to enter value: ";
	cin>>key;
	specific(99, key);
	print();
	cout<<"ENter the value which you want to delete: ";
	cin>>del;
	delete_specific(del);
	print();
}
