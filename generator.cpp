#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	int min_n = atoi(argv[1]);
	int max_n = atoi(argv[1]);
	int n = rnd.next(min_n, max_n);
	cout<<n<<endl;
	for(int i=0;i<n;i++)
    {
        int a = rnd.next(1,1000000);
        cout << a << endl;
    }
    return 0;
}