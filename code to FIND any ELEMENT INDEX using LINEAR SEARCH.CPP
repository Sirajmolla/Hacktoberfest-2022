               //CODE TO FIND ANY ELEMENT PRESET OR NOT AND ALSO ELEMENT INDEX  IN ARRY USING LINEAR SEARCH

#include <iostream>
using namespace std;

int main() {
	int n,key;
	cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
	cin>>n;
	int arr[n];
	cout<<"ENTER THE ELEMENTS OF THE ARRAY"<<endl;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	cout<<"ENTER THE NO./KEY YOU WANT TO CHECK IS IT PRESENT OR NOT "<<endl;
	cin>>key;
	 
	for(int i=0;i<n;i++)
	{
	    if(arr[i]==key)
	    {
	        cout<<"YES IT IS PRESENT AT INDEX  "<<i<<endl;
	        return 0;
	    }
	}
	cout<<"KEY IS NOT PRESENT IN THE ARRAY"<<endl;
	return 0;
}
