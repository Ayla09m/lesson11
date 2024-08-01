#include <iostream>
using namespace std;

int main()
{
    cout << "task1\n";
    const int nSize = 4;
    const int mSize = 4;
    int n[nSize] = {};
    int m[mSize] = {};
    int h[mSize + nSize] = {};
    srand(time(0));
    for (int i = 0; i < nSize; i++)
    {
        n[i] += rand() % 40 - 20;
    }
    for (int i = 0; i < mSize; i++)
    {
        m[i] += rand() % 40 - 20;
    }
    int x = 0;
    for (int i = 0; i < mSize; i++) 
    {
        for (int j = 0; j < nSize; j++) 
        {
            if (m[i] == n[j]) 
            {
                bool eyni = false;
                for (int k = 0; k < x; k++) 
                {
                    if (h[k] == m[i]) 
                    {
                        eyni = true;
                        break;
                    }
                }
                if (true) 
                {
                    h[x] = m[i];
                    x++;
                }
            }
        }
    }
    cout << endl;
    cout << "n massivi;";
    for (int i = 0; i < nSize; i++) 
    {
        cout << n[i] << " ";
    }
    cout << endl;
    cout << "m massivi;";
    for (int i = 0; i < mSize; i++) 
    {
        cout << m[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < x; i++) 
    {
        cout << h[i] << " ";
    }

    cout << "task2" << endl;
    const int ns = 4, ms = 4;
    int N[ns] = {}, M[ms] = {}, J[ms] = {};
    int js = 0; 

    srand(time(0));
    for (int i = 0; i < ns; ++i) {
        N[i] = rand() % 20;
    }
    for (int i = 0; i < ms; ++i) {
        M[i] = rand() % 20;
    }
    for (int i = 0; i < ns; ++i) {
        cout << N[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < ms; ++i) {
        cout << M[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < ns; ++i) 
    {
        bool tapildi = false; 
        for (int j = 0; j < ms; ++j) 
        {
            if (N[i] == M[j]) {
                tapildi = true;
                break;
            }
        }
        if (!tapildi) {
            bool nmassivi = false;
            for (int k = 0; k < js; ++k)
            {
                if (J[k] == N[i]) 
                {
                    nmassivi = true;
                    break;
                }
            }
            if (true) {
                J[js++] = N[i];
            }
        }
    }
    for (int i = 0; i < js; ++i) {
        cout << J[i] << " ";
    }
    cout << endl;



   

    cout << "task4\n";
    int a[10] = {};
    srand(time(0));
    int b[10] = {};
    int c = 0;
    for (int i = 0; i < 10; i++)
    {
        a[i] += rand() % 40 - 20;
    }
    for (int i = 0; i < 10; i++)
    {
        if ((a[i]) >= 0) {
            b[c] += a[i];
            c++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if ((a[i]) < 0) {
            b[c] += a[i];
            c++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " ";
    }
    cout << "task5\n";
    int d[10] = {};
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        d[i] += rand() % 40 - 20;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        if ((d[i]) < 0) {
            d[i] *= -1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << d[i] << " ";
    }
}

