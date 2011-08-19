#include<string>
#include<iostream>
using namespace std;

class letter{
public:
  //文字の入力
  string input_letter(){
    string let;
    cout<<"Please Input Letter\n";
    cin>>let;
    return let;  
  }
  
  //文字の点数換算
  int letter_point(string let){
    int f=0;
    int point=0;
    // scanf("%c",letter);
    if(let=="@")
      {
	return -1;
      }    

    for(int i=0;i<let.size();i++){
    if(let[i]=="a") point+=2;
    else if(let[i]=="b") point +=5; 
    else if(let[i]=="c") point +=4;
    else if(let[i]=="d") point +=4;
    else if(let[i]=="e") point +=1;  
    else if(let[i]=="f") point +=6;
    else if(let[i]=="g") point +=5;
    else if(let[i]=="h") point +=5;
    else if(let[i]=="i") point +=1;
    else if(let[i]=="j") point +=7;
    else if(let[i]=="k") point +=6;
    else if(let[i]=="l") point +=3;
    else if(let[i]=="m") point +=5;
    else if(let[i]=="n") point +=2;
    else if(let[i]=="o") point +=3;
    else if(let[i]=="p") point +=5;
    else if(let[i]=="q") point +=7;
    else if(let[i]=="r") point +=2;
    else if(let[i]=="s") point +=1;  
    else if(let[i]=="t") point +=2;
    else if(let[i]=="u") point +=4;
    else if(let[i]=="v") point +=6;
    else if(let[i]=="w") point +=6;
    else if(let[i]=="x") point +=7;
    else if(let[i]=="y") point +=5;
    else if(let[i]=="z") point +=7;
    }
    return point;
  }
};



int  main(){

  int max=0;//その点での最大値
  int flag=0; //カンマがでたら1になる
  letter l1;
  string str;
  str=l1.input_letter();
  if(max<l1.letter_point(str)){
    max=l1.letter_point(str);
  }
  
  cout <<max;
}

