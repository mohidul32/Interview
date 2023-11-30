// 2 complex number add.
#include <iostream>
using namespace std;
 
class Complex {
private:
    int real, imag;
 
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};
 
int main()
{
    Complex c1(10, 5), c2(2, 4),c4(5,6);
    Complex c4 = c1 + c2 + c4;
    c3.print();
}
// #include <iostream>
// using namespace std;
// class call{
// public:
// 	int n;
// 	call(int x){
// 		n=x;
// 	}
// 	void operator --(){
// 		n = n - 5;
// 	}
// 	void operator ++(){
// 		n = n + 5;
// 	}
// 	void Display() {
// 		cout << n<<endl;
// 	}
// };
// int main(){
// 	call c(10);
// 	--c;
// 	c.Display();
// 	c.n=10;
// 	++c;
// 	c.Display();
// 	return 0;
// }