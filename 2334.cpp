#include<iostream>
//#include<string>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str)){
		
	
	
	int n;
	cin>>n;
	while(n--)
	{
		string command;
		cin>>command;
		if(command=="insert")
		{
			int i;
			cin>>i;
			string s;
			//cin.get();
			cin>>s;
			str.insert(i,s);
		}
		else if(command == "delete")
		{
			int l,r;
			cin>>l>>r;
			//cin.get();
			str.erase(l-1,r);
		 } 
		 else if(command == "reverse")
		 {
		 	int l,r;
		 	cin>>l>>r;
		 	//cin.get();
		 	for(int i=0;i<(r-l)/2+1;i++)
		 	{
		 		
		 		swap(str[l-1+i],str[r-1-i]);
		 		
			 }
		 }
		 cin.get();
		 //cout<<endl<<str<<endl<<endl;
		 
    } 
    cout<<str<<endl;
    
	}
 } 
