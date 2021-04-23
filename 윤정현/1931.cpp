#include <bits/stdc++.h>
using namespace std;

int main(){
  pair<int, int> s[100005];
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &s[i].second, &s[i].first);
  }
  sort(s, s+N);
  int ans = 0, t=0;
  for(int i=0; i<N; i++){
    if(t > s[i].second) continue;
    ans++;
    t = s[i].first;
  }
  printf("%d", ans);

  return 0;
}
