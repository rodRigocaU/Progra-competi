
#include <iostream>
#include <algorithm>
using namespace std;    

int main()
{
    /*BEGIN*/

    int t;
    int n;
    int k;


    //cout << " T : ";
    cin >> t; 
    //cout << '\n';

    int *ress = new int[t];

    for (int tt = 0; tt < t; tt++)
    {
        //cout << "TEST " << tt + 1 << '\n';
        /*-----------*/
        //cout << " n, k  : ";

        cin >> n >> k;
        
        //cout << '\n';
        /*-----------*/

        int* a = new int[n];
        int* b = new int[n];
        /*-----------*/

        int aux = 0;

        //cout << " a : ";
        
        for (int aa = 0; aa < n; aa++)
        {
            cin >> aux;
            a[aa] = aux;
        }
        //cout << '\n';

        //cout << " b : ";
        for (int bb = 0; bb < n; bb++)
        {
            cin >> aux;
           b[bb] = aux;
        }
       //cout << '\n';

        /*-----------*/
        int i = 0;
        int j = n - 1;

        sort(a,a + n);
        sort(b, b + n);



        while (k--)
        {
            if (a[i] < b[j])
            {
                aux = a[i];
                a[i] = b[j];
                b[j] = aux;
            }
            else
            {
                break;
            }
            i++;
            j--;
        }
        /*-----------*/

        int sum = 0;
        for (int id = 0; id < n; id++)
        {
            sum += a[id];
        }
        ress[tt] = sum;
    }
    
    for (int ii = 0; ii < t; ii++)
    {
        cout << ress[ii] << '\n';
    }


    
   // cout << " FINISH " << '\n';
}

