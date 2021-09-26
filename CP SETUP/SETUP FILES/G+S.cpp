#include<bits/stdc++.h>
using namespace std;

int main(){
	srand(time(NULL));

	int n;
	n=rand()%15+1;
	cout<<n<<endl;
	for (int i=0;i<n;i++){
		cout<<rand()%20+1<<" ";
	}


// for i in range(int(input())):
//     l,r = [int(i) for i in input().split()]
//     if  l%3==0:
//         print(r//3 - l//3 +1)
//     else:
//         print(r//3 - l//3)

	

	return 0;
}