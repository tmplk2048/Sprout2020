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
		//cout<<dna.find("ATG",start)<<endl;
		bool is_print=false;
		while(dna.find("ATG",start)>=0&&start<dna.length())
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
			//cout<<start<<" "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<end<<endl;
			if(dna.find("ATG",start+3)<end||dna.find("TAA",start+3)<end||dna.find("TAG",start+3)<end||dna.find("TGA",start+3)<end)
			{
				
			}
			else if(end-start>3&&(end-start)%3==0)
			{
				is_print=true;
				for(int i=start+3;i<end;i++)
				{
					cout<<dna[i];
				}
				
				cout<<endl;
			}
			start+=2;
		}
		
		if(is_print==false)
		{
			cout<<"No gene.\n";
		}
		
	}
}
