#include<iostream>
#include<vector>

using namespace std;

template <typename T>

int BusquedaBinaria(T x,const vector<T>& a,int ini,int fin){
       
	if (ini>fin){
		cout<<"El numero no se encuentra en el array"<<endl;
		return -1;
	}

        int medio =(ini+fin)/2;

	if(a[medio] == x){
		return medio;
	}else if(a[medio] > x){
		return BusquedaBinaria(x,a,ini,medio-1);
	}else{
		return BusquedaBinaria(x,a,medio+1,fin);
        }
}


