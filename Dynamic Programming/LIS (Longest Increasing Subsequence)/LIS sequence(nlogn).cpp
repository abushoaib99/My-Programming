#include<bits/stdc++.h>
using namespace std;

int N,X[100000],P[100000],M[100001],S[100000];

int Length, low, high, mid, newL, k;

int main()
{
    while(scanf("%d",&N)==1)
    {
        for (int i=0; i<N; i++)
            scanf("%d",&X[i]);

        Length = 0;

        for (int i=0; i<N; i++)
        {
            // testing
//            for (int ii=0;ii<L;ii++)
//                cout << M[ii+1] << " ";
//            cout << "--------" << endl;
            // Binary search for the largest positive j ≤ L
            // such that X[M[j]] < X[i]
            low = 1;
            high = Length;
            while (low <= high)
            {
                mid = ceil((low+high)/2.0);
                if (X[M[mid]] < X[i])
                    low = mid+1;
                else
                    high = mid-1;
            }
            // After searching, lo is 1 greater than the
            // length of the longest prefix of X[i]
            //newL = lo;

            // The predecessor of X[i] is the last index of
            // the subsequence of length newL-1
            P[i] = M[low-1];
            M[low] = i;


            // If we found a subsequence longer than any we've
            // found yet, update L
            if (low > Length)
                Length = low;
        }
        // Reconstruct the longest increasing subsequence
        k = M[Length];
        for (int i=Length-1; i>=0; i--)
        {
//          S[i] = X[k];
            S[i] = k;
            k = P[k];
        }
        printf("%d\n",Length);
        for (int i=0; i<Length; i++)
            printf("%d ",S[i]);
        puts("");
        for(int i=0;i<Length;i++)
            printf("%d ",X[S[i]]);
        puts("");


    }
    return 0;
}
