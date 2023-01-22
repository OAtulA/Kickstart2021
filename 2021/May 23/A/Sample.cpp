// #include <bits/std++.h>
#include <string>
#include <iostream>

using namespace std;

void operate( int *n,int *k,string s,int *x)
{
    int f = *n / 2;
    int pos[f + 1];
    for (int i = 0; i < f; i++)
    {
        pos[i] = int(s[i]) - int('a') + 1;
    }
    int ans=0;
    for (int i = 0; i < f; i++)
    {
        ans += pos[i];
    }
    
    // if (**n%2== 0)
    // {
    //     ans += f
    // }
    if(*n%2== 1)
    {
        ans+= int(s[*n%2 + 1]) - int('a') +1;
        ans += f;
    }
    cout<<"Case #" <<*x << ": "<< ans <<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    int t, k, n;
    string s = "";
    cin >> t;

    for (int x = 1; x < t + 1; x++)
    {
        cin >> n >> k;
        getline(cin, s);
        operate(&n, &k, s, &x);
    }
    return 0;
}
