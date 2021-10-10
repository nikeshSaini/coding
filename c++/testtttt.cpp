#include <iostream>
using namespace std;

//class definition
class Pair{
public:
int a,b,sum();
};
int main()
{
Pair p;
p.a = 100;
p.b = 200;
if (p.a + p.b == p.sum()) {
cout << "Success!" << endl;
} else {
cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << endl;
}
return 0;
}