#include <iostream>
int main(){
  using namespace std;
  
  int chest = 42; // decimal integer constant
  int waist = 0x42; // hexadecimal integer constant
  int inseam = 042; // octal integer constant
  
  cout << "Monsieur cuts a sriking figure!\n";
  cout << "chest = " << chest << "\n";
  cout << "waist = " << waist << "\n";
  cout << "inseam = " << inseam << "\n";
  
  return 0;
}
