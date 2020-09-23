#include <stdio.h>
#include <iostream>
#include <cstdlib>
int n;
int **matriz;
void mostar();
void llenar();

using namespace std;

int main(){ 
	int n=6;
	matriz=new *int[6];
	for(int i=0;i<n;i++){
		matriz[i]=new int[3];
	}
//	int matriz[n][n];
	
	matriz[0][0]=1;
	matriz[1][0]=1;
	matriz[1][1]=1;
	

	llenar(matriz);
	mostar(matriz);
	
	return 0;
}



void llenar(){
	for(int i=2;i<n;i++){
		matriz[i][0]=1;
	}
	
	for(int i=2;i<n;i++){
		for(int j=1;j<n;j++){
			if(j==i){
				matriz[i][j]=1;
			}else{
				matriz[i][j]=matriz[i-1][j-1]+matriz[i-1][j];
			}
		}
			
	}
}
void mostar(){
	for(int i=0;i<n;i++)
	{	for(int j=0;j<n;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}





//int matriz[6][6];
//int n;
//
//using namespace std;
//
//int main(){ 
//	n=6;
//
//	matriz[0][0]=1;
//	matriz[1][0]=1;
//	matriz[1][1]=1;
//	
//	for(int i=2;i<n;i++){
//		matriz[i][0]=1;
//	}
//	
//	for(int i=2;i<n;i++){
//		for(int j=1;j<n;j++){
//			if(j==i){
//				matriz[i][j]=1;
//			}else{
//				matriz[i][j]=matriz[i-1][j-1]+matriz[i-1][j];
//			}
//		}
//			
//	}
//	
//	for(int i=0;i<n;i++)
//	{	for(int j=0;j<n;j++){
//			cout<<matriz[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	return 0;
//}

