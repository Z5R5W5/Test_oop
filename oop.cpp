#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
enum brothers {ziad=1,tarek,ahmad};
class oop{
private:
    int x;
    int y;
    static int co;
    string s;

public:
    oop();
    oop(int xt,string st){
        s=st;x=xt;
    } 
    void pr(){
        co++;

        cout<<"id = "<<x<<'\n'<<
            "name = "<<s<<'\n'<<
            "count objects = "<<co<<'\n';
            
    }
    friend int sum();
   

    

};
    int oop:: co=0;

oop::oop(){
    cout<<"enter x \n";
    cin>>x;
    cout<<"enter y \n";
    cin>>y;
    // cout<<"enter name \n";
    // cin>>s;
    
    
}
int sum(){
    oop ob;
    return ob.x+ob.y;
}
int main(){
    cout<<sum();
    oop ob[3];
   
    cout<<"=================mm===============\n";
    for(int i=0;i<3;i++){
        ob[i].pr();
    }
    // oop a[2];
    // for(int i=0;i<2;i++){
    //     a[i].pr();
    // }
//    brothers br[3]={ziad,tarek,ahmad};
//    for(int i=0;i<3;i++){
//     cout<<br[i]<<' ';
//    }
//    int xx=brothers::tarek;
//    cout<< xx;


   
    


}