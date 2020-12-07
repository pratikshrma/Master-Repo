//it helps us to store pair of values  yaha pe pair kisi bhi type ke ho sakte hei

// to is first que mei karna ye hei ki 
// iska que 19 mei hei vector vali vid

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool  myCompare(pair<int,int> p1,pair<int,int> p2){
	return p1.first<p2.first;
	//agar p1.first chota hie to true pass hoga matlab swap kardo?
}

int main(){
	// pair<int,char> p;
	// p.first = 3;
	// p.second = 'f';

	int arr[]={10,16,7,14,5,3,2,9};
	vector<pair<int,int>> v;//to ye hamne ek vector creat kia hie jiska datatype pair hei BOOM!!  to faida kya hua isse?
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		/*
		pair<int,int> p;
		p.first=arr[i];
		p.second=i;
		
		//acha to ham values ko pair mei store kar sakte hie ok ok cool cool!!!
		TO YE HEI SIMPLE ZINDIGI
		TO BAS BTNE KE LIYE HIE KI HO KYA RAHA HEI PAIR MIE
		*/

		//AB KARTE HEI THODA MODERN WAY
		v.push_back(make_pair(arr[i],i));
	}
	sort(v.begin(),v.end(),myCompare);//par yaha pe kya myCompare mei value ni pass karni?//na isko esa hi use karte
	//hei ye bool function hota hei or ye 2 values lete hei or determine karte hie to values change karni hie ye ni

	for(int i=0;i<v.size();i++){
		arr[v[i].second]=i;
	}
	for(int i=0;i<v.size();i++){
		cout<<arr[i]<<" "<<endl;	
	}




	return 0;
}