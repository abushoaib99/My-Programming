#include<stdio.h>
//􀄶কােনা ব􀋃 u আিদেবেগ (initial velocity) এবং a 􀊐রেণ (acceleration) যা􀆝া শুরু করল (􀊐রেণর মান সব সময় a
//থাকেব, বাড়েব বা কমেব না)। t সময় পের এর 􀄶বগ যিদ v হয় তাহেল 2t সমেয় ব􀋃􀆱 কত দূর􀊐 অিত􀆏ম করেব?
//2t সমেয় অিত􀆏া􀈐 দূর􀊐 হেব v x 2t। এ􀆱 􀆢মাণ কের 􀄶ফেলা। তারপর আবার পড়া শুরু কেরা
//v = u + at
//s = ut + 0.5 at^2 (এখােন s হে􀇘 t সমেয় অিত􀆏া􀈐 দূর􀊐)।
//তাহেল 2t সময় পের অিত􀆏া􀈐 দূর􀊐 হেব
//u x 2t + 0.5 x a x (2t)^2 = u x 2t + 0.5 x a x 4t^2 = u x 2t + a x 2t^2 = 2t (u+ at) = 2tv
int main()

{
    float s,v,t;
    printf("Enter the last velocity, v: ");
    scanf("%f",&v);
    printf("Enter time, t: ");
    scanf("%f",&t);
    s=2*t*v;
    printf("\nCrossed distance, s = %f\n",s);
    return 0;

}
