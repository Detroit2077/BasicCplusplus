#include<iostream>
using namespace std;
class Unreal_Engine{
    protected:
        int a;
    public:
        int b;
};
/*For a protected member:
                            Public Derivation   Private Derivation      Protected Derivation
1. Private Members          Not inherited       Not inherited              Not inherited
2. Protected Members        Protected               Private                 Protected
3. Public Members           Public                  Private                  Protected*/
class blender : protected Unreal_Engine{

};
int main(int argc, char const *argv[])
{
    Unreal_Engine obj1;
    // obj1.a;
    blender o1;
    // o1.a; will throw an error 
    return 0;
}