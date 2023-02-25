#include <iostream>
#include <algorithm>
using namespace std;



int main() {
  int n, m;
  cin>>n>>m;
  pair<int, int> a[m];
  for(int i = 0; i<m; i++){
    cin>>a[i].first>>a[i].second;
  }
  sort(a+0, a+m);
  int total = 0, milk = 0;
  //REMEMBER PLAN!!!
  //How problem works: 30+100+180+320 = 350+280 = 630
  //int i = accesses each pair
  //int j = adds unit rate until all milk from that farmer is sold or demand is reached
  //int milk = keeps track of how many milk you have
  //int total = total cost
  int i = 0;
  while(milk<n){
  int j = 0;
  while(j<a[i].second){
  if(milk==n){
    break;
  }
  total = total + a[i].first;
  //0+3
  j++;
  milk++;
  }
  i++;
  }
  cout<<total;
}