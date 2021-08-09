#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d,h;
		cin>>n>>d>>h;
		int level=0;
		bool checker=false;
		
		for (int i=0;i<n;i++){
			int temp;
			cin>>temp;
			if (temp>0){
				level+=temp;
				if(level>h){

					checker=true;
					// break;
				}
			}
			else {
				if(d!=0){
					if(level<=d){
						level=0;
					}
					else{
						level-=d;
					}

				}
				
			}
		}


		if(checker==true){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}





		
		
	}	
	return 0;
}