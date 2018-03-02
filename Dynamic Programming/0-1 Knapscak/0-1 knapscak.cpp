#include <iostream>

using namespace std;
int n,W,wt[100],val[100];

int knapSack()
{
    int K[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w]= max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    return K[n][W];
}

int main()
{
    cout << "Enter the number of items in a Knapsack: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter weight and value for item " << i+1 << ": ";
        cin >> wt[i];
        cin >> val[i];
    }
    //    int wt[] = { 10, 20, 30 };
    //    int val[] = { 60, 100, 120 };
    //    int W = 50;
    cout << "Enter the capacity of knapsack: ";
    cin >> W;
    cout <<"\nMaximum Profit = "<< knapSack()<<endl;

    return 0;
}
