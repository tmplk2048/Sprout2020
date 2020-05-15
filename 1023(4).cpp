#include<iostream> 
using namespace std;
int main()
{
	long int n,q;
	
	cin>>n>>q;
	long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
	
	
	
	while(q--)
	{
		long int small,big;
		cin>>small>>big;
		if(small>big)
		{
			swap(small,big);
		}
		
		int max=0,min=1;
		
		int l=0,r=n;
		
		while(l<r-1)
		{
			//cout<<"A";
			int mid=(l+r)/2;
			if(a[mid]<=big&&a[mid+1]>big)
			{
				max=mid;
				break;
			}
			else if(a[mid]<=big&&a[mid+1]<=big)
			{
				l=mid+1;
			}
			else if(a[mid]>big&&a[mid+1]>big)
			{
				r=mid-1;
#include<iostream> 
using namespace std;
int main()
{
	long int n,q;
	
	cin>>n>>q;
	long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	/*for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}*/
	
	
	
	while(q--)
	{
		long int small,big;
		cin>>small>>big;
		if(small>big)
		{
			swap(small,big);
		}
		
		int max=0,min=1;
		int flag1=true,flag2=true;
		if(a[n-1]<big)
		{
			flag1=false;
			max=n-1;
		}
		else if(a[0]>big)
		{
			flag1=false;
			max=-1;
		}
		
		if(a[0]>small)
		{
			flag2=false;
			min=0;
		}
		else if(a[n-1]<small)
		{
			flag2=false;
			min=n;
		}
		
		int l=0,r=n;
		
		while(l<r-1&&flag1==true)
		{
			//cout<<"A";
			int mid=(l+r)/2;
			if(a[mid]<=big&&a[mid+1]>big)
			{
				max=mid;
				break;
			}
			else if(a[mid]<=big&&a[mid+1]<=big)
			{
				l=mid;
			}
			else if(a[mid]>big&&a[mid+1]>big)
			{
				r=mid;
			}
		}
		
		l=0;
		r=n;
		
		while(l<r-1&&flag2==true)
		{
			int mid=(l+r)/2;
			if(a[mid]>small&&a[mid-1]<=small)
			{
				min=mid;
				break;
			}
			else if(a[mid]<=small&&a[mid-1]<=small)
			{
				l=mid;
			}
			else if(a[mid]>small&&a[mid-1]>small)
			{
				r=mid;
			}
		}
		
		
		
		cout<<max-min+1<<endl;
	}
	return 0;
}
