#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
void list_insert(Node* end,int x){
	//创建新结点 
	Node *temp = new Node; 
	temp->data = x;
	temp->next = NULL;
	//将新结点插入链表尾部 
	end->next = temp;
	//end = temp;
	 
	return;
}
//反转链表 
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
	//创建一个新的头结点，承接此反转链表 
	Node* new_head = new Node;
	new_head->next = pre;
	return new_head; 
}
//反转链表方式2
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
//打印链表 
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
	//创建头结点 
	Node* Linklist = new Node;
	Linklist->data = 0; 
	Linklist->next = NULL; //头结点初始指针域为NULL 
	Node* now = Linklist;
	//输入链表数据，记得使用Ctrl + Z退出循环 
	while(cin >> x){
		
		list_insert(now,x);
		now = now->next;
	}
	//注意事项：链表反转之后，原来的头结点已经不是新链表的头结点了 
	//打印链表
	cout << "输入链表为：" << endl;
	print_list(Linklist); 
	//打印反转链表
	cout << "方式1反转链表：" << endl; 
	Node* list_1 = list_reverse(Linklist);
	print_list(list_1); 
	//打印方式2反转的链表 
	cout << "方式2反转链表：" << endl;
	print_list(list_reverse2(list_1));
	return 0;
}
