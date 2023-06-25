#include<iostream>
using namespace std;
////////////////////////////////////////

const int SZ = 10;

class chingre
{
    private:
    int arr[SZ];
    public:
    int & operator [] (int n)
    {
        if(n<0 && n>=SZ)
        cout<<"\n Array is out of bounds !!! ";
        return arr[n];
    }

};
////////////////////////////////////////////////////

int main()
{
    chingre ch;
    for(int i = 0; i<SZ; i++)
    ch[i]=i*10;
    
    for(int j=0; j<SZ; j++)
    {
        int temp;
        temp=ch[j];
        cout<<"\n Element at "<<j<<" position is : "<<temp;

    }
    return 0;
}