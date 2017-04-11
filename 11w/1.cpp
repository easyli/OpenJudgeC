#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = acos(-1.0);
const double eps = 1e-6;

int N, F;
int r[10010];

bool Valid(double V)
{
    if(V < eps)
        return true;
    int total = 0;
    for(int i=0; i<N; ++i) {
        double n = r[i]*r[i]/V;
        total += n;
        if(total >= F)
            return true;
    }

    return false;
}

int main()
{
    cin >> N >> F;
    ++F;
    double maxV = 0;
    for(int i=0; i<N; ++i) {
        cin >> r[i];
        maxV = max(maxV, (double)r[i]*r[i]);
    }
    double L = 0, R = maxV;
    while(R-L > eps) {
        double midV = L+(R-L)/2;
        if(Valid(midV))
            L = midV;
        else
            R = midV;
    }

    cout << fixed << setprecision(3) << PI * L;

    return 0;
}