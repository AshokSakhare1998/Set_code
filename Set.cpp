#include<iostream>
#include<set>
#include<iterator>

using namespace std;


int main(){
    set<int, greater<int> >s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(25);
    
    s1.insert(50);
    s1.insert(10);
    s1.insert(25);
    
    set<int ,greater<int> >::iterator itr;
    cout<<"\n The set is s1"<<endl;
    for(itr=s1.begin();itr !=s1.end();itr++){
        cout<<*itr<<" ";
        
    }
    cout<<endl;
    set<int> s2(s1.begin(), s1.end());
    cout<<"\ns2 after removal of element less than 30"<<endl;
    s1.erase(s1.begin(),s1.find(30));
    for(itr=s2.begin();itr !=s2.end();itr++){
        cout<<*itr<<" ";
        
    }
    int num;
    num=s2.erase(50);
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }

    cout << endl;
    cout<<"s1.lower_bound(40):"<<*s1.lower_bound(40)<<endl;
    cout<<"s1.Upper_bound(40):"<<*s1.upper_bound(40)<<endl;
    cout<<"s1.lower_bound(40):"<<*s2.lower_bound(40)<<endl;
    cout<<"s1.Upper_bound(40):"<<*s2.upper_bound(40)<<endl;
    
   
    
    return 0;
    
}