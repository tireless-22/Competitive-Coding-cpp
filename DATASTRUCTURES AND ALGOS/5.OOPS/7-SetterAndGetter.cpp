#include <iostream>
using namespace std;
// setter

// we can able to use the private variables inside the class 
// setter funtion is used the set or send the values to a private thing 
// how can we able to change the private variable for other class is

// we will create a public funtion (setterName) we will send the arguments to that method
// as we told that we can access the private variables within the class easily ,so by using these
// both we can able to set the value to the private variable

// the return type of setter is void because we are not returning any thing from the setter 
// we will do that by using the getter function


// getter



// getter functioon will return the private thing by creating a public getter in this public 
// we can access the private as the both are preasent in the same class
class clsName{

private:
  int privateVariable ;
public:
  void setter(int p){
    privateVariable=p;

  }
  int getter(){
    return privateVariable;

  }

};
int main(){
  clsName c;

  c.setter(43);
  cout<<c.getter();



  return 0;
}