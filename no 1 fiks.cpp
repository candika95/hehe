#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string str;
long long i,j;

int main(){
	cout<<"Masukan kata-kata yang ingin diolah: ";
	cin>>str;
	char arr[str.length()];
	strcpy(arr,str.c_str());
	
	for(i=0;i<str.length();i++){
		if(arr[i]=='*'){
			for(j=i+1; ;j++){
				if(arr[j]=='#'){
					cout<<endl;
				}
				else if(arr[j]=='?'){
					break;
				}
				
				if(arr[j]!='#'){
					cout<<arr[j];
				}
				
			}
		}
	}

	return 0;
}
