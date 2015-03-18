#include <iostream>
#include <string>
using namespace std;

void pHr(){
    for(int i=0; i<80; i++){
        printf("-");
    }
}
int main(){
    string str,str1;
    int cnt = 0;
    while(cin >> str){
        int len = str.length();
        if(str == "<br>"){
            cout << endl;
            cnt = 0;
        }else if(str == "<hr>"){
            if(cnt) cout<<endl;
            pHr();
            cout<<endl;
            cnt = 0;
        }else{
            if(cnt+len+1 <= 80){
                if(cnt){
                    cout<<" ";
                    cnt++;
                }
                cout<<str;
                cnt += len;
            }else{
                cout<<endl;
                cnt = len;
                cout<<str;
            }
        }
    }
    cout<<endl;
    return 0;
}
