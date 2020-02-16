#define SUBMISSION
#ifdef SUBMISSION
#define NDEBUG
#endif
#include <iostream>
#include <vector>
#include <algorithm>

#include <cassert>

using namespace std;

template <typename T>
T read()
{
    T toRead;
    cin >> toRead;
    assert(cin);
    return toRead;
}

int findMaxXorSum(const vector<int>& a)
{
    const auto maxElement = *std::max_element(a.begin(), a.end());
    auto maxPowerOf2 = 1;
    while (maxPowerOf2 <= maxElement)
    {
        maxPowerOf2 <<= 1;
    }
    const auto maxXorSum = maxPowerOf2 - 1;

    return maxXorSum;
}

int64_t findNumTriples(const vector<int>& a)
{
    const int n = a.size();

    struct XorSumInfo
    {
        int lastOccurrencePos = -1;
        int64_t numTriplesEndingAtPreviousOccurrence = 0;
        int64_t numOccurrences = 0;
    };

    int64_t result = 0;

    const auto maxXorSum = findMaxXorSum(a);
    vector<XorSumInfo> infoForXorSum(maxXorSum + 1);

    auto xorSum = 0;
    for (auto k = 0; k < n; k++)
    {
        xorSum ^= a[k];

        auto& currentXorSumInfo = infoForXorSum[xorSum];

        assert(xorSum <= maxXorSum);
        int64_t numTriplesEndingAtK = 0;
        if (currentXorSumInfo.lastOccurrencePos != -1)
        {
            numTriplesEndingAtK += (k - currentXorSumInfo.lastOccurrencePos - 1);
            numTriplesEndingAtK += currentXorSumInfo.numTriplesEndingAtPreviousOccurrence + (k - currentXorSumInfo.lastOccurrencePos) * (currentXorSumInfo.numOccurrences - 1);
        }
        currentXorSumInfo.numTriplesEndingAtPreviousOccurrence = numTriplesEndingAtK;
        currentXorSumInfo.lastOccurrencePos = k;
        currentXorSumInfo.numOccurrences++;

        if (xorSum == 0)
        {
            numTriplesEndingAtK += k;
        }

        result += numTriplesEndingAtK;
    }


    return result;
}

int main(int argc, char* argv[])
{

    ios::sync_with_stdio(false);

    const auto T = read<int>();

    for (auto t = 0; t < T; t++)
    {
        const auto N = read<int>();
        vector<int> a(N);
        for (auto& x : a)
        {
            x = read<int>();
        }
        const auto numTriples = findNumTriples(a);
        cout << numTriples << endl;
    }
}


