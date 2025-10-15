#include <iostream>
using namespace std;

// class student
// {

// public:
//     string Name;
//     int RollNo;
//     int arr[20];

//     void getdetails()
//     {
//         cout << "Name you added: " << Name << endl;
//         cout << "ROll NO. you added: " << RollNo << endl;
//         cout<<"array";
//         for(int i=0;i<5;i++){
//             cout<<arr[i]<<" ";
//         }
//     }

// };

// int main()
// {
//     class student S1;
//     S1.Name="Ashish";
//     S1.RollNo = 20;
//     cout<<"enter array: ";
//     for(int i=0;i<5;i++){
//         cin>>S1.arr[i];
//     }
//     // class student S2;
//     // S2.Name="Ashish 2";
//     // S2.RollNo = 202;

//     S1.getdetails();
//     // S2.getdetails();
// }


// array of class

// class student{

// public:
//     string Name;
//     int RollNo;

//     void getdetails(){
//         cout << "Name you added: " << Name << endl;
//         cout << "ROll NO. you added: " << RollNo << endl;
//     }

// };

// int main()
// {
//     class student arr[5];
    
//     cout<<"enter array: ";
//     for(int i=0;i<5;i++){
        
//         cout<<"enter array: "<<i;
        
//         cin>>arr[i];
    
//     }

//     S1.getdetails();
// }



//constructor

// private

// class student
// {
// private:
//     string Name;
//     int RollNo;

// public:

//     void setdetails(string s, int a)
//     {
//         Name = s;
//         RollNo = a;
//     }
//     void getdetails()
//     {
//         cout << "Name you added: " << Name;
//         cout << "ROll NO. you added: " << RollNo;
//     }
// };

// int main()
// {
//     class student S1;
//     S1.setdetails("Ashish",20);

//     S1.getdetails();
// }


class student
{
private:
    string Name;
    int RollNo;

public:
    student(string s, int a)
    {
        Name = s;
        RollNo = a;
    }
    void getdetails()
    {
        cout << "Name you added: " << Name<<endl;
        cout << "ROll NO. you added: " << RollNo;
    }
};

int main()
{
    student S1("Ashish", 20);

    S1.getdetails();
}


2965 and 287