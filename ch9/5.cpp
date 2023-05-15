#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void swap(char& v1, char& v2);

string reverse(const string& s);

string makeLower (const string& s);

int main(void)
{
    string str;
    getline(cin, str);
    cout <<"The reverse of str is :\n";
    cout <<reverse(str)<<endl;
    for(int i=0;i<str.length();i++){
    if (isupper(str[i])){
        str[i]=tolower(str[i]);
    }
    else if (islower(str[i])){
        str[i]=toupper(str[i]);
    }
    }
   cout <<"大小寫轉換:\n";
   cout <<str<<endl;
    return 0;
}
void swap(char& v1, char& v2)
{
    char temp = v1;
    v1 = v2;
    v2 = temp;
}

string reverse(const string& s)
{
    int start = 0;
    int end = s.length( );
    string temp(s);

    while (start < end)
    {
       end--;
       swap(temp[start], temp[end]);
       start++;
    }

    return temp;
}

string makeLower(const string& s)
{
    string temp(s); 
    for (int i = 0; i < s.length( ); i++)
        temp[i] = tolower(s[i]);

    return temp;
}






