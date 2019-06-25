extern void dummy();
int main() { dummy(); }

#include<iostream>
struct thief
{
    thief()
    {
        std::cout << "T:  I am an identity thief\n"
                     "    I am not in the same library as the secret holder\n"
                     "    My type is unrelated to the secret holder\n"
                     "    But I exist at the same address : " << (void*)this << "\n"
                     "    This is because I am also a global called 'joe_bloggs'\n"
                     "    So now I can reach in and get the secret : " << stolen_secret << "\n"
                     "    And then for fun I'll change that secret\n";
        stolen_secret = 512;
    }
    ~thief()
    {
        std::cout << "T:  I am still at address : " << (void*)this << "\n"
                     "    But at my destruction I can run off leaving the\n"
                     "    secret holder with a confusing mess\n";
    }
    int stolen_secret;
    float other_random_stuff;
};

// Invoke some undefined behavior by violating the one-definition rule -- this symbol is also defined
// in the other part of the program.
//
// "One and only one definition of every non-inline function or variable that is odr-used (see below) 
// is required to appear in the entire program (including any standard and user-defined libraries). 
// The compiler is not required to diagnose this violation, but the behavior of the program that 
// violates it is undefined." --https://en.cppreference.com/w/cpp/language/definition 
thief joe_bloggs; 

