#include<bits/stdc++.h>
using namespace std;
struct Vector{
  int data[100];
  int len;	
};
void Init(Vector& v){
	v.len=0;	
}
void Print(Vector& v){
	for(int i=0;i<v.len;i++)
	cout<<v.data[i]<<" ";
	cout<<endl;
}
void Add(Vector& v,int ele){
	if(v.len==100){
		return ;
	}
	v.data[v.len]=ele;
	++v.len;
}
int Size(Vector&v){
	return v.len;
}
int Get(Vector&v,int pos){
	if(pos>=v.len){
		return -1;
	}
	return v.data[pos];
}
int main() {
	Vector v;
	Init(v);
	Print(v);
	for(int i=0;i<105;i++){
		Add(v,i);
		Print(v);
	}
	cout<<Get(v,5)<<endl;
    return 0;
}
