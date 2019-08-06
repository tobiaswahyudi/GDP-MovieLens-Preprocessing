#include <bits/stdc++.h>

#define pb push_back
#define fi first
#define se second

using namespace std;

map<int,int> mp;
int a,b;

int main(){
	string in;

	//construct map
	for(int i = 0; i < 16408; i++){
		scanf("%d%d",&a,&b);
		mp[a] = b;
	}
	//perror("EOF OF MAPFILE");
	//csv
	while(cin >> in){
		string front;
		int idx = 0;
		while(in[idx] != ','){
			front += in[idx];
			++idx;
		}
		++idx;
		int go = 0;
		while(in[idx] != ','){
			go *= 10;
			go += in[idx]-'0';
			++idx;
		}
		if(mp.find(go) == mp.end()) continue;
		cout << front << ",";
		printf("%d",mp[go]);
		for(int i = idx; i < in.size(); i++){
			putchar(in[i]);
		}
		putchar('\n');
	}
}