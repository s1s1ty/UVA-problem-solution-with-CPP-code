#include<iostream>
#include<cstdio>
#include<cstring>
 using namespace std;
 int main()
 {
     char s[10010]; int len=34,i;
     while(gets(s))
     {
         //len=34;
         for(i=0;i<strlen(s);i++)
         {
             if(s[i]=='?') printf("%c",len);
             else if(s[i]=='>') cout<<"G";
             else if(s[i]=='<') cout<<"V";
             else if(s[i]=='M') cout<<"W";
             else if(s[i]=='N') cout<<"N";
             else if(s[i]=='B') cout<<"I";
             else if(s[i]=='V') cout<<"<";
             else if(s[i]=='C') cout<<"X";
             else if(s[i]=='X') cout<<"Z";
             else if(s[i]=='Z') cout<<")";
             else if(s[i]=='"') cout<<"_";
             else if(s[i]==':') cout<<"K";
             else if(s[i]=='L') cout<<"C";
             else if(s[i]=='K') cout<<"D";
             else if(s[i]=='J') cout<<"T";
             else if(s[i]=='H') cout<<"H";
             else if(s[i]=='G') cout<<"E";
             else if(s[i]=='F') cout<<"A";
             else if(s[i]=='D') cout<<"(";
             else if(s[i]=='S') cout<<"*";
             else if(s[i]=='A') cout<<"&";
             else if(s[i]=='}') cout<<"+";
             else if(s[i]=='{') cout<<":";
             else if(s[i]=='P') cout<<"B";
             else if(s[i]=='O') cout<<"Y";
             else if(s[i]=='I') cout<<"U";
             else if(s[i]=='U') cout<<"S";
             else if(s[i]=='Y') cout<<"R";
             else if(s[i]=='T') cout<<"O";
             else if(s[i]=='R') cout<<">";
             else if(s[i]=='E') cout<<"^";
             else if(s[i]=='W') cout<<"%";
             else if(s[i]=='Q') cout<<"$";
             else if(s[i]=='+') cout<<"}";
             else if(s[i]=='_') cout<<"{";
             else if(s[i]==')') cout<<"?";
             else if(s[i]=='(') cout<<"P";
             else if(s[i]=='*') cout<<"F";
             else if(s[i]=='&') cout<<"M";
             else if(s[i]=='^') cout<<"L";
             else if(s[i]=='%') cout<<"J";
             else if(s[i]=='$') cout<<"Q";
             else if(s[i]=='#') cout<<"#";
             //shift//

             else if(s[i]=='4') cout<<"q";
             else if(s[i]=='5') cout<<"j";
             else if(s[i]=='6') cout<<"l";
             else if(s[i]=='7') cout<<"m";
             else if(s[i]=='8') cout<<"f";
             else if(s[i]=='9') cout<<"p";
             else if(s[i]=='0') cout<<"/";
             else if(s[i]=='-') cout<<"[";
             else if(s[i]=='=') cout<<"]";
             else if(s[i]=='q') cout<<"4";
             else if(s[i]=='w') cout<<"5";
             else if(s[i]=='e') cout<<"6";
             else if(s[i]=='r') cout<<".";
             else if(s[i]=='t') cout<<"o";
             else if(s[i]=='y') cout<<"r";
             else if(s[i]=='u') cout<<"s";
             else if(s[i]=='i') cout<<"u";
             else if(s[i]=='o') cout<<"y";
             else if(s[i]=='p') cout<<"b";
             else if(s[i]=='[') cout<<";";
             else if(s[i]==']') cout<<"=";
             else if(s[i]=='a') cout<<"7";
             else if(s[i]=='s') cout<<"8";
             else if(s[i]=='d') cout<<"9";
             else if(s[i]=='f') cout<<"a";
             else if(s[i]=='g') cout<<"e";
             else if(s[i]=='h') cout<<"h";
             else if(s[i]=='j') cout<<"t";
             else if(s[i]=='k') cout<<"d";
             else if(s[i]=='l') cout<<"c";
             else if(s[i]==';') cout<<"k";
             else if(s[i]=='\'') cout<<"-";
             else if(s[i]=='/') cout<<"'";
             else if(s[i]=='.') cout<<"g";
             else if(s[i]==',') cout<<"v";
             else if(s[i]=='m') cout<<"w";
             else if(s[i]=='n') cout<<"n";
             else if(s[i]=='b') cout<<"i";
             else if(s[i]=='v') cout<<",";
             else if(s[i]=='c') cout<<"x";
             else if(s[i]=='x') cout<<"z";
             else if(s[i]=='z') cout<<"0";
             else cout<<s[i];

         }
         cout<<endl;
     }
     return 0;
 }
