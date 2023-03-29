#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::copy;

int main(){
    vector<int> vec1 { 1, 2, 3, 4, 5 };
    vector<int> vec2 { 2, 4, 6, 8, 10 };

    copy(vec1.begin(), vec1.end(),
         std::ostream_iterator<int>(cout,"; "));
    cout << endl;

    copy(vec2.begin(), vec2.end(),
         std::ostream_iterator<int>(cout,"; "));
    cout << endl;

    cout << "Scalar product is: "
              << inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);
    cout << endl;

    return EXIT_SUCCESS;
}

