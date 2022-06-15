#include <iostream>

using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *headNode = NULL;
Node *currentNode = NULL;

bool isEmpty();
void insertNode(int data);
void deleteFormFornt();
void deleteFormEnd();
void deleteALL();
void print();

int main(){
	
	int pilihanMenu;
	int data;
	
	do{
		cout<<">>> PILIHAN MENU SINGLY LINKED LIST <<<"<<endl;
		cout<<"1. Menambahkan Node"<<endl;
		cout<<"2. Menghapus Node dari depan"<<endl;
		cout<<"3. Menghapus Node dari belakang"<<endl;
		cout<<"4. Mengosongkan Node"<<endl;
		cout<<"5. Menampilakn Node"<<endl;
		cout<<"6. Selesai"<<endl;
		cout<<endl;
		
		cout<<"Masukan Pilihan Anda : "; cin>>pilihanMenu;
		cout<<endl;
		
		switch (pilihanMenu){
			case 1:
				cout<<"Masukan data : "; cin>>data;
				cout<<endl;
				insertNode(data);
				break;
				
			case 2:
				deleteFormFornt();
				break;
				
			case 3:
				deleteFormEnd();
				break;
				
			case 4:
				deleteALL();
				break;
				
			case 5:
				print();
				break;
				
			case 6:
				cout<<"Terinmakasih (^-^)//"<<endl<<endl;
				break;
				
		}
	}
	while(pilihanMenu !=6);
		cout<<endl<<endl;
		
		system("pause");
		return 0;
}

bool isEmpty(){
	
	return (headNode == NULL);
}

void insertNode(int data){
	Node *newNode = NULL;
	
	newNode = new Node;
	
	newNode->data = data;
	
	if (isEmpty()){
		headNode = newNode;
	}else{
		currentNode->next = newNode;
	}
	
	currentNode = newNode;
	currentNode->next = NULL;
	
	cout<<"Node barhasil di tambahkan "<<endl<<endl;
}
void deleteFormFornt(){
	if (!isEmpty()){			
		Node *hapusNode = headNode;	
		headNode = headNode->next;	
		delete hapusNode;	
		cout<<"Node barhasil dihapus"<<endl<<endl;
	}
}
void deleteFormEnd(){
	if(headNode == currentNode){
		headNode = NULL;
		currentNode = NULL;
		
		return;
	}
		Node *bantu = headNode;
		Node *hapusNode = currentNode;
		
	while(bantu->next != currentNode){
		bantu = bantu -> next;
	}
	currentNode = bantu;
	currentNode->next = NULL;
	
	delete hapusNode;
	cout<<"Node berhasil dihapus"<<endl<<endl;
}
void deleteALL(){

	Node *bantu, *hapusNode;
	bantu = headNode;

	while (bantu->next != currentNode){
		hapusNode = bantu;
		bantu = bantu->next;
		
		delete hapusNode;
	}
	headNode = NULL;
	currentNode = NULL;
	
	cout<<"Node berhasil dikosongkan"<<endl<<endl;
	}
	
void print(){
	Node *awalNode = headNode;
	
	int i = 1;
	
	while (awalNode != NULL){
		cout<<"Data pada node #"<<i<<" = "<<awalNode->data<<endl;
		awalNode = awalNode->next;
		
		i++;
		}
	cout<<endl;
}
