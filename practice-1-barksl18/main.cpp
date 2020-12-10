#include <iostream>
#include <cassert>
using namespace std;

bool isSortedDescending(int dataArrayArg[], int length) {
    cout << "Calling isSortedDescending with array of length " << length << endl;
    bool answer;

    bool isSortedDescending(int dataArrayArg[], int length) {
        for (int i = 0; i < length-1; i++) {
            if (dataArrayArg[i] > dataArrayArg[i + 1] {
                answer = true;
            }

            else {
                return false;
            }
        }
    }

    return answer;
}

int indexOfFirstGreaterThan(int valueArg, int dataArrayArg[], int length) {
    // assumes dataArrayArg is sorted descending
    cout << "Calling indexOfFirstGreaterThan with value " << valueArg << " and array of length " << length << endl;
    int answer;

    for (int i = 0; i < length; i++) {
        if (dataArrayArg[i] < valueArg) {
            i = valueArg;
            answer = i;
        }

        else {
            return -1;
        }
    }

    return answer;
}

bool isPerfect(int valueArg) {
    cout << "Calling isPerfect(" << valueArg << ")" << endl;
    bool answer;

    if (valueArg % 2 == 0) {
        answer = true;
        return answer;
    }

    else {
        answer = false;
        return answer;
    }
}

int gcd(int mArg, int nArg) {
    cout << "Calling gcd(" << mArg << "," << nArg << ")" << endl;
    int answer;

    // COMPLETE THIS, INCLUDING CHANGING THE LINE BELOW IF NECESSARY
    return answer;
}

int findMinInRange(int dataArrayArg[], int leftArg, int rightArg) {
    cout << "Calling findMinInRange with left index " << leftArg << ", right index " << rightArg << endl;
    int answer;
    int index;
    answer = dataArrayArg[leftArg];
    for (index = leftArg+1; index <= rightArg; index = index + 1) {
        if (dataArrayArg[index] < answer) {
            answer = dataArrayArg[index];
        }
    }
    return answer;
}

int findMin(int dataArrayArg[], int lengthArg) {
    cout << "Calling findMin with length " << lengthArg << endl;
    int answer;
    int i = 0;

    //need help with the halving of the array

    while (i < lengthArg) {
        i ++;
    }
    return answer;
}

int main(int argc, char* argv[]) {

    int dataArrayOne[8] = {3,1,2,5,4,7,6,9};
    int dataArrayTwo[11] = {3,1,2,5,4,7,6,9,8,0,10};
    int dataArrayThree[7] = {15,13,11,9,7,5,3};
    int dataArrayFour[4] = {2,1,0,-1};

    findMin(dataArrayOne);
    findMin(dataArrayTwo);
    findMin(dataArrayThree);
    findMin(dataArrayFour);

    /*
    cout << "-- Starting tests for isSortedDescending" << endl;
    assert(isSortedDescending(dataArrayOne,8) == false);
    assert(isSortedDescending(dataArrayTwo,11) == false);
    assert(isSortedDescending(dataArrayThree,7) == true);
    assert(isSortedDescending(dataArrayFour,4) == true);
    cout << "-- All tests for isSortedDescending completed without error" << endl;
    */

    /*
    cout << "-- Starting tests for indexOfFirstGreaterThan" << endl;
    assert(indexOfFirstGreaterThan(2, dataArrayThree, 7) == -1);
    assert(indexOfFirstGreaterThan(17, dataArrayThree, 7) == 0);
    assert(indexOfFirstGreaterThan(10, dataArrayThree, 7) == 3);
    cout << "-- All tests for indexOfFirstGreaterThan completed without error" << endl;
    */

    /*
    cout << "-- Starting tests for isPerfect" << endl;
    assert(isPerfect(-1) == false);
    assert(isPerfect(1) == false);
    assert(isPerfect(6) == true);
    assert(isPerfect(21) == false);
    assert(isPerfect(28) == true);
    cout << "-- All tests for isPerfect completed without error" << endl;
    */

    /*
    cout << "-- Starting tests for gcd" << endl;
    assert(gcd(25,5) == 5);
    assert(gcd(26,6) == 2);
    assert(gcd(27,6) == 3);
    assert(gcd(28,11) == 1);
    cout << "-- All tests for gcd completed without error" << endl;
    */

    /*
    cout << "-- Starting tests for findMin" << endl;
    assert(findMin(dataArrayOne,8) == 1);
    assert(findMin(dataArrayTwo,11) == 0);
    cout << "-- All tests for findMin completed without error" << endl;
    */

    return 0;
}