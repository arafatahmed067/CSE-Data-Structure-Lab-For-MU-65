#include<bits/stdc++.h>
using namespace std;
struct address{
    string city;
    int zipcode;

};
struct student {
    int id ;
    string name;
    address studentaddress;
};
int main()
{
student s1;
s1.id = 261115067;
s1.name = "Arafat";
s1.studentaddress.city = "sylhet";
s1.studentaddress.zipcode = 3100;
cout<<s1.name<<" Lives in "<<s1.studentaddress.city<<endl;
}