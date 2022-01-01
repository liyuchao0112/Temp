#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end(),[](int x,int y) -> bool {
		return x<y;
	});
	for_each(a.begin(),a.end(),[](int x) -> void {
		cout<<x<<' ';
	});
	return 0;
}
