// to ham ja sakte hie 4 dir mei or hamare pas hei 5 commands or ham ek hi dir mie 2 commands se zada ni use kar sakte
// to ab NEALWU bhai ne bola ki hamko south or west jane ki zarurat hi ni hei hamko bas har 2 diff commands ke 
// bch mei ek break lene hogi bas to 


// jesus christ samaj hi ni aaya bad mei aake dekta isko 


/*
	to iska ans ye hei ki agar x==y to return x*2
	else return max(2*x,2*y)-1


*/

#include <iostream>
using namespace std;

void solve(){
	int x,y;
	cin>>x>>y;
	int mi=min(x,y);
	int res=2*mi;
	int mx=max(x,y);
	if(x==y){
		cout<<res<<endl;
		return ;
	}


}

int main(){
	int n;
	cin>>n;
	while(n--){
		solve();
	}
	
	
	return 0;
}