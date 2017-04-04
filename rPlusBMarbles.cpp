#include<bits/stdc++.h>
using namespace std;
//flag initial:2
//flag blue: 0
//flag red: 1


void redblue(int R,int B,int i,int r,int b,int flag,char *arr,char* prin){
//	if(flag==2){
//		int a[r+b];
//		redblue(r,b,0,arr);
//		redblue(r,b,1,arr);
//		
//	}


	
	
	if(flag==0&&b!=0){
		prin[i]='b';
		b=b-1;
		redblue(R,B,i+1,r,b,0,arr,prin);
		redblue(R,B,i+1,r,b,1,arr,prin);
		
	}
	
	else if(flag==1&&r!=0){
		prin[i]='r';
		r=r-1;
		redblue(R,B,i+1,r,b,0,arr,prin);
	}
	
	if(i==R+B-1&&r==0&&b==0){
		for(int j=0;j<R+B;j++){
			cout<<prin[j]<<" ";
		}
		cout<<endl;
		
	}
	
}

int main(){
	int r,b;
	cout<<"Enter the number of red balls:";
	cin>>r;
	cout<<"Enter the number of blue balls: ";
	cin>>b;
//	char mar[r+b];
//	for(int i=0;i<r+b;i++)
//	{
//		cin>>mar[i];
//	}
	char mar[r+b];
	char prin[r+b];
	int count=0;
	redblue(r,b,0,r,b,0,mar,prin);
	redblue(r,b,0,r,b,1,mar,prin);
	
	
	
}
