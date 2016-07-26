#include<iostream>
#include<cmath>

using namespace std;

bool soNguyenTo(int soA)
{
	if (soA < 2) 
	{
		return false;
	}
	else if (soA>2)
	{
		if (soA % 2 == 0)
		{
			return false;
		}
		for (int i = 3; i < sqrt((float)soA); i += 2)
		{
			if (soA%i == 0)
			{
				return false;
			}
		}
	}
	return true;
}
int main(int argc, char ** argv)
{
	int n; // khai bao so kiem tra la so nguyen
	cout << "Nhap so can kiem tra?!" << endl;
	cin >> n; // nhap vao so nguyen tu ban phim
	if (soNguyenTo(n) == true)
	{
		cout << "So " << n << " la so nguyen to!!!!";
	}
	else
	{
		cout << "So " << n << " khong phai nguyen to!!!!";
	}
	system("pause");
	return 0;
}
