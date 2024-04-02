#include <iostream>
#include <vector>


using namespace std;

vector<int> qsort(vector<int> &a)
{
    if (a.size() < 2)
    return a;
    int opora = a[0];
    vector<int> big;
    vector<int> small;
    for (int i = 0; i < a.size(); i++)
    {
        if (opora < a[i])
        {
            big.push_back(a[i]);
        }
        else if (opora > a[i])
        {
            small.push_back(a[i]);
        }
    }
    qsort(big); qsort(small);
    small.push_back(opora);

        for (int i = 0, k = 0; i<a.size(); i++)
        {
            if(i<small.size())
            a[i] = small[i];
            else
            {
            a[i] = big[k];
            k++;
            }
        }
        return a;
}

int main()
{
     vector<int> a {1, 2, 7, 10, 31,45,23,99,123,54,83,87,88,11,4,9};
     //qsort(a);
     for(int i = 0; i<a.size(); i++)
     {
        cout << qsort(a)[i] << " ";
     }

}