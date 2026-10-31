#include <iostream>

using namespace std;
int main() {

	float l1, l2, l3;

	cout << "Verificação de formar um Triângulo. \n \n";
	cout << "Informe o primeiro lado: ";
	cin >> l1;
	cout << "Informe o segundo lado: ";
	cin >> l2;
	cout << "Informe o terceiro lado: ";
	cin >> l3;

	if((l1 < (l2 + l3)) && (l2 < (l1 + l3)) && (l3 < (l1 + l2))) {
	cout << "Os lados são: " << l1 << ", " << l2 << " e " << l3 << " e formam um Triângulo!! \n";

} else {
	cout << "Os lados são: " << l1 << ", " << l2 << " e " << l3 << " e  não formam um Triângulo!! \n";

}
return 0;
}