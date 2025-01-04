// Ques 1. Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

// Sample Input :- Enter the first string: Hello
// Enter the second string: World

// Sample Output:- Concatenated string: HelloWorld

#include <iostream>
using namespace std;

int main() {
   string s1,s2;
   cout<<"Enter string 1: ";
   cin>>s1;
   cout<<"Enter string 2: ";
   cin>>s2;
   
   cout<<"Concatenated string: "<<s1+s2<<endl;
    return 0;
}
// Ques 2. Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

// Sample Input:- Enter grade 1: 85
// Enter grade 2: 90
// Enter grade 3: 78
// Enter grade 4: 92
// Enter grade 5: 88

// Sample Output:- The average grade is: 86.6
#include <iostream>
using namespace std;

int main() {
   int sum=0;
   int grade;
   for(int i=1;i<=5;i++){
       cout<<"Enter garde "<<i<<" :";
       cin>>grade;
       sum+=grade;
   }
   float avg=sum/5.0;
   cout<<"The average grade is: "<<avg<<endl;
    return 0;
}
// Ques 3. Write a C++ program that takes an integer as input from the user and outputs its square.

// Sample Input:- Enter a number: 7

// Sample Output :- The square of 7 is: 49
#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   
   cout<<"The square of "<<n<<" is: "<<n*n<<endl;
    return 0;
}
