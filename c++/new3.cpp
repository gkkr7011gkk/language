#include <iostream>
using namespace std;

int c = 45;
int main() {
    /**************Biuld in data types *****************/
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c;
    // cout<<"The global c is "<<::c;

    /************** Float, double and long double literal *****************/

    // float d=34.4f;
    // long double e=34.4l;
    // cout<<"The size of 34.4 is"<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is"<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4F is"<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4l is"<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4L is"<<sizeof(34.4)<<endl;
    // cout<<"The value of d is"<<d<<endl<<"The value of e is" <<e;

    /************** Refrence Variable *****************/
    //  float x = 455;
    //  float & y = x;
    //  cout<<x<<endl;
    //  cout<<y<<endl;

    /************** Typecasting *****************/
    int a = 45;
    float b = 45.46;
    cout << "The value of a is" << (float)a << endl;
    cout << "The value of a is" << float(a) << endl;

    cout << "The value of b is" << (int)b << endl;
    cout << "The value of b is" << int(b) << endl;
    int c = int(b);

    cout << "The experssion is" << a + b;
    cout << "The experssion is" << a + int(b);
    cout << "The experssion is" << a + (int)b;
    cout << "Hello world";

    return 0;
}