#include<iostream>
using namespace std;

// CHECKED, VALUE OF MIDDLE SAI CONFUSE HOON

struct node{
	int data;
	node *next;
	
	node(int x){
		data = x;
	}
};
node *head = NULL,*tail = NULL;

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
			while(temp != NULL)
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
	bool found = false;
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
				found = true;
				break;
			}
			else{
				temp = temp->next;
			}
		}
		if(!found)
		{
			cout<<"No such value exist"<<endl;
		}
	}
	}
}

void find_middle()
{
	if (head == NULL)
	{
		cout<<"Empty!!!"<<endl;
	}else{
		int middle = 1;
		int count= 0;
		int check = 2;
		node *temp = head;
		while(temp != NULL)
		{
			count++;
			temp = temp->next;
		}
		cout<<"total nodes: "<<count<<endl;
		
		while(check < count)
		{
			middle++;
			check += 2;
		}
		cout<<"value of middle: "<<middle<<endl;
		temp = head;
		for(int i=0; i<middle-1; i++)
		{
			temp = temp->next;
		}
		cout<<"Middle Node is: "<<temp->data<<endl;
	}
}

void searching(int x)
{
	if(head == NULL)
	{
		cout<<"Empty!!!"<<endl;
	}else{
		node * temp = head;
		int count = 0;
		bool found = false;
		
		while (temp != NULL)
		{
			count++;
			if(temp->data == x)
			{
				cout<<"The position of your desired value is: "<<count<<endl;
				found = true;
				break;
			}
			temp = temp->next;
		}
		if(!found){
			cout<<"We could not find your desired value -1"<<endl;
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
			cout<<temp->data<< " -> ";
			temp = temp->next;
		}
		cout << endl;
	}
}

int main(){
	int key, del, search;
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
//	cout<<"ENter the value which you want to delete: ";
//	cin>>del;
//	delete_specific(del);
//	print();
	cout<<"Enter the value which you want to search: ";
	cin>>search;
	searching(search) ;
	find_middle();
}
