#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int solution(int X, vector<int> &A)
{
    vector<bool> numbers;
    numbers.reserve(X);
    for ( int i = 0; i < X; ++i )
        numbers[i] = false;
    int index = 0;

    for ( int i = 0; i < A.size(); ++i )
    {
        numbers[A[i] - 1] = true;

        while ( numbers[index] )
        {
            if ( index++ == X - 1 )
                return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> A {1,3,1,4,2,3,5,4};
    cout << solution(5, A) << endl;
    return 0;
}
