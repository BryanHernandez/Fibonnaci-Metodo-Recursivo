#include <iostream>

using namespace std;
//Prgrama de fibonacci
 float f4(int n){
 
 if (n==1){
 	return 0;
 }
 else if (n==2)
 {
 	return 1;
 }
 else
 {
 	return f4(n-1)+f4(n-2);
 }
}
 int main()
 {
 	cout <<"Vector de 10 Resultado : "<<f4(10);
 }
