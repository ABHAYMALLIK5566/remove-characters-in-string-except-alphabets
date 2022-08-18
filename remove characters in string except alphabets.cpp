#include<iostream>
using namespace std;

char arr[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

string u_inp;
char str;

void user_input()
{
    cout<<"Enter :";
    cin>>u_inp;
}


void func(string &u_inp, int N)
{
    for(int i = 0; i < N; i++)
    {
        str = u_inp[i];
        for (int i = 0; i < 52; i++)
        {
            if(str == arr[i])
            {
                cout<<str;
            }
            else
            {
                continue;
            }
        }
        
    }
}

int main()
{
    user_input();
    int N = u_inp.length();
    func(u_inp, N);
    return 0;
}