#include<iostream>
using namespace std;


void printMaxActivities(int s[], int f[], int n) 
{ 
    int i, j; 
  
    cout<<"\nFollowing activities are selected n"; 
  
   
    i = 0; 
    cout<<"\n"<<i;
  
    
    for (j = 1; j < n; j++) 
    { 
      
      if (s[j] >= f[i]) 
      { 
          cout<<"\n"<<j; 
          
      } 
    } 
} 

int main(){
int start[50];
int finish[50];
int n,temp,i,j;

cout<<"\nEnter the no of activities::";
cin>>n;

cout<<"\nEnter the start time::";
for(i=0;i<n;i++){
cout<<"\nst:"<<i+1<<":";
cin>>start[i];
}

cout<<"\nEnter the finish time::";
for(i=0;i<n;i++){
cout<<"\nft:"<<i+1<<":";
cin>>finish[i];
}



for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(finish[i]>finish[j])
			{
				temp  =finish[i];
				finish[i]=finish[j];
				finish[j]=temp;
			}
		}
	}

cout<<"\nStart Time is:";
for(i=0;i<n;i++){
cout<<start[i]<<" ";
}
cout<<"\nFinish Time is:";
for(i=0;i<n;i++){
cout<<finish[i]<<" ";
}
printMaxActivities(start, finish, n);

}

