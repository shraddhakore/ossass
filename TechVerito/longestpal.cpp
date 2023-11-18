 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
    string S="aaa";
        int i=0;
        int j=S.size();
        string str1="",str2="";
        while(i<=j){
            if(S[i]==S[j]){
                str1+=S[i];
                str2+=S[j];
                i++;
                j++;
            }
            
            else{
                str1="";
                str2="";
                j=S.size();
            }
        }
        
        S=str1+str2;
        cout<<str1<<endl;
        return 0;

 }
 