#include <iostream>
#include <fstream>
#include <list>

using namespace std;

int main() {
    
    ifstream inputFile;
    inputFile.open("input.txt");

    list <int> lst;
    while (!inputFile.eof())
    {
        int num;
        inputFile >> num;
        lst.push_back(num);
    }

    lst.sort();

    int sum = 0;
    for (int i : lst) {
        sum += i;
    }

    for (int i : lst)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    int mid = (int)sum / lst.size();

    cout << mid << endl;

	return 0;
}