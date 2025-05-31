#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int NumBuns, Numkatt, NumPatti, PriceHam, PriceCheken;
        cin >> NumBuns >> Numkatt >> NumPatti >> PriceHam >> PriceCheken;

        int maxPrice, minPrice, maxPricePatti, minPricePatti;

        // Determine which patties are more expensive
        if (PriceHam > PriceCheken) {
            maxPrice = PriceHam;
            maxPricePatti = NumPatti;
            minPrice = PriceCheken;
            minPricePatti = Numkatt;
        } else {
            maxPrice = PriceCheken;
            maxPricePatti = Numkatt;
            minPrice = PriceHam;
            minPricePatti = NumPatti;
        }

        int Numburger = NumBuns / 2; // Maximum burgers that can be made
        int profit = 0;

        // Use the higher-priced patties first
        int useMax = min(Numburger, maxPricePatti);
        profit += useMax * maxPrice;
        Numburger -= useMax;

        // Use the remaining patties with the lower price
        int useMin = min(Numburger, minPricePatti);
        profit += useMin * minPrice;

        // Output the total profit for this test case
        cout << profit << endl;
    }

    return 0;
}
