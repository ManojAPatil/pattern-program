#include<iostream>
using namespace std;

int main(){
    int n=5,k=5,m=1;
    for(int a=1;a<=n;a++)
    {
    	for(int i=1;i<=k;i++)
    	{
    		cout<<"*";
		}cout<<endl;
		k--;
		for(int j=1;j<=m;j++)
		{
			cout<<" ";
		}m++;
	}
return 0;
}
/*output:
*****
 ****
  ***
   **
    *
*/
