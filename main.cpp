#include <iostream>

using namespace std;

int ilehajsu (int a, int b, int c)
{
    int hajs = 0;
    for( int i = 2; i <= 26; i++ )
    {
        for( int j = 2; i+j <= 28; j++ )
        {
            for( int k = 2; i+j+k <= 30; k++ )
            {
                if (j-i == 6 || j-i == 6 || k-j == 6 || j-k == 6 || i-k ==6 || k-i ==6)
                {
                    if (a <= i)
                        hajs+=a;
                    if (b <= i)
                        hajs+=b;
                    if (c <= i)
                        hajs+=c;
                }

            }
        }
    }
    return hajs;
}

int main()
{
    int pierw = 0;
    int drug = 0;
    int trz = 0;
    int suma = 0;

    for( int i = 2; i <= 30; i++ )
    {
        for( int j = 2; j <= 30 ; j++ )
        {
            for( int k = 2; k <= 30; k++ )
            {
                int a = i;
                int b = j;
                int c = k;
                int hajs = ilehajsu (a, b, c);
                if (hajs>suma)
                {
                    suma = hajs;
                    pierw = i;
                    drug = j;
                    trz = k;
                }
            }
        }
    }
    cout << "Najwieksza uzyskana kwota to "<< suma <<". Pozyskano ja zapisujac na karteczkach "<<pierw<<", "<<drug<<" i " <<trz<< "."<<endl;
}
