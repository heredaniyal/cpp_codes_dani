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
			
class LinkList
			{
			public:
				node *head, *tail ;
				int size = 0;
				LinkList()
				{
				
			head = tail = NULL;
			int size = 0;
		}
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
			
//void palindrome()
//			{
//				bool palondrime = true;
//				if(head == NULL)	
//				{
//					cout<<"Empty!!!"<<endl;
//				}
//				else{
//					node *temp = head;
//					int array[size];
//					int i = 0;
//					int check=size-1;
//					
//					while(temp != NULL)
//					{
//						array[i] = temp->data;
//						i++;
//						temp = temp->next;
//					}
//					temp = head;
////											for(int c = 0; c<size;c++)
////						{
////							cout<<endl<<array[c];
////							
////						}
////						cout<<"value of Check: "<<check;
//					while(temp != NULL)
//					{
//
//						if(array[check] != temp->data)
//						{
//							cout<<"\nLinkList is not a Palondrome!!!"<<endl;
//							palondrime = false;
//							break;
//						}
//						temp = temp->next;
//						check--;
//					}
//					if(palondrime)
//					{
//						cout<<"\nCongrats! LinkList is a Palondrome"<<endl;
//					}
//				}
//			}

void combine(LinkList &one, LinkList &two)
			{
//				cout<<one.head;
				if(one.head == NULL && two.head == NULL)
				{
					cout<<"\nBoth LinkLists have not been created!!!\n";
				}
				else{
//					LinkList combined;
					node *temp1 = one.head;
					node *temp2 = two.head;
					node *check;
					int smallest;
					
//					while(temp1 != NULL)
//					{
//						cout<<"loop Check";
//						smallest = temp1->data;
//						check = temp1;
//						while(check != NULL)
//						{
//							
//							if(smallest > check->data )
//							{
//								smallest = check->data;
//								check->data = temp1->data;
//								temp1->data = smallest;
////								check->data = smallest;
//								
//							}
//							check = check->next;
//						}
//						temp1 = temp1->next;
////						temp2 = temp2->next;
//					}
//					while(temp2 != NULL)
//					{
//						smallest = temp2->data;
//						check = temp2;
//						while(check != NULL)
//						{
//							
//							if(smallest > check->data )
//							{
//								smallest = check->data;
//								check->data = temp2->data;
//								temp2->data = smallest;
////								check->data = smallest;
//								
//							}
//							check = check->next;
//						}
//						temp2 = temp2->next;
//					}
//					temp1 = one.head;
//					while(temp1 != NULL)
//					{
//						cout<<"\nChecking values of first: "<<temp1->data<<endl;
//						temp1 = temp1->next;
//					}
					
//					temp2 = two.head;
//					while(temp2 != NULL)
//					{
//						cout<<"\nChecking values of second: "<<temp2->data<<endl;
//						temp2 = temp2->next;
//					}
					temp2 = two.head;
					while(temp2 != NULL)
					{
						one.enque(temp2->data);
						temp2 = temp2->next;
					}
					while(temp1 != NULL)
					{
						cout<<"loop Check";
						smallest = temp1->data;
						check = temp1;
						while(check != NULL)
						{
							
							if(smallest > check->data )
							{
								smallest = check->data;
								check->data = temp1->data;
								temp1->data = smallest;
//								check->data = smallest;
								
							}
							check = check->next;
						}
						temp1 = temp1->next;
//						temp2 = temp2->next;
					}
					
					temp1 = one.head;
					while(temp1 != NULL)
					{
						cout<<"\nChecking values overall: "<<temp1->data<<endl;
						temp1 = temp1->next;
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
						cout<<temp->data<<"-->>";
						size++;
						temp = temp->next;
					}
				}
			}
			};
int main()
{
	LinkList first, second;
//	second.print();
	first.print();
	first.push(46);
	first.enque(77);
	first.push(18);
	first.enque(48);
	first.push(8);
	first.enque(99);
	first.push(56);
	first.enque(0);
	first.push(13);
	first.enque(3);
	first.push(29);
	first.enque(12);
	first.print();
	
//	LinkList second;
	second.print();
	second.push(77);
	second.enque(61);
	second.push(96);
	second.enque(11);
	second.push(37);
	second.enque(86);
	second.push(26);
	second.enque(101);
	second.push(5);
	second.enque(111);
	second.push(7);
	second.enque(122);
	second.print();
//	palindrome();

	first.combine(first, second);
}
