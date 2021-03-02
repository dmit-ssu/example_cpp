#include<iostream>
 using namespace std;

/////DIFFERENT MATHEMATICAL OPERATIONS PROGRAM/////////
class MATHS
{
private : int number1 , number2 , k , c=0;                 
 int sum=0 , prod , division , diff , permu1=1, permu2=1;  

 public : void INPUT(); void SUM(); void DIFF();  void PROD(); void DIV(); void PERM(); void DIVIS(); void PRIME();

};
void  MATHS::INPUT() //the function INPUT is a function through which the user inputs two values as number1 and number2 using the input operator '>>'
 {
 	cout<<"enter two integer numbers"<<endl; //the \n takes the cursor to the next line after the current is executed 
 	 cin>>number1>>number2;
 }
 void  MATHS :: SUM()        //the function SUM is a function in which we will calulate the sum of input using the '+' operator 
 {
 	sum=number1+number2;
 	cout<<"Sum of "<<" "<<number1<<" "<<"and"<<" "<<number2<<" "<<"is :" <<sum<<endl;
 }

 void  MATHS :: DIFF() //the function DIFF is a function through which we will find the difference of the two inputs depending on which is larger using the '-' operator
 {
    //we use the if-else statement to calulate the difference of the two input by first comparing the two and finding which is larger using'<' or'>'
   diff=(max(number1,number2))-(min(number1,number2));
  cout<<"Difference of "<<" "<<(max(number1,number2))<<" "<<"and"<<" "<<(min(number1,number2))<<" "<<"is :" <<diff<<endl;

 }

 void  MATHS :: PROD() //the function PROD is used to find the product of two functions by using the '*' operator 
 {
 	prod=number1*number2;
 	 cout<<"Product of "<<" "<<number1<<" "<<"and"<<" "<<number2<<" "<<"is :" <<prod<<endl;
 }

 void  MATHS :: DIV() //the function DIV is a function through which we will find the quotient on dividing the two inputs after checking which is larger using the '/' operator
 {

 	 division=(max(number1,number2))/(min(number1,number2));
 	 cout<<"Division of "<<" "<<(max(number1,number2))<<" "<<"by"<<" "<<(min(number1,number2))<<" "<<"is :" <<division<<endl;
  
 }

 void  MATHS :: PERM()     //the function PERM is used to find the permutation of the two numbers seperately by using for loopss
 {               //ex of permutation , let n=4 , 4! = 4x3x2x1= 24 
   for(int i =number1 ; i>0 ; i--)   //the for loop helps us to multiply each number from 1->n
   {
 	  permu1=permu1*i;      //remember to initialize variables that you'll be using in repetitive mulitplication as 1 and those of addition and subtraction as 0
   }                       //as the variables contain garbage values by default which won't change for the variable unless specified (ie , input or initialization)
  for(int j =number2; j>0 ;j--)
   {
 	  permu2=permu2*j;
   }
  cout<<"Permutaion of "<<" "<<number1<<" "<<" is "<<" "<<permu1<<endl;
  cout<<"Permutaion of "<<" "<<number2<<" "<<" is "<<" "<<permu2<<endl;
 }

 void  MATHS :: DIVIS() //the function DIVIS is used to check if either input values are divisible by one another again after checking on which is greater
 {
 	 if((max(number1,number2))%(min(number1,number2))==0)   //we use the '%' operator as it gives us the remainder of the function while '/' gives us the quotient 
 	 {              //if a number is divisible by other there will be no remainder , hence we said "(max(number1,number2)%min(number,number2)==0" then to print it's divisible
 		cout<<max(number1,number2)<<" "<<"is divisible by"<<" "<<min(number1,number2)<<endl;
    }
    else
  {
 	 cout<<"Neither numbers are divisible by one another "<<endl;
  }
 }

void  MATHS :: PRIME()
{
  for (k = 1; k <= number1; k++)
    {
        if (number1 % k == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout <<number1<<" "<<" is a Prime number" << endl;
    }
    else
    {
         cout <<number1<<" "<<" is not a Prime number" << endl;
    }

    for (k = 1; k <= number2; k++)
    {
        if (number2 % k == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout <<number2<<" "<<" is a Prime number" << endl;
    }
    else
    {
         cout <<number2<<" "<<" is not a Prime number" << endl;
    }

}

//////////////////////////////////

//Hello world/////
class HELLO
{
  public : void WORLD();
};

void HELLO::WORLD()
{
    cout<<"Hello World"<<endl;
}
///////////////////////////////////

///ARRAY PROGRAMS///
class ARRAYS 
{
  private : int n , t, temp , A[100];
  public : void SWAP(); 
};
void ARRAYS::SWAP()
{
   cout<<"Enter number of elements in the array";
   cin>>n;
   for(t=0;t<n;t++)
   {
        cin>>A[t];
   }
    for(t=0;t<n;t++)
    {       
            if(A[t]>A[t+1])
            swap(A[t], A[t+1]);

    }
for(t=0;t<n;t++)
    {       
      cout<<A[t]<<" ";

    }
} 
 int main()
 { 
  //the functions mentioned in the main will be executed in order starting from INPUT and ending at DIVIS 
 	 MATHS M; 
   M.INPUT();            
 	 M.SUM();
 	 M.DIFF();
 	 M.PROD();
 	 M.DIV();
 	 M.PERM();
 	 M.DIVIS();
   M.PRIME();
   
///HELLO WORLD
  HELLO H;
  H.WORLD();

//Arrays Programs
ARRAYS A;
A.SWAP();

 	return 0;
  }
