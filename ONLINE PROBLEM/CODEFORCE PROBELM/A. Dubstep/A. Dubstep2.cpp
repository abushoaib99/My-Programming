#include <bits/stdc++.h>
#include<string>
#include<regex>
using namespace std;
main()
{
  string s;
  cin >> s;
  regex p("WUB");
  cout << regex_replace(s, p, " ");
}
