#include <iostream>

using namespace std;

int main(){
  int students, subs;
  cin>>students>>subs;
  int s[students]; //Problem point rewards
  int sums[students]; //Counts how many times a problem was solved
  for(int i = 0; i < students; i++){
    cin>>s[i];
  }
  int l, r;
  for(int i = 0; i < students; i++){
    sums[i] = 0;
  }
  for(int i = 0; i < subs; i++){
    cin>>l>>r;
    for(int k = l; k <= r; k++){
      sums[k] ++;
    }
  }
  int finalOrder[students]; //Final order of students
  int maxCounts = 0; //Max of problem solves
  int minPoints = 1e9; //Min of problem points
  for(int i = 0; i < students; i++){
    if(s[i] < minPoints)
  }
}
