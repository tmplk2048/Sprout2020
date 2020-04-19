   #include<iostream>
   using namespace std;
   struct Student
   {
   	char name[100];
	char gender;
	int score;
   };
    double girls_average(Student ss[],int size){
    	double sum=0,count=0;
		for(int i=0;i<size;i++)
		{
			if(ss[i].gender=='F')
			{
				sum+=ss[i].score;
				count++;
			}
		}
		if(count==0)
		{
			return -1;
			
		}
		else
		{
			return sum/count;
		}
		
    	
    	
	} 
    
    
    double boys_average(Student ss[],int size){
    	double sum=0,count=0;
		for(int i=0;i<size;i++)
		{
			if(ss[i].gender=='M')
			{
				sum+=ss[i].score;
				count++;
			}
		}
		if(count==0){
			return -1;
		}
		else{
			return sum/count;
		}
		
    	
	}
    void print(Student s){
    	
    	cout<<s.name<<" ["<<s.gender<<"] : "<<s.score<<"\n";
	}
	int main(){
		
		int s;
		cin>>s;
		{
			Student ss[s];
			for(int i=0;i<s;i++)
			{
				cin>>ss[i].name;
				cin>>ss[i].gender;
				cin>>ss[i].score;
			}
			
			cout<<girls_average(ss,s)<<endl;
			cout<<boys_average(ss,s)<<endl;
			for(int i=0;i<s;i++)
			{
				print(ss[i]);
			}
			
		}
	
	}
	
	
