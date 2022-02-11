#include<bits/stdc++.h>
using namespace std;

int main(){
	srand(time(NULL));

	int t=rand()%1000+1;
	cout<<t<<endl;

	
	while(t--){
		string s2;
		string s;



		int n=rand()%100+1;

		for( int i=0;i<n;i++){
			int temp=rand()%10;
			s=s+to_string(temp);

		}
		
		for(int i=0;i<n;i++){
			s2=s2+s[i];
		}


		int temp2=rand()%2;
		int temp3=rand()%10;
		
		if(temp2==0){
			s2+=to_string(temp3);
		}



		for(int i=s.size()-1;i>=0;i--){
			s2=s2+s[i];

		}
		cout<<s2<<endl;


		
	}





	return 0;
}