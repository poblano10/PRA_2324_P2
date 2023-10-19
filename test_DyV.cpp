#include<iostream>
#include<vector>
#include"DyV.h"

int main(){

	std::vector<int> a(5);         
	std::vector<float> b{2.5,3,5,6.7,7,7,8,9,10};      
	

	int pos1 = BusquedaBinaria(4,a,0,4);
	int pos2 = BusquedaBinaria(6.7f,b,0,8);
	

	cout<<" x1 = "<<pos1<<" x2 = "<<pos2<<endl;


	std::vector<int> c{2,5,4,3,1};
	std::vector<float> d{2.3,2.3,5.6,1,8,1.4};
          
	QuickSort(c,0,4);
	QuickSort(d,0,5);

        for(int i=0;i<5;i++){
		cout<<c[i]<<" ";
	}
		cout<<"\n";

	
	for(int j=0;j<6;j++){
		cout<<d[j]<<" ";
	}

	return 0;
	   }
