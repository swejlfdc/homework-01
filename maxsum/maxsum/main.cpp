#include<cstdio>
#include<iostream>
#define maxn 1000

const int inf = 0x7fffffff;

int input(int* output) {
	int a, cnt = 0; 
	for(; ~scanf("%d", &a); ++cnt) 
		output[cnt] = a;
	return cnt;	
}

int maxsum(int* c, int size) {
	int ret = -inf, minpre = 0, prefix = 0;
	for(int i = 0; i < size; i++) {
		prefix += c[i];
		if(prefix - minpre > ret) 
			ret = prefix - minpre;
		if(prefix < minpre) minpre = prefix;
	}
	return ret;
}

int main(int argc, char** args) {
	int c[maxn], num, ans;
	num = input(c);
	ans = maxsum(c, num);
	printf("%d\n", ans);
	system("pause");
	return 0;
}