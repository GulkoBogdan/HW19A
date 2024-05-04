#include <iostream>
using namespace std;
int main() {
	//1
	int n1a = rand() %6;
	int n1b = rand() % 6;
	int r1 = n1a + n1b;
	cout << "Your summ of cubes is: " << r1<<endl;
	

	//2	
	int n2 = rand() % 7;
    switch (n2)
    {
    case 1:
        std::cout << "Your cokeis number is 1" << "\n";
        break;
    case 2:
        std::cout << "Your cokeis number is 2" << "\n";
        break;
    case 3:
        std::cout << "Your cokeis number is 3" << "\n";
        break;
    case 5:
        std::cout << "Your cokeis number is 5" << "\n";
        break;
    case 6:
        std::cout << "Your cokeis number is 6" << "\n";
        break;
    case 7:
        std::cout << "Your cokeis number is 7" << "\n";
        break;
    case 4:
        std::cout << "Your cokeis number is 4" << "\n";
        break;
    }
    //3
    int n;
    
    cin >> n;
    int i = n / 2;
    while (n % i != 0) i--;
    if (i != 1) cout << "greatest del " << i << endl;
    else cout << "simple number \n";
    system("pause");
    return 0;
    }
