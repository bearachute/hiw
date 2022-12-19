#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* dunno what i'm doing */

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}