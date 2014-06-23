#include<iostream>
using namespace std;
void print(int i)
{
	if(i%2==1)
	cout<<"X";
	else
	cout<<"0";
	}
	
main()
{
	int i,j,k,row,col,r,c,l,m,t;
	char a[10][10];
	
	cin>>row>>col;
	
	r=row-1;
	c=col-1;
	for(int i=1;i<=((row/2)+1);i++)
	{
		t=i;
			for(j=t;j<=r;j++)
			{
				if(i%2==1)
				a[j][t]='x';
				else
 				a[j][t]='o';
			}
			r--;
		
			for(k=t;k<=c;k++)
			{
				if(i%2==1)
				a[j][k]='x';
				else
				a[j][k]='o';
			}
			c--;
		
			for(l=k;l>=t+1;l--)
			{
				if(i%2==1)
				a[l][k]='x';
				else
				a[l][k]='o';
			}
			
			for(m=k;m>=t+1;m--)
			{
				if(i%2==1)
				a[l][m]='x';
				else
				a[l][m]='o';
			}
		
	}
	
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		cout<<a[i][j];
		cout<<"\n";
	}

	
return 0;
}
