#include <iostream>
using namespace std;
int main(){
    pair <pair<int, char>, bool> hello[10];
    tuple <char, string, int> bay;
    hello[0]={{5, 'a'}, true};
    cout<<hello->first.first;

    cout<<"\n";

    bay= make_tuple('p',"noo",15);
    cout<<get<0>(bay)<<" "<<get<1>(bay)<<" "<<get<2>(bay);


}