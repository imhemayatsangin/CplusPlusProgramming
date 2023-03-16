#include<iostream>

using namespace std;
int main(){
int range,x=0,y=0;
int i = 0;
	int temp;
	int flag = 1;
	int round;
cout<<"Enter the size of the list"<<endl;
cin>>range;
round=range-1;
cout<<"You can enter total ("<< range <<") elements"<<endl;
cout<<"Please enter the list elements"<<endl;
long list[range];
while(i<range){

    cin>>list[i];

    i++;
}
 cout<<"Elements:  ";
while( x < range){

   cout<<list[x]<<" ";

x++;

}
	do {
		flag = 0;

		for(i=0; i < round; ++i)
			{
				if (list[i + 1] < list[i])
					{
						flag = 1;
						temp = list[i];
						list[i] = list[i + 1];
						list[i + 1] = temp;
					}
			}
		round--;
	} while (flag);

 cout<<"Sorted Elements:  ";
for(i=0;i<range;i++){

    cout<<list[i];
}

return 0;

}
