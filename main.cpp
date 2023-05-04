#include <iostream>
#include <map>
#include <list>

using  namespace std;
int main() {
   list<int> lis;
   lis.push_back(3);
   lis.push_back(4);
   lis.push_back(5);
   lis.push_back(8);
   lis.push_back(10);
   lis.push_back(11);

   for(int i=0 ; i< lis.size()-2; i++){
       cout<<lis.front()<<" -> ";
       lis.push_back(lis.front());
       lis.pop_front();

   }
   cout<<endl;
    for(int i=0 ; i< lis.size(); i++){
        cout<<lis.front()<<" -> ";
        lis.push_back(lis.front());
        lis.pop_front();

    }

   return 0;
}

