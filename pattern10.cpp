#include<iostream>
using namespace std;

int main(){
     int n=5;
     for(int i=1;i<=n;i++)
     {
     	for(int k=1;k<=n-i;k++){
     	cout<<" ";
     	}
     	for(int j=1;j<=2*i-1;j++){
		  cout<<"*"; 
		 }
		 cout<<endl;
	 }
     n--;
     for(int i=n;i>=1;i--)
     {
     	for(int k=5-i;k>=1;k--){
     	cout<<" ";
     	}
     	for(int j=2*i-1;j>=1;j--){
		  cout<<"*"; 
		 }
		 cout<<endl;
	 }
	 cout<<endl;
 return 0;
}
/*output :
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *  
*/
