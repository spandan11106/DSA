#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,n,m,r,c;
char s[1009];
bool a[1009][1009];
inline ll read(){
	ll s = 0,w = 1;
	char ch = getchar();
	while (ch > '9' || ch < '0'){ if (ch == '-') w = -1; ch = getchar();}
	while (ch <= '9' && ch >= '0') s = (s << 1) + (s << 3) + (ch ^ 48),ch = getchar();
	return s * w;
}
int main(){
	t = read();
	while (t --){
		n = read(),m = read(),r = c = 0;
		for (ll i = 1;i <= n;i += 1){
			scanf("%s",s + 1);
			for (ll j = 1;j <= m;j += 1) a[i][j] = s[j] - '0';
		}
		for (ll i = 1;i <= n;i += 1){
			bool sum = 0;
			for (ll j = 1;j <= m;j += 1) sum ^= a[i][j];
			if (sum) r += 1;
		}
		for (ll j = 1;j <= m;j += 1){
			bool sum = 0;
			for (ll i = 1;i <= n;i += 1) sum ^= a[i][j];
			if (sum) c += 1;
		}
		printf("%lld\n",max(r,c));
	}
	return 0;
}
