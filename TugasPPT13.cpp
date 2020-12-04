//Tugas PPT-13 DDP

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    
    int b;
    float total;
    
    //penggunaan looping for
    for(int a=1; a<=5;a++)
    {
       
        b=a*a;
        cout <<" "<<b;
        total+=b;
        
    }
    
    cout <<" "<<"total="<<total<<endl;
    
getch();
return 0;   
}