#include <iostream>

#include <string>

using namespace std;

int main()
{
    int n;
    string w;

    int x=0;
    cin>>n;
    getline(cin,w);

    for(int i=1;i<=n;i++)
    {

        string s;
        getline(cin,s);
        for(int j=0;j<s.length()-1;j++)
        {
            if(s[j]=='+'&&s[j+1]=='+')
                {x++;
                }
                if(s[j]=='-'&&s[j+1]=='-')
                {x--;
                }


        }

    }
    cout <<x;
    return 0;
}
