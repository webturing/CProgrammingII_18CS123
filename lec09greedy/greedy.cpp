#include<bits/stdc++.h>
using namespace std;
struct Task {
	int start,end;
};
bool Cmp(Task a,Task b) {
	return a.end<b.end;
}
int main() {
	//ifstream cin("input.txt");
	freopen("input.txt","r",stdin);//better
	int n;
	cin>>n;
	Task T[n];
	for(int i=0; i<n; i++)
		cin>>T[i].start>>T[i].end;
	for(int i=0; i<n; i++)
		cout<<"["<<T[i].start<<","<<T[i].end<<"]"<<endl;
	sort(T,T+n,Cmp);
	
	cout<<"------------------"<<endl;
	for(int i=0; i<n; i++)
		cout<<"["<<T[i].start<<","<<T[i].end<<"]"<<endl;
		
	int cnt=0;
	int end=0;
	for(int i=0;i<n;i++){
		if(T[i].start>=end){
			++cnt;
			end=T[i].end;
			cout<<"["<<T[i].start<<","<<T[i].end<<"] selected"<<endl;
		}
	}
	cout<<"Total cnt="<<cnt<<endl;
	
	return 0;

}
