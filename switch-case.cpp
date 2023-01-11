#include<iostream>
using namespace std;

int main(){
	char choice = ' ';
	cout << "Question : Dau la thu do cua Viet Nam ? \n";
	cout << "A. Ha Noi \n";
	cout << "B. Thanh pho Ho Chi Minh \n";
	cout << "C. Da Nang \n";
	cout << "Nhap dap an cua ban : \n";
	cin >> choice;
	
	switch(choice){
		case 'A':
		case 'a':
			cout << "True";
			break;
		case 'B':
		case 'b':
			cout << "False";
			break;
		case 'C':
		case 'c':
			cout << "False";
			break;
		default :
			cout << "Dap an ban nhap khong hop le";
	}
	
	return 0;
	
}
