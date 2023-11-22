#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;

int mochila(int N,int* p,int* b,int M,int* sol){


    int **res = new int*[N + 1];

    for (int i = 0; i < N + 1; ++i) {
        res[i] = new int[M + 1];
    }
    res[0][0] = 0;
    for (int i = 1; i < M+1; i++) {
        res[0][i] = -1;
    }

    for (int i = 1; i < N+1; i++) {
        res[i][0] = 0;
    }

    for(int i=1;i<N+1;i++){
        for(int j=1;j<M+1;j++){
            if (j< p[i-1]){
                res[i][j] = res[i-1][j];
            }
            else{
             res[i][j] = max(res[i - 1][j], res[i-1][j - p[i - 1]] + b[i-1]);

            }
        }
    }
    int i = N;
    int j = M;

    while (j>0){
	    if (res[i][j] == res[i-1][j])
		    i--;
	    else{
		    sol[i] = 1;
	            j = j - p[i] ;
		    i--;
                }
    }
	    	



    return res[N][M];
}

int main(){

    int N = 4;
    int M = 5;
    int b[] = {10,20,15,20};
    int p[] = {1,3,2,4};
    int sol[N] = {0,0,0,0};

    cout<< mochila(N,p,b,M,sol)<<endl;
     for(int i = 1; i < N+1; i++){
	std::cout<<sol[i]<<" "<<std::endl;
  }
  
}
