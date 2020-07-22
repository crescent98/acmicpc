#include <iostream>
#include <vector>
using namespace std;

void query1(vector<int>* vlink,int s, int t, int x);
void query2(vector<int>* vlink, int s, int t,int k);

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	// N �Է� 
	long long N;
	long long K;
	cin>>N>>K;
	int temp;
	vector <int> iv;
	
	// A1, A2, ... , AN �Է�
	for(int i=0;i<N;i++) {
		cin>>temp;
		iv.push_back(temp);
	}
	
	int M;
	cin>>M;
	int qCon[3];
	// query �ױ� -> ���⼭ �ѹ��� ó���ϴ� ���
	// ���� ���� �ޱⰢ ������ ��  
	for(int i=0;i<M;i++) {
		cin>>temp;
		
		//Query 1
		if (temp==1) {
			// l
			cin>>qCon[0]>>qCon[1]>>qCon[2];
			query1(&iv, qCon[0],qCon[1],qCon[2]);
		}
		
		//Query 2
		else if (temp==2){
			// l r
			cin>>qCon[0]>>qCon[1];
			query2(&iv,qCon[0],qCon[1],K);
		}
	}
	return 0;
}

void query1(vector<int>* vlink,int s, int t, int x){
	vector <int>::iterator ptr;
	for(ptr=(*vlink).begin()+s-1;ptr<(*vlink).begin()+t;++ptr){ // ptr<t
		*ptr=(*ptr)|x;
	}
}

void query2(vector<int>* vlink, int s, int t,int k){
	vector <int>::iterator ptr;
	int count=0;
	for(ptr=(*vlink).begin()+s-1;ptr<(*vlink).begin()+t;++ptr){
		if(*ptr==k){
			count++;
		}
	}
	cout<<count<<"\n";
}
