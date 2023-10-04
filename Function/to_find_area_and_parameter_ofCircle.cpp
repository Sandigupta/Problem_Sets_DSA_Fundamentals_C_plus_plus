// #include<iostream>
// using namespace std;
// void area_parametr(int );

// int main(){
//     int r;
//     cout<<"Enter the radius: ";
//     cin>>r;
//     area_parametr(r);
// }
// void area_parametr(int x){
//     cout<<"Parameter="<<(2*3.14*x)<<endl;
//     cout<<"Area="<<(3.14*x*x)<<endl;
    
// }

/*<------------------------------ METHOD SECOND--------------------------------------->*/
// #include<iostream>
// using namespace std;

// void area(int);
// void parametar(int);

// int main(){
//     int r;
//     cout<<"Enter the radius of the circle: "<<endl;
//     cin>>r;
//     area(r);
//     parametar(r);
// }
// void area(int x){
//     cout<<"Area="<<(3.14*x*x)<<endl;
// }
// void parametar(int y){
//     cout<<"Parametar="<<(2*3.14*y)<<endl;
// }

/*<------------------------------ METHOD 3RD--------------------------------------->*/
 #include<iostream>
using namespace std;

double area(int);
double parametar(int);

int main(){
    int r;
    cout<<"Enter the radius of the circle: "<<endl;
    cin>>r;
   cout<<"Area="<<area(r)<<endl;
    cout<<"Parametar="<<parametar(r)<<endl;
}
double area(int x){
    return 3.14*x*x;
}
double parametar(int y){
    return 2*3.14*y;
}
