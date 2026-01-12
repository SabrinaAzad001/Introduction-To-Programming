#include < iostream >
using namespace std;
void calculateTriangularNumber ( int n )
{
    int i, triangularNumber = 0;    local variables
    for (i = 1; i<= n; ++i)
        triangularNumber += i;
        cout<<"TriangularNumber" <<n << "is" <<triangularNumber<<endl;


}
int main (void)
{
calculateTriangularNumber (10);
calculateTriangularNumber (20);
calculateTriangularNumber (50);
return 0;
}
