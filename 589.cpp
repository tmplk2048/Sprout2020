#include <iostream>
#include <string>
using namespace std;

struct Container {
    int index; // 貨櫃編號
    int weight; // 貨櫃重量
    Container *next; 
};
Container* insert(Container* head, int index, int weight)
{
	Container *temp=new Container;
	temp->index=index;
	temp->weight=weight;
	
	if(head==nullptr)
	{
		//cout<<"A\n";
		head=temp;
		temp->next=nullptr;
		return head;
	}
	
    Container *cur = head;
    bool flag=1;
    while (cur!=nullptr) {
        
		if(cur->next==nullptr)
        {
        	if(cur->index<index)
        	{
        		//cout<<"B\n";
        	temp->next=cur->next;
        	cur->next=temp;
			}
        	
        	else if(cur->index>index)
        	{
        		head=temp;
        		temp->next=cur;
			}
        	break;
		}
		else if(cur->index<index&&index<cur->next->index)
		{
			//cout<<"C\n";
			temp->next=cur->next;
			cur->next=temp;
			break;
		}
		else if(index<cur->next->index&&flag==1)
        {
        	//cout<<"D\n";
        	temp->next=cur;
        	head=temp;
        	break;
		}
		
		
		flag=0;
		cur=cur->next;
    }
    
    return head;
	
	
}
Container* remove(Container* head, int max_weight)
{
	
	if(head->weight==max_weight)
	{
		Container *temp=head;
		head=head->next;
		delete temp;
		return head;
	}
	
	Container *cu=head;
	Container *tail;
	while(cu->next!=nullptr)
	{
		tail=cu;
		cu=cu->next;
	}
	if(tail->next->weight==max_weight)
	{
		Container *temp=tail->next;
		tail->next=nullptr;
		delete temp;
		
	}
	
	Container *cur = head;
    
    while (cur->next!=nullptr) {
        //cout<<cur->next->index<<" "<<cur->next->weight<<endl;
		if(cur->next->weight==max_weight&&cur->next->next==nullptr)
		{
			//cout<<"A"<<endl;
			Container *temp=cur->next;
			cur->next=cur->next->next;
			delete temp;
			
		}
		else if(cur->next->weight==max_weight)
		{
			//cout<<"B"<<endl;
			Container *temp=cur->next;
			cur->next=cur->next->next;
			delete temp;
		}
		
		cur=cur->next;
    }
    return head;
}

// your code will be put here

int main() {

    Container *head = nullptr;
    int N;
    cin>>N;
    while (N--) {
        string cmd;
        cin >> cmd;
        if (cmd == "insert") {
            int index, weight;
            cin >> index >> weight;
            head = insert(head, index, weight);
        } else if (cmd == "remove") {
            int max_weight;
            cin >> max_weight;
            head = remove(head, max_weight);
        }
    }

    // list all
    Container *cur = head;
    while (cur!=nullptr) {
        cout << cur->index << " " << cur->weight << endl;
        cur = cur->next; 
    }

}
