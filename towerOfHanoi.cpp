#include <iostream>
using namespace std;
int counter = 0;
void towerOfHanoi(int n, int a, int b, int c)
{
    counter++;
    if (n > 0)
    {
        towerOfHanoi(n - 1, a, c, b);
        cout << "Moving From " << a << " to " << c << endl;
        towerOfHanoi(n - 1, b, a, c);
    }
}

int main()
{
    cout << "Here 1 is Source tower\n2 is Auxillary Tower\n3 is Destination Tower" << endl;
    towerOfHanoi(3, 1, 2, 3);
    cout << counter;
    return 0;
}
