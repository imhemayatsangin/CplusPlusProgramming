#include<iostream>
#define max 100
using namespace std;

int main(){
int i,j,temp;
//int list[9]={2,3,10,45,23,43,6,75,99};
int range;

cout<<"Please enter the range of the array"<<endl;
cin>>range;

cout<<"Your array will have total ("<< range <<") elements: "<<endl;

cout<<"Now please enter your numbers for the array to be sorted"<<endl;

long list[range];

for(i=0;i<range;i++){

    cin>>list[i];
}





cout<<"My un sorted List "<<endl;
for(i=0;i<range;i++){

    cout<<list[i]<<" ";

}

cout<<"List ordering using bubble sort algorithms:"<<endl;


for(i=0;i<range;i++){

    for(j=0;j<range-i;j++){

        if(list[j]>list[j+1]){

            temp=list[j+1];
            list[j+1]=list[j];
            list[j]=temp;
        }
    }
}

for(i=0;i<range;i++){
   cout<<list[i]<<" ";
}







return 0;}
