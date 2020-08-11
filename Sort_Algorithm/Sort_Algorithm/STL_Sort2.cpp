/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
	if (a.second.first == b.second.first) {
		return a.second.second > b.second.second;
	}
	else {
		return a.second.first > b.second.first;
	}
}

int main() {
	vector <pair<string, pair<int, int>>> v;

	v.push_back(pair<string, pair<int, int>>("ÀÌ Áö ÈÆ ", pair<int, int>( 50, 19961204)));
	v.push_back(pair<string, pair<int, int>>("¼Õ Ã¢ Çö ", pair<int, int>( 96, 19551122)));
	v.push_back(pair<string, pair<int, int>>("¿° Èï ·Ä ", pair<int, int>(20, 19540210)));
	v.push_back(pair<string, pair<int, int>>("¹Ú µ¿ ±Ô ", pair<int, int>(50, 19551203)));
	v.push_back(pair<string, pair<int, int>>("±è Á¤ ¾× ", pair<int, int>(100, 19951122)));

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ';
	}
}*/