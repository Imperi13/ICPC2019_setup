#pragma once

#define int long long
const int MOD = 1e9+7;

int modpow(int a,int b) {
	int res = 1;
	int tmp = a;
	while(b) {
		if(b&1) res = res*tmp%MOD;
		tmp = tmp*tmp%MOD;
		b >>= 1;
	}
	return res;
}

int gcd(int a, int b) {
	if(b==0) return a;
	return gcd(b,a%b);
}

