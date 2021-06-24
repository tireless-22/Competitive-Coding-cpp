#include<bits/stdc++.h>
using namespace std;

// constructor will called only when while creating a object
// how many objects that we will create a object that many times constructor will be called

// if we did not create constructor it will take by a default constructor
// constructor has the same name as the class name 

// according to the no of argument that a particulat obect contains according to that the particulat constructor will be called



class clsName{
public:

	clsName(){

		cout<<"zero arguments"<<endl;
	}
	clsName(int s){

		cout<<"one argument arguments"<<s<<endl;
	}

	clsName(int x , int y){
	cout<<"two arguments"<<x<<"  "<<y<<endl;
	}

};


int main(){
	clsName c1;
	clsName c2(3);
	clsName c3(4,5);



	return 0;
}