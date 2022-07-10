#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    //Input Process
    string str;
    cin >> str;
    cout << str<<endl;
    
    //
    string str1(5,'n');
    cout << str1 << endl;
    //Input Value
    string str2="ApniKaksha";
    cout << str2 << endl;

    //With Space Input in a string
    string str3;
    getline(cin,str3);
    cout << str3<< endl;

    //Append String
    string s1="fam";
    string s2="ily";

    s1.append(s2);
    cout << s1 <<endl;
    //or
    // s1=s1+s2;
    // cout << s1 << endl;

    //Particular Character access
    cout << s1[1]<<endl;

    //clear fn in string
    string abc = "ssjjdbkkkkkwbd wjhe wn";
    abc.clear();
    cout << abc<<endl;

    //Compare in String
    string sr1 = "abc";
    string sr2 = "xyz";
    if (sr2.compare(sr1)==0) // Same String then return 0,else=1
    {
        cout << sr1<< endl;
    }
    
    cout << sr2.compare(sr1)<<endl;

    //empty() in string
     string sr3 = "abc";
     sr3.clear();
     if (sr3.empty())
     {
         cout << "string is empty"<<endl;
     }
     //erase() in string
     string  sr4="nincompoop";
     sr4.erase(3,3);
     cout << sr4<<endl;

     //find() in string
     string sr5 ="nincompoop";
     int pos=sr5.find("poop");
     cout << pos<< endl;

     //insert() in string
     string sr6 = "nincompoop";
     sr6.insert(2,"LOL");
     cout << sr6 << endl;

     //size() in string
     string sr7 = "nincompoop";
     int size = sr7.size();
     cout << size << endl;

     //substr() in string
     string sr8 = "nincompoop";
     string sr9 = sr8.substr(6,4);
     cout << sr9 << endl;

     //string to integer//stoi() in string
     string str4 ="786";
     int x = stoi(str4);
     cout << x+2 << endl;
     
     //integer to string // to_string() in fn
     int p=786;
     cout << to_string(p)+"2"<<endl;

     //sort string // Header File = #include<algorithm>
     string str5= "vcxcjdghahvdbcvbzsd";
     sort(str5.begin(),str5.end());
     cout << str5 << endl;
     return 0;
}