/*
Cho day so nguyen a1, a2, ..., aN (N nhap tu file). Tim tat ca cac so nguyen to va cac chu so cua no cung la so nguyen to.

Input.txt
6
13 23 59 53 72 31

Output.txt
13
23
53
31
*/
#include<iostream>
#define MAX_VALUE 100
using namespace std;

int N, number;
int i;
int prime[5] = {1, 2, 3, 5, 7};

bool check_prime(int item){
	for(int icheck = 2; icheck <= item / 2; icheck++){
		if(!(item % icheck)) return false;
	}
	int division = 10;
	while(item){
		int temp = item % division, ok = 0;
		for(int check = 0; check < 5; check++){
			if(temp == prime[check]) ok = 1;
		}
		if(ok) item = item / division;
		else return false;
	}
	return true;
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w",stdout);
	cin >> N;
	for(i = 1; i <= N; i++){
		cin >> number;
		if(check_prime(number)) cout << number << "\n";
	}
	return 0;
}
