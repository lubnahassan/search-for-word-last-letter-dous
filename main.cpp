#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int counter=0;
    ifstream file ("word.txt");
    while (!file.eof())
    {
        string s;
        file >>s;
       int n=s.length();
       if (n >= 4 && s[n-4]=='d' && s[n-3]=='o' && s[n-2]=='u' && s[n-1]=='s')
       {
            cout<<s<<endl;
            counter++;
       }
    }
     if (counter==0)
       {
           cout<<"None !!";
       }
    else
    {
        cout<<endl<<"Number of words : "<<counter;
    }
    file.close();
    return 0;
}
