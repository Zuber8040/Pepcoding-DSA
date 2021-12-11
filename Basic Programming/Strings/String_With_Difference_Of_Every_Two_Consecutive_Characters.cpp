    #include<iostream>
    #include<string>

    using namespace std;

    void printstr(string str)
    {
    //write your code here
    int i=0;
    while(i<=str.length()-1){
        int diff = str[i+1]-str[i];
        cout<<str[i]<<diff;
        i++;
    }
    cout<<str[i];

    
    }
    int main()
    {
        string str;
        getline(cin,str);
        printstr(str);
        return 0;
    }