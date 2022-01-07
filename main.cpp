#include <iostream>
#include <cstring>

using namespace std;

void sortuj_tablice(int tablica[], int ilosc_obrazow)
    {
        for(int j=0; j<ilosc_obrazow; j++)
        {
            for(int i=1; i<ilosc_obrazow; i++)
                {
                    if(tablica[i-1]>tablica[i])
                        swap(tablica[i-1], tablica[i]);
                }
        }
    }

int ilosc_skradzionych(int tablica[], int ilosc_obrazow)
    {
        int ostatni_index = tablica[ilosc_obrazow - 1];

        int skradzione = ((ostatni_index - tablica[0])+1) - ilosc_obrazow;

        return skradzione;
    }


int main()
{
    int ilosc_obrazow;

    cout << "Ilosc obrazow: ";
    cin >> ilosc_obrazow;

    int tablica[ilosc_obrazow];

    for(int i=0; i<ilosc_obrazow; i++)
        {
            cout << "Obraz nr " << i+1 << ": ";
            cin >> tablica[i];

        }

    sortuj_tablice(tablica, ilosc_obrazow);

    cout << endl;
    cout << "Posortowana tablica: " << endl;

    for(int i=0; i<ilosc_obrazow; i++)
        {
            cout << "Obraz nr " << i+1 << ": " << tablica[i] << endl;
        }

    cout << endl;

    cout << "Najmniejsza ilosc skradzionych obrazow: " << ilosc_skradzionych(tablica, ilosc_obrazow) << endl;

    return 0;
}
