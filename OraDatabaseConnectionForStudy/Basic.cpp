

#include <string>
#include <iostream>

using namespace std;


struct Hello
{
	char a[20];
	int b;
};
void main() {


	struct  Hello h1, h2;
	h1 = { "Alice" , 20 };
	
	//strcpy_s(h1.a, "abcdefg");
	//h1.b = 123;
	printf("%s\n", h1.a);
	printf("%d\n", h1.b);



	cout << "asd" << endl;


	char a[6] = { 'H', 'e', 'l' , 'l' , 'o' };
	cout << a << endl;

	char b[] = "hello world!";

	cout << b << endl;
 
	const int Size = 15;
	char name1[Size];
	cin.getline(name1, Size);

	printf_s("%s", name1);


	string str;
	cout << "문자열 입력: ";
	getline(cin, str);
	cout << "입력한 문자열: " << str << endl;
	
	
}