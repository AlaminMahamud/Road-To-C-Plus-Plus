// public member function
// C++ 98
// iterator erase(iterator position);
// iterator erase(iterator first, iterator last);


// Parameters
// => Position:
//    Iterator pointing to a single element to be removed from the vector
//    Member types iterator and const_iterator are random access iterator types that point to elements
//


/// Erasing From iterator
#include <iostream>
#include <vector>

int main(){

    std::vector<int> myvector;

    // set some values (from 1 to 10)
    for(int i=1; i<=10; i++) myvector.push_back(i);

    // erase the sixth element
    myvector.erase(myvector.begin()+5);

    // erases the first 3 elements
    myvector.erase(myvector.begin(),myvector.begin()+3);

    std::cout << "myvector contains:";
    for(unsigned int i=0; i<myvector.size(); ++i)
        std::cout << ' ' << myvector[i];
    std::cout << '\n';

    return 0;
}
