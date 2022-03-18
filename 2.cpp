#include <iostream>
#include <list>

using namespace std;

int main()
{
    srand(time(NULL));
    list <int> lst;

    int sum = 0;
    int g = 0;

    for (int i = 0; i < 10000; i++) {
        int num = rand() % 200 - 100;
        sum += num;
        lst.push_back(num);
    }
    cout << endl;
    float ans = sum / 10000.000;
    cout << ans << endl;
    return 0;
}