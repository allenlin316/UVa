#include <iostream>
using namespace std;

struct Person
{
    string name;
    string nameOfFriend[10010];
    int money = 0;
    int friends = 0;
    int netEarn = 0;
};

int main()
{
    string tmpName;
    int outputUse=0;
    int numOfpeep, index=0;
    while(cin>>numOfpeep){
            //以下為題目輸入
            if(outputUse++!=0)
                cout<<endl;
            Person person[numOfpeep];
            for(int i=0; i<numOfpeep; i++)
                cin>>person[i].name;

            for(int cases=0; cases<numOfpeep; cases++) {
                cin>>tmpName;
                for(int i=0; i<numOfpeep; i++) {
                    if(person[i].name==tmpName){
                        cin>>person[i].money>>person[i].friends;
                        index = i;
                        break;
                    }
                }
                for(int i=0; i<person[index].friends; i++){
                    cin>>person[index].nameOfFriend[i];
                }
            }
            //以下開始做處理
           int gift=0;
           for(int i=0; i<numOfpeep; i++){
                if(person[i].money==0 || person[i].friends==0){
                    gift = 0;
                    person[i].netEarn += person[i].money;
                }
                else{
                    gift = person[i].money/person[i].friends;
                    person[i].netEarn += (-1)*gift*person[i].friends; //因為送禮給別人，自己要扣錢
                }
               for(int j=0; j<person[i].friends; j++){
                   for(int k=0; k<numOfpeep; k++){
                        if(person[i].nameOfFriend[j]==person[k].name){
                            person[k].netEarn += gift;
                            break;
                        }
                   }
               }
           }
           for(int i=0; i<numOfpeep; i++){
                cout<<person[i].name<<" "<<person[i].netEarn<<endl;
           }

    }

}
