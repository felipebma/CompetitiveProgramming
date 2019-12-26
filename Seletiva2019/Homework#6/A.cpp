#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int nCases;
	string s;
	cin >> nCases;
	getline(cin, s);
	while (nCases--)
	{
		vector<vector<pair<int, int>>> dp;
		int line = -1, size = 0;
		while (s == "")
			getline(cin, s);
		while (s.length() > 0)
		{
			line++;
			vector<pair<int, int>> arr;
			int n = stoi(s);
			if (line == 0)
			{
				arr.push_back(make_pair(n, line));
			}
			else
			{
				for (auto p : dp[line - 1])
				{
					arr.push_back(p);
				}
				int i = arr.size() - 1;
				if (n > arr[i].first)
				{
					arr.push_back(make_pair(n, line));
				}
				else
				{
					while (i > -1 && arr[i].first > n)
						i--;
					if (i >= 0 && arr[i].first < n)
					{
						arr[i + 1] = make_pair(n, line);
					}
					else if (arr[0].first > n)
						arr[0] = make_pair(n, line);
				}
			}
			dp.push_back(arr);
			size = arr.size();
			getline(cin, s);
		}
		cout << "Max hits: " << dp[line].size() << endl;
		stack<int> stack;
		int aux = dp[line].size() - 1;
		pair<int, int> auxP;
		while (aux > -1)
		{
			auxP = dp[line][aux];
			stack.push(auxP.first);
			line = auxP.second;
			aux--;
		}
		while (!stack.empty())
		{
			cout << stack.top() << endl;
			stack.pop();
		}
		if (nCases > 0)
			cout << endl;
	}
	return 0;
}
