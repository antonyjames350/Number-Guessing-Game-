#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
  srand(time(0));
  int r, g, h=0, a, s;
  string t;
  r = rand() % 1000 + 1;
  cout << "Welcome to the number guessing game\n";
  tt:
  r = rand() % 1000 + 1;
  cout <<"High Score : "<<h<<endl;        
  g=0;
  a=0;
  while (r!=g){
    cout << "Guess the number\n";
    cin>>g;
    a++;
    
    if (g>r){
      cout << "Too high, try a  gain\n";
    }
    else if (g<r) {
      cout << "Too low, try again\n";
    }
    else {
      cout << "Congratulations, you guessed it right!\n";
    }
  }
  s = 1000-a;
  if (h<s){
    h=s;
    cout<<"New High score : "<<h<<endl;
  }
  else {
    cout <<"Score : "<<s<<endl;
  }
  cout << "Type 'yes' to Try again\n";
  cin>> t;
  if (t == "yes") goto tt;
  
  return 0;
}
