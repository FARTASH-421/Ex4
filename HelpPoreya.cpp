#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <set>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    list<string> fistList, temp;
    set<string> result;
    int n, sizeBefore;
    string str;
    cin>> n;

    for(int i = 0; i< n; ++i){
        cin>>str;
        fistList.push_back(str);
    }

    for (int i = 0; i < n; ++i) {
        cin>>str;
        sizeBefore = result.size();
        result.insert(fistList.front()+","+str);

        if(result.size() > sizeBefore){
           fistList.pop_front();
        }
        else{
           result.insert(fistList.back()+","+str);
            if(result.size()>sizeBefore){
                fistList.pop_back();
            } else{

                fistList.push_front(fistList.back());
                fistList.pop_back();
            }
        }
    }

    cout<<result.size();
    return 0;
}