#include <iostream>
#include <string>

using namespace std;

int main(){
	
	char chess[16][16];
	
	for(int i; i=0; i<16; i++){
		
		for(int j; j=0; j<16; j++){
				chess[i][j] = '-';
		}
	}
	
	for(int i; i=0; i<16; i++){
		
		for(int j; j=0; j<16; j++){
				chess[i][j] = '-';
		}
	}
	
	return 0;
}