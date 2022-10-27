#include <iostream>
using namespace std;
char znak;
int a,b;
int reg[10];

int main()
{
    while(cin >> znak >> a >> b)
    {
    if(znak=='z') reg[a]=b;
    else if(znak=='+') cout << reg[a]+reg[b];
    else if(znak=='-') cout << reg[a]-reg[b];
    else if(znak=='*') cout << reg[a]*reg[b];
    else if(znak=='/') cout << reg[a]/reg[b];
    else if(znak=='%') cout << reg[a]%reg[b];
    cout<<endl;
    }
    return 0;
}
