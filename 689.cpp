#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string dna;
	while(cin>>dna)
	{
		int start=0,end=0;
		bool flag=false;
		while(end<dna.length()&&start<dna.length())
		{
			start=dna.find("ATG",start);
			if(start>dna.length())
			{
				break;
			}
			int arr[3]={};
			int tag=0,taa=1,tga=2;
			arr[tag]=dna.find("TAG",start);
			arr[taa]=dna.find("TAA",start);
			arr[tga]=dna.find("TGA",start);
			
			sort(arr,arr+3);
			
			for(int i=0;i<3;i++)
			{
				if(arr[i]>0)
				{
					end=arr[i];
					break;
				}
			}
		
			if(end-start>3&&(end-start)%3==0)
			{
				flag=true;
				
				
				for(int i=start+3;i<end;i++)
				{
					cout<<dna[i];
				}
				
				cout<<endl;
			}
			start+=2;
		}
		
		if(flag==false)
		{
			cout<<"No gene.\n";
		}
		
	}
}
