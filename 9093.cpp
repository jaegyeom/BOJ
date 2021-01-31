#include <iostream>
#include<stack>

using namespace std;

int main()
{
    stack<char> s;
    int n;
    scanf("%d ",&n);
    for(int i = 0;i<n;i++){
        char c;
        do{
            scanf("%1c",&c);
            if(c==' ' || c=='\n'){
                while(s.empty()==false){
                    cout<<s.top();
                    s.pop();
                }
                cout<<c;
                continue;
            }
            s.push(c);
        }while(c!='\n');
    }
    return 0;
}
