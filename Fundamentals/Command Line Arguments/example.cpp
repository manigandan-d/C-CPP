#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;

    cout<<"Number of Command Line Arguments : "<<argc<<endl;
    
    cout<<"Name of the File : "<<argv[0]<<endl;

    cout<<"Command Line Arguments : ";

    for(i=1; i<argc; i++)
    {
        cout<<argv[i]<<" ";
    }

    cout<<endl;

    return 0;
}
