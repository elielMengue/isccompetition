// 1. Cake calculator function

#include <tuple>
// Returns a triplet (cakes, flour_remainder, sugar_remainder)
std::tuple<int, int, int> cake_calculator(int flour, int sugar) {
 int cakes = 0;
 while  (flour >= 100 && sugar >= 50) {
 	flour -= 100;
 	sugar -= 50;
 	++cakes;
 }
 return {cakes, flour, sugar};
}

