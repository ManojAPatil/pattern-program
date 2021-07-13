#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int a=1;a<=n;a++)
    {
    	for(int i=1;i<=n;i++)
    	{
    		cout<<"*";
		}cout<<endl;
		for(int j=1;j<=2*a-1;j++)
		{
			cout<<" ";
		}
		
	}
}
/* output:
*****
 *****
  *****
   *****
    *****
*/
