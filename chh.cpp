#include<iostream>
using namespace std;
int main() {
	char ch;
	cout << "Enter character: ";
	cin >> ch;
	ch = tolower(ch);
	if (isalpha(ch)) {
		if (isupper(ch)) {
			cout << "Upper case"<<endl;
		}
		else {
			cout << "Lower case"<<endl;
		}
		cout << "input is character"<<endl;
	}
	else if (isdigit(ch)) {
		cout<<"Input is integer"<<endl;
	}
	else {
		cout<<"A special character"<<endl;
	}
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
		cout << "Vovels"<<endl;
	}
	else {
		cout << "Not from vovels"<<endl;
	}


}