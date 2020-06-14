#include<iostream>
using namespace std;
void towerofhanoi(int n, char src, char dest, char help)
{
	if(n==0)
	{
		return ;
	}

	towerofhanoi(n-1,src,help,dest);
	cout<<"Move "<<"ring "<<n<<" from "<<src<<" to "<<dest<<endl;
	towerofhanoi(n-1,help,dest,src);
}
int main() 
{
	int n;
	cin>>n;
	towerofhanoi(n,'A','B','C');
	return 0;
}
