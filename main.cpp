#include <iostream>

using namespace std;

bool islowervowel(char c){
    switch(c){
    case 'a':
    return true;
    case 'o':
    return true;
    case 'e':
    return true;
    case 'i':
    return true;
    case 'u':
    return true;
    break;
    default:
        return false;
    }
}
    void test_case(char a){
    if(islowervowel(a)) cout<<"PASS";
    else cout<<"fail";
    }
int main()
{
    char input;
    cin>>input;
    test_case(input);
    return 0;
}
