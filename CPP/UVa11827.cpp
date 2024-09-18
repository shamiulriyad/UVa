#include<iostream>
using namespace std;
int GCD(int a, int b){
    if(b==0){
        return a;
    }
	return GCD(b, a % b); 
}
int maxgCD(int n){
    int max_gCD=0;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            int current_gcd =GCD(i, j);
                if(current_gcd >max_gCD){
                    max_gCD = current_gcd;
             }
        }  
    }
     return max_gCD;
}


int main(){
    int n;
    cin >> n;

	cout << n << maxgCD(n) << endl;
}
