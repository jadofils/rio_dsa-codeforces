#include <iostream>
using namespace std;
int main (){
int a[5]={3,6,8,9,10};
int mid,med,key,end=4,beg=0;
cout<<"enter the targeted key number";
cin>>key;
med=-1;
while(beg<=end){
int tot=beg+end;
mid=tot/2;
if(key==a[mid]){
	med=1;

	break;
}
else if(key>a[mid]){
	beg=mid+1;
	
}
else if(key,a[mid]){
	end=mid-1;
	
}}
if(med==1) cout<<"it's found";
return 0;
}


