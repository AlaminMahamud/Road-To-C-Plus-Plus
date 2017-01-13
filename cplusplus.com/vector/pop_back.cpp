/// Deletes last element
//  Removes the last element in the vector, effectively reducing the container size by one
//  This destroys the removed element.

// vector :: pop_back
#include <iostream>
#include <vector>
int main(){
    std::vector<int> myvector;
    int sum(0);
    myvector.push_back(100);
    myvector.push_back(200);
    myvector.push_back(300);
    while(!myvector.empty()){
        sum += myvector.back();
        myvector.pop_back();
    }

    std::cout << "The elements of myvector add up to " << sum << std::endl;
    return 0;
}
