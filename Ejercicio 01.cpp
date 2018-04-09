#include <iostream>
using namespace std;
int incremento (int n){
    return n++;
}
void incremento2 (int n,int &p){
    p=p+n;
}
int main(){
  int n=10, p=5;
  incremento(n);
  incremento2(n,p);
  cout<<"Paso por valor: " <<n<<endl;
  cout<<"Paso por referencia: " <<p;
}
