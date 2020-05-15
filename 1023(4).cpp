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
		
			
		int min=0,max=n-1;//index
    		int left = 0, right = n - 1;
   		while (left <= right) {
    	
    		int mid = (left + right) / 2;
        	if (small<=a[mid]&&small>=a[mid-1]){
        		min=mid;
        		break;
			}
        	else if (small<=a[mid]&&small<=a[mid-1])
        		right = mid - 1;
        	else
        		left = mid + 1;
       		}
    
    	
    		left = 0;
		right = n - 1;
   		while (left <= right) {
    	
    		int mid = (left + right) / 2;
        	if (a[mid]<big&&a[mid+1]>=big)
    		{
    			max=mid;
    			break;
			}
        	else if (big<=a[mid])
        		right = mid - 1;
        	else
        		left = mid + 1;
    	}
		
		if(big<a[0])
		{
			cout<<0<<endl;
		}
		else if(small>a[n-1])
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<max-min+1<<endl;
		}
		//cout<<min<<" "<<max<<endl;
	}
	return 0;
}
