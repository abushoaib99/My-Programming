#include<cstdio>
#include<stack>

using namespace std;

int t;
char tmp;
stack<char> op;
int main()
{
    scanf("%d%c",&t,&tmp);
    for(int z=0;z<t;z++){
        bool A=true;
        while(scanf("%c",&tmp)){
            if(tmp==')'){
                if(op.empty()){
                    A=false;
                }
                else if(op.top()=='(')
                    op.pop();
                else{
                    A=false;
                }
            }
            else if(tmp==']'){
                if(op.empty()){
                    A=false;
                }
                else if(op.top()=='[')
                    op.pop();
                else{
                    A=false;
                }
            }
            else if(tmp=='('||tmp=='[')
                op.push(tmp);
            else
                break;
        }
        if(!op.empty())A=false;
        if(A)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
