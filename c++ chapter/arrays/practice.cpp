#include<iostream> 
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	vector<int> a;
	for(int i=0;i<10;i++){
		a.push_back(i);
	}
	

	cout<<a[1]<<" "<<a[2]<<" "<<a[6]<<" "<<a[9];
	return 0;
}
