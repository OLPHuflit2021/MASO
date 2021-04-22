#include <bits/stdc++.h>

using namespace std;


int n, k;
bool p[100000+10];

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        p[i] = false;
    }
    for (int i = 0; i < n; i++ )
    {
        int temp;
        cin >> temp;
        p[temp] = true;
    }

    int res = 0;
    int i = 1;
    while(res != k){
        if (!p[i]) {
            cout << i << endl;
            res++;
        }
        i++;
    }

    return 0;
}
