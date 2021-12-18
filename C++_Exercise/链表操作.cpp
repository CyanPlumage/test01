#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
void list_insert(Node* end,int x){
	//�����½�� 
	Node *temp = new Node; 
	temp->data = x;
	temp->next = NULL;
	//���½���������β�� 
	end->next = temp;
	//end = temp;
	 
	return;
}
//��ת���� 
Node* list_reverse(Node* Head){
	if(Head->next == NULL){
		return Head;
	}
	Node* pre = NULL;
	Node* now = Head->next ;
	while(now != NULL){
		Node* temp = now->next ;
		now->next = pre;
		pre = now;
		now = temp;
	}
	//����һ���µ�ͷ��㣬�нӴ˷�ת���� 
	Node* new_head = new Node;
	new_head->next = pre;
	return new_head; 
}
//��ת����ʽ2
Node* list_reverse2(Node* Head){
	if(Head->next == NULL){
		return Head;
	}
	Node* temp = Head->next ;
	Head->next = NULL;
	Node* tail;
	while(temp != NULL){
		tail = temp;
		temp = temp->next ;
		
		tail->next = Head->next ;
		Head->next = tail;
		
	}
	return Head; 
} 
//��ӡ���� 
void print_list(Node* Linklist){
	Node* now = Linklist->next;
	while(now != NULL){
		cout << now->data ;
		if(now->next != NULL){
			cout << " ";
		}
		now = now->next;
	}
	cout << endl;
	return; 
}
int main(){
	int x;
	//����ͷ��� 
	Node* Linklist = new Node;
	Linklist->data = 0; 
	Linklist->next = NULL; //ͷ����ʼָ����ΪNULL 
	Node* now = Linklist;
	//�����������ݣ��ǵ�ʹ��Ctrl + Z�˳�ѭ�� 
	while(cin >> x){
		
		list_insert(now,x);
		now = now->next;
	}
	//ע���������ת֮��ԭ����ͷ����Ѿ������������ͷ����� 
	//��ӡ����
	cout << "��������Ϊ��" << endl;
	print_list(Linklist); 
	//��ӡ��ת����
	cout << "��ʽ1��ת����" << endl; 
	Node* list_1 = list_reverse(Linklist);
	print_list(list_1); 
	//��ӡ��ʽ2��ת������ 
	cout << "��ʽ2��ת����" << endl;
	print_list(list_reverse2(list_1));
	return 0;
}
