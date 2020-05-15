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
			}
		}
		
		l=0;
		r=n;
		
		while(l<r-1)
		{
			int mid=(l+r)/2;
			if(a[mid]>small&&a[mid-1]<=small)
			{
				min=mid;
				break;
			}
			else if(a[mid]<=small&&a[mid-1]<=small)
			{
				l=mid+1;
			}
			else if(a[mid]>small&&a[mid-1]>small)
			{
				r=mid\-1;
			}
		}
		//big
		if(big>a[n-1])
		{
			max=n-1;
		}
		/*else if(big==a[n-1])
		{
			max=n-2;
		}*/
		else if(big<a[0])
		{
			max=0;
		}
		
		//small
		if(small<=a[0])
		{
			min=0;
		}
		else if(small>a[n-1])
		{
			min=n-1;
		}
		
		
			cout<<max-min+1<<endl;
		
		
		
	}
	return 0;
}
