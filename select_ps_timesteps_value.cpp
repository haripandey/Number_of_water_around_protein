// reading a text file
#include <iostream>
#include <array>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <vector>


using namespace std;
  int colA=0;
  int rowA=0;
int main () {
  string line;
  int length_of_array;
  int count=0;


  ifstream myfile ("size.xvg");
  if (myfile.is_open())
  {
    while (! myfile.eof() )
    {
      getline (myfile,line);
      count=count+1;  
//     cout << line << endl;
     
    }
   length_of_array=count-1; 
  cout<<length_of_array<<endl;
  }
  else{
   cout << "Unable to open file"; 
   }
/////////////////////////////////////////////
string lineA;
float z,W,x,y;
float arrayA[length_of_array][2];
float arrayB[length_of_array][2];
ifstream fileIN,w_file;
fileIN.open("size.xvg");
ofstream save;
save.open("savecpp.txt", std::ios::app );
w_file.open("m1.txt");
        while (w_file>>W) 
        {    
               z=W;                        
         }


if (fileIN.fail()){
   cerr<<"file is bad"<<endl;
   exit(1);
}
cout<<"\n"<<endl;
while(fileIN.good()) {
   while(getline(fileIN,lineA)) {
 istringstream streamA(lineA);
   colA=0;
    while(streamA>>x) {
       arrayA[rowA][colA]=x;
   colA++;
    }
 rowA++;
}
}
//cout<<arrayA[1][0]<<endl;
cout<<"# of rows---->"<<rowA<<endl;
cout<<"# of cols--->"<<colA<<endl;
cout<<endl;
for(int i=0;i<=rowA;i++){
   y=arrayA[i][1];
   if (y==300){
save<<left<<setw(8)<<arrayA[i][0]<<"     "<<z<<endl;
}
}
myfile.close();
fileIN.close();
w_file.close();
return 0;
}
