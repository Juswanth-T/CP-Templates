// Juswanth T
 
#ifdef Local
#include "Resource\debug.h"
#else 
#define dbg(...)
#endif
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define float long double
#define decimal(x) fixed << setprecision(x)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


struct testcase{
    int a,n,d;
};

int random_l_to_r(int l,int r){
    return (rand() % (r - l + 1)) + l;
}
testcase generateTestCase(){
    
    testcase randomTest;
    randomTest.a = random_l_to_r(1,100000);
    randomTest.n = random_l_to_r(1,100000);
    randomTest.d = random_l_to_r(-100000,100000);
    return randomTest;

}
int bruteForce(testcase T){
    
    int a = T.a;
    int n = T.n;
    int d = T.d;
    
    return a + n + d;
}
int optimizedSolution(testcase T){
    int a = T.a;
    int n = T.n;
    int d = T.d;

    return a + n + 2*d;
}

bool debugger(){
    testcase random = generateTestCase();
    int ans1 = bruteForce(random);
    int ans2 = optimizedSolution(random);
    if(ans1 != ans2) {
        cout<<"Correct ans: "<<ans1<<endl;
        cout<<"Your ans: "<<ans2<<endl;
        cout<<random.a<<" "<<random.n<<" "<<random.d<<endl;
        return 1;
    }
    else return 0;
    
}

  
 int32_t main(){
  fast;
  int tc;
  tc = 100;
  srand(time(0)); 
  for(int t = 1 ; t <= tc; t++){
    if(debugger()) break;
  }
   
}


