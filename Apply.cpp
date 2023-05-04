#include <iostream>
#include<list>
using namespace std;

int main(){

    int n, k;
    list<int> work;
    cin>>n>>k;

    for (int i = 0; i < n; i++) {

        int startWork, finishWork;
        cin>>startWork>>finishWork;
        int ss = finishWork-startWork;
        work.push_back(ss);
        work.sort();

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k ; j++) {
            if(work.size() != 0) {
                int tem = work.front();
                work.pop_front();
                if (tem < i) {
                    work.push_back(tem);
                }
            }
        }
    }

    if(work.size() == 0)
        cout<<"YES";
    else cout<<"NO";

    return 0;
}