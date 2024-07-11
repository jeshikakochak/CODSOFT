#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
   srand(time(0));
   int secretnumber=rand() % 100+1;
   int guess,attempts=0;
   cout<<"welcome to the guessing number game"<<endl;

   while(guess !=secretnumber){
    cout<<"enter your guess(1-100)\n";
    cin>>guess;
    attempts++;

    if(guess<secretnumber)
    {
      cout<<"too low try again"<<endl;
    }
    else if(guess>secretnumber)
    {
        cout<<"too high try again"<<endl;
    }
    else{
        cout<<"congratulations! you guessed the number in "<<attempts<<" attempts"<<endl;
    }
}
}
