#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int list [n];
    for (int i = 0; i < n; ++i)
       cin>> list[i];

   vector<int> LIS (n,1);
   vector<int> nodePr(n,-1);
   int max = 1;
   int index_max = 0;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if(list[j] < list[i] && (LIS[j]+1) >= LIS[i]){
                LIS[i] = LIS[j]+1;
                nodePr[i]=j;
            }
        }
        if(LIS[i]>max){
            max = LIS[i];
            index_max = i;
        }
    }
    vector<int> arr(n,0);
    while ( index_max > -1){
        arr[index_max] = 3;
        index_max = nodePr[index_max];
    }
    for(int s: arr){
        if(s<1)
            cout<<1;
        else
            cout<<s;
    }
    return 0;
}

