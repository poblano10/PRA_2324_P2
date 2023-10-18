#include<iostream>
#include<vector>
#include"DyV.h"

int main(){

	std::vector<int> a(5);         
	std::vector<float> b{2.5,3,5,6.7,7,7,8,9,10};      
	

	int pos1 = BusquedaBinaria(4,a,0,4);
	int pos2 = BusquedaBinaria(6.7f,b,0,8);
	

	cout<<" x1 = "<<pos1<<" x2 = "<<pos2;

	return 0;
	   }
