//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;
int cow[100001], up[100001];

int main()
{
    int n;
    int i, j;
    
    cin >> n;
    for(i=1;i<=n;i++)
        cin >> cow[i];
    
    for(i=n;i>1;i--){
        if(cow[i-1]<cow[i])
            up[i-1]=i;
        else{
            j=i;
            while(cow[j]<=cow[i-1] && j)
                j=up[j];
            up[i-1]=j;
        }
    }
    
    for(i=1;i<=n;i++)
        cout << up[i] << endl;
    
    return 0;
}
