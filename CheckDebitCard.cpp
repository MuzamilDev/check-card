#include<iostream>

using namespace std;

class card{
    private:
    int i;
    int debitCard[15];

    public:
    void getcard()
    {
    cout<<"Enter card number in Vertical Sequence Order "<<endl;
    for( i=0; i<=15; i++)
        cin>>debitCard[i];
    }


    void check(int a=3, int m=5, int v=4, int d=6)
    {
    if(debitCard[0]==a)
    cout<<"AMERICAN EXPRESS "<<endl;
    else if(debitCard[0]==v)
    cout<<"VISA  CARD"<<endl;
    else if(debitCard[0]==m)
    cout<<"MASTER CARD "<<endl;
    else if(debitCard[0]==d)
    cout<<"DISCOVER CARD "<<endl;
    else
        cout<<"Invalid"<<endl;

}
};

int main()
{
   card object;
   object.getcard();
   object.check() ;

    return 0;
}
