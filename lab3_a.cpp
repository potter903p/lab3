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
	
	int n; //�x�sŪ�J����	
	in>>n; //Ū�J�`�@��Ƽ� 
	int arr[n]; //�гy�x�s��ƼƦC 
	int i = 0; //�p��}�C������m 
	
	while(in>>arr[i]){ //�N�ƭ�Ū�J�}�C 
		//cout<<arr[i]<<endl; //����Ū�J�ƭ� 
		i++;
	}
	
	vector<int> arrVector(arr,arr+n); //�N��Ӫ�arry�নvector�����A  vector<"�Q�ন��type"> "�W��"("�ഫ��vector���A����arry",��arry+�j�p); 
	sort(arrVector.begin(),arrVector.end()); //�פp��j�Ƨ�
	
   int sum = 0; //�e�������`�M 
	for(i=0;i<5;i++){
		sum=sum+arrVector[n-1-i]; //�]���V�q���j�p���B�sn�ӼơA�s��0~n-1(�̥���)�C 
	}
	
	cout<<"Sum of top five cows:"<<sum<<endl;
	
	
	
	
	
	
	return 0;
}
