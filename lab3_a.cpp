#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<cstdlib>

using namespace std;


int main() {
	
	 
	ifstream in("file.in",ios::in);
	if(!in){
		cerr<<"File could not be opened!"<<endl;
		return -1;
	}
	
	int n; //儲存讀入的數	
	in>>n; //讀入總共資料數 
	int arr[n]; //創造儲存資料數列 
	int i = 0; //計算陣列中的位置 
	
	while(in>>arr[i]){ //將數值讀入陣列 
		//cout<<arr[i]<<endl; //測試讀入數值 
		i++;
	}
	
	vector<int> arrVector(arr,arr+n); //將原來的arry轉成vector的型態  vector<"想轉成的type"> "名稱"("轉換成vector型態之原arry",原arry+大小); 
	sort(arrVector.begin(),arrVector.end()); //尤小到大排序
	
   int sum = 0; //前五項之總和 
	for(i=0;i<5;i++){
		sum=sum+arrVector[n-1-i]; //因為向量之大小為處存n個數，編號0~n-1(最末項)。 
	}
	
	cout<<"Sum of top five cows:"<<sum<<endl;
	
	
	
	
	
	
	return 0;
}
