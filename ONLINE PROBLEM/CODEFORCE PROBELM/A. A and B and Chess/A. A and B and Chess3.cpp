#include <bits/stdc++.h>

int main() {
	char ch;
	int A[300] = {0}, sum = 0;
	A['Q'] = 9, A['R'] = 5, A['B'] = A['N'] = 3, A['P'] = 1;
	A['q'] = -9, A['r'] = -5, A['b'] = A['n'] = -3, A['p'] = -1;

	while (scanf("%c", &ch) != EOF)
		sum += A[ch];
	printf("%s\n", sum > 0 ? "White" : sum ? "Black" : "Draw");
	return 0;
}
