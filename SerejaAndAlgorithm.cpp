#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string given;
    cin >> given;
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int size = r - l + 1;
        string hi = given.substr(l, size);
        int x, y, z;
        for (auto element : hi)
        {
            if (element == 'x')
                x++;
            if (element == 'y')
                y++;
            else
            {
                z++;
            }
        }
        x -= size/3;
        y -= size/3;
        z -= size/3;
        if(size%3 == 1)
        z -= 1;
        else if(size%3 == 2){
            z -= 1;
            y -= 1;
        }
        if(x == 0 && y == 0 && z == 0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}
