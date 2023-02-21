#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

int main(){
	//Ä£°åÀàvector
	int NUM=5;
	vector<int> vec;
	int a = 0; 
	while(scanf("%d",&a) != EOF){
		vec.push_back(a);
	}
	for (int i = 0; i < vec.size(); i++){
		printf("%d ", vec[i]);
	}	
}
