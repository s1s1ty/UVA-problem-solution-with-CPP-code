#include<cmath>
#include<cstdio>

using namespace std;

float H, M;

int main() {
    float ans;
    for(;;) {
        scanf("%f:%f", &H, &M);
        if(H == 0 && M == 0) break;

        if(H == 12) H = 0;
        float hangle = 30.0 * H + (M / 60) * 30.0;
        float mangle = M * 6.0;
        float res=abs(hangle - mangle);
        if(res>180) ans=360.0-res;
        else ans=res;
        printf("%.3f\n",ans);
    }
}
