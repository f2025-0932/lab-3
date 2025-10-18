#include <iostream>
using namespace std;

int main()
{
    int totalSeconds = 4564;
    
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;
    
    cout << totalSeconds << " seconds is equivalent to:\n";
    cout << minutes << " minutes and " << seconds << " seconds\n";
    
    return 0;
}
