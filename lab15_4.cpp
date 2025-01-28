#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a,int &b,int &c,int &d){
	int e = *&a, f = *&b, g = *&c, h = *&d;
	int random = rand()%3+1;
	if(random==1){
     a = e;
	 b = f;
	 c = h;
	 d = g;
	}else if(random==2){
     a = f;
	 b = g;
	 c = e;
	 d = h;
	}else{
     a = h;
	 b = e;
	 c = f;
	 d = g;
}
}
