#include<iostream>
#include<ctime>
#include<cstdlib>

int main()
{
	std::cout << "Enter two nimbers - ";
	int X, Y;
	std::cin >> X >> Y;

	int* px = &X, *py = &Y;

	std::cout << "X= " << X << " px = " << *px << " Y= " << Y << " py = " << *py << "\n";
	
	int temp = *px;
	*px = *py;
	*py = temp;

	std::cout << "X= " << X << " px = " << *px << " Y= " << Y << " py = " << *py << "\n";



	return 0;
}