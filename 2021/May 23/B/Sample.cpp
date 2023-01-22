#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int t;

    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int g,s=1,ans=1,beg=1;
        cin>>g;
        for (int j = 2; j < g; j++)
        {
            // if(s<g)   s+= j;

            if(s>g){
                s-= beg;
                // s+=j;
                beg++;
            }            
            else
            {
                ans++;
            }            
            s+=j;
        }
        // Case #x: y
        cout<<"Case #"<<i+1<<": "<<ans <<endl;        
    }
    
    return 0;
}
