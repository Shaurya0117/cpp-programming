#include <iostream>
using namespace std;
    class Aiml{
public:
int a;
int b;
  inline int fun(int a,int b){
    return a+b;
  } 
  //function overloadig
  int add(int a,int b){
    return a+b;
  }
  double add(double a, double b){
    return a+b;
  }
  // default argument
    int s(int a,int b=3){
        return a+b;
    }
};   

int main(){
Aiml hfh;
int c=hfh.add(1.50,6.13);
cout<<"result:"<<c;
}