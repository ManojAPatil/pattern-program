#include<iostream>
using namespace std;

int main(){
      int n=5;
      for(int i=0;i<=n;i++)
      {
      	for(int j=0;j<i;j++){
      	cout<<"*";
	  }
	  cout<<endl;
	  }n--;
	   for(int i=0;i<=n;i++)
      {
      	for(int j=n;j>i;j--){
      	cout<<"*";
	  }
	  cout<<endl;
	  }

 return 0;
}
/*output :
*
**
***
****
*****
****
***
**
*
*/
