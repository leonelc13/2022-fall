#include <iostream>
#include <vector>

using namespace std;

void edit(vector<int> & v) 
{
    for (auto it {v.begin()}; it != v.end();)
    {
        if (*it == 1)
        {
           it = v.erase(it);
        }
        else if (*it == 0)
        {
            it = v.insert(it, 0);

            // ex 2, 0, 1
            // once insert pointing to 2, 0, 0, 1 (to first zero, hence why you need to icnrease by two to point to 1)
            it += 2;
        } else {
            it++;
        }
        
    }
}




