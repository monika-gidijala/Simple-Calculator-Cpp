 #include<iostream>
using namespace std;
//function declaration
void add(int a,int b){
    cout <<"result:" << a+b << endl;
}
void subtract(int a,int b){
    cout <<"result:" << a-b << endl;
}
void multiply(int a,int b){
    cout << "reslut:" << a*b << endl;
}
void divide(int a,int b){
    cout << "reslut:" << a/b << endl;
}

int main(){
int a, b;
char op;
cout << ("enter first number");
cin >> a;

cout << ("enter operator");
cin >> op;

cout << ("enter second number");
cin >> b;

if(op=='+'){
    add(a,b);
}else if(op=='-'){
    subtract(a,b);
}else if(op=='*'){
    multiply(a,b);
}else if(op=='/'){
    divide(a/b);
}
    return 0;
}
