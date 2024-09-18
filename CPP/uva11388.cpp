#include<iostream>
using namespace std;
void GcdLcm(int  g, int  l){
    if(l%g==0){
        cout << g << " " << l << endl;
    }
    else{
        cout << -1 << endl;
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        int g, l;
        cin >> g >> l;
       GcdLcm(g, l);
    }

}