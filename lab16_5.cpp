#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d)
{
	const int m1 = *a, m2 = *b, m3 = *c, m4 = *d;
	*a=0;*b=0;*c=0;*d=0;
	int x = rand()%4 + 1;
	switch(x)
	{
		case 1:*a = m1; break;
		case 2:*a = m2; break;
		case 3:*a = m3; break;
		case 4:*a = m4; break;
	}
	for(;;)
	{
		int i = rand()%4 + 1;
		switch(i)
		{
			case 1:*b = m1; break;
			case 2:*b = m2; break;
			case 3:*b = m3; break;
			case 4:*b = m4; break;
		}
		if(*b!=*a) break;
	}
	for(;;)
	{
		int i = rand()%4 + 1;
		switch(i)
		{
			case 1:*c = m1; break;
			case 2:*c = m2; break;
			case 3:*c = m3; break;
			case 4:*c = m4; break;
		}
		if(*c!=*a && *c!=*b) break;
	}
	for(;;)
	{
		int i = rand()%4 + 1;
		switch(i)
		{
			case 1:*d = m1; break;
			case 2:*d = m2; break;
			case 3:*d = m3; break;
			case 4:*d = m4; break;
		}
		if(*d!=*a && *d!=*b && *d!=*c) break;
	}
}