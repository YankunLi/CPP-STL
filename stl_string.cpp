#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


int main(int argc, char** argv)
{
    cout<<"hello world"<<endl;

    cout<<"#################create string instance#################"<<endl;
    char str[] = "abcdef";
    char *sp = str;
    string str0 = "123456";
    string str1 = str0;
    string str2(str1);
    string str3(sp);
    string str4(5, '4');
    cout<<"string str0 "<<str0<<endl;
    cout<<"string str1 "<<str1<<endl;
    cout<<"string str2 "<<str2<<endl;
    cout<<"string str3 "<<str3<<endl;
    cout<<"string str4 "<<str4<<endl;

    cout<<"#################get string operation####################"<<endl;
    char ch1 = 1;
    ch1 = str1[2]; 
    cout<<"str1[2] is "<<ch1<<endl;
    ch1 = str1.at(2);
    cout<<"str1.at(2) is "<<ch1<<endl;

    cout<<"#################convert string to char*#################"<<endl;
    const char* p = str2.c_str();
    cout<<p<<endl;
    printf("str2.c_str() the result is %s\n", p);

    cout<<"#################copy string to char*####################"<<endl;
    str4.copy(sp, 2, 1);
    printf("str4.copy(p, 3, 1) result is %s\n", sp);

    cout<<"#################get string length########################"<<endl;
    cout<<"the length of str2 is "<<str2.length()<<endl;

    cout<<"#################check whether string is enpty############"<<endl;
    if (str2.empty())
    {
        cout<<"str2 is empty"<<endl;
    }

    cout<<"################assign####################################"<<endl;
    str2 = str4;
    str4.assign(sp);
    cout<<"str2 is "<<str2<<endl;
    cout<<"str4 is "<<str4<<endl;
    str2.assign(str3);
    str3.assign(10, 'a');

    cout<<"##################connection##############################"<<endl;
    str1 += str2;
    str3.append(sp);
    cout<<"str1 is "<<str1<<endl;
    cout<<"str3 is "<<str3<<endl;

    cout<<"######################compare############################"<<endl;
    cout<<"str2.compare(str1) result is "<<str2.compare(str1)<<endl;

    cout<<"######################substr############################"<<endl;
    cout<<"str4.substr(1, 4) result is "<<str4.substr(1, 4)<<endl;

    cout<<"######################find and rfind#####################"<<endl;
    cout<<"str2 is "<<str2<<endl;
    cout<<"str2.find('c', 0) "<<str2.find('c', 0)<<endl;
    cout<<"str2.rfind('c', 6) "<<str2.rfind('c', 5)<<endl;

    cout<<"######################insert##############################"<<endl;
    str2.insert(1, str1);
    cout<<"str2 is "<<str2<<endl;

    cout<<"######################delete##############################"<<endl;
    cout<<str2.erase(2)<<endl;

    cout<<"######################replace############################"<<endl;
    cout<<str3.replace(2, 3, str2)<<endl;

    return 0;
}
