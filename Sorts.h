#pragma once
#include <vector>

using namespace std;

class Sorts
{
	public:
		void merge(vector <int>&, int, int, int);
		void merge_sort(vector <int>&, int, int); // Nie potrafie dodac wartosci domyslnych argumentow, tak aby jedynym argumentem byl vector z nieposortowanymi elementami. Gdy deklaruje right = vec.size() - 1 wy�wietla si� b��d
		void counting_sort(vector <int>&);
		void insertion_sort(vector <int>&);
		void select_sort(vector <int>&);
		void bubble_sort(vector<pair<int, int>>&);
		void printData(vector <int>);
};