
#include <bits/stdc++.h>
int s;
char b, a[30] = "30000000000030195";
int main() {
    while (scanf("%c", &b) != EOF)
        if (b > '.') b < 'a' ? s += a[b - 'B'] - '0' : s -= a[b - 32 - 'B'] - '0';
    puts(s > 0 ? "White" : s ? "Black" : "Draw");
}
