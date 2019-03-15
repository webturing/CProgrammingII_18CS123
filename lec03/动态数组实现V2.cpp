#include<bits/stdc++.h>
using namespace std;
struct Vector{
  int capacity=16;
  int *data;
  int len;	
};
void Init(Vector& v){
	v.data=new int[v.capacity];
	v.len=0;	
}
void Print(Vector& v){
	for(int i=0;i<v.len;i++)
	cout<<v.data[i]<<" ";
	cout<<endl;
}
void Add(Vector& v,int ele){
	if(v.len==v.capacity){
		v.capacity*=2;
		int *data2=new int[v.capacity];
		int *p=v.data;
		for(int i=0;i<v.len;i++)
		data2[i]=v.data[i];		
		v.data=data2;
		delete[] p;
	}	
	v.data[v.len]=ele;
	++v.len;
}
int Size(Vector&v){
	return v.len;
}
int Get(Vector&v,int pos){

	return v.data[pos];
}
int main() {
	Vector v;
	Init(v);
	Print(v);
	for(int i=0;i<20;i++){
		Add(v,i);
		Print(v);
	}
	cout<<Get(v,5)<<endl;
    return 0;
}
