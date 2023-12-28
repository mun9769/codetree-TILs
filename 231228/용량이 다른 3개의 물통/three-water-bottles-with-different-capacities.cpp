#include <iostream>
using namespace std;
using ii = pair<int, int>;

ii water[3];
void pass_water(int from, int to) {
    int amount = water[from].second;

    int before = water[to].second;
    water[to].second = min(water[to].first, water[to].second + amount);

    int after = water[to].second;
    water[from].second -= after - before;   
}

int main() {
    for(int i=0; i<3; i++) {
        cin >> water[i].first >> water[i].second;
    }
    for(int i=0; i<100; i++) {
        pass_water(i % 3, (i % 3 + 1) % 3);
    }


    return 0;
}