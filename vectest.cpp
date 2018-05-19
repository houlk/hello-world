#include<iostream>
#include<vector>
#include<utility>
#include<cmath>
using namespace std;

int main(void)
{
    size_t sz = 10;
    vector<pair<size_t, size_t> > vect(sz);
    for(size_t i=0; i<sz; i++)
    {
        vect[i] = make_pair(i,pow(i,2));
    }
    cout << "The square of 5 is " << vect[5].second << endl;
    cout << "The square of 3 is " << vect[3].second << endl;
    return 1;
}
