#include<bits/stdc++.h>
using namespace std;


bool ratInMaze(char maze[10][10],int soln[10][10],int i,int j,int m,int n){

	// base condition
	if(i==m and j==n){
		soln[i][j]=1;
		for (int i=0;i<=m;i++){
			for(int j=0;j<=n;j++){
				cout<<soln[i][j]<<"  ";
			}
			cout<<endl;
		}
		cout<<endl<<endl;


		return true;
		// we will keep the parent caller as true,bcz any of the child must give a true

	}


	if(i>m or j>n){
		return false;
	}

	if(maze[i][j]=='x'){
		return false;
	}
	soln[i][j]=1;

	bool rightSide=ratInMaze(maze,soln,i,j+1,m,n);
	bool downSide=ratInMaze(maze,soln,i+1,j,m,n);
	soln[i][j]=0;


	

	if(rightSide or downSide){
		// we called for the 
		return true;

	}
	


	return false;
}


int main(){

	char maze[10][10]={
		"oooo",
		"ooxo",
		"ooox",
		"oxoo",
	};

	int soln[10][10]={0};
	int m=4;
	int n=4;


	bool res=ratInMaze(maze,soln,0,0,m-1,n-1);
	cout<<res;





	return 0;
}