#include<iostream>
using namespace std;

int main(){
   int n=5,k=n-1;
   for(int i=1;i<=n;i++)
   {
   	for(int a=1;a<=k;a++){
	   cout<<" ";
	   }k--;
   	for(int j=1;j<=i;j++)
   	{  
   	    if(i==3&&j==2){
		  cout<<" ";
		  }else if(i==4&&j==2){
		  cout<<" ";
		  }else if(i==4&&j==3){
		  	cout<<" ";
		  }else{
   		  cout<<"*";
		  }
	   }cout<<endl;
   }
return 0;
}
/*output:
    *
   **
  * *
 *  *
*****
*/
