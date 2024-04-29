#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double pi=0;
	for (int k=0;k<999999;k++){
		pi+=4*(pow(-1,k))/(2*k +1);
	}
	cout<<pi<<endl;
}