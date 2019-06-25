#include <iostream>
#include "dummy.h"

void dummy()  // here just so the library will be loaded
{}

struct secret_holder
{
    secret_holder() : secret{42}
    {
        std::cout << "SH: I am an innocent holder of a secret\n"
                     "    Currently my secret is : " << secret << "\n"
                     "    I exist in my own library as a global called 'joe_bloggs'\n"
                     "    My address is : " << (void*)this << '\n';
    }
    ~secret_holder()
    {
        std::cout << "SH: It is now my destruction.\n"
                     "    I'm still at address : " << (void*)this << "\n"
                     "    But my secret is now : " << secret << "\n"
                     "    Lets hope I didn't need that for anything important\n";
    }
    int secret;
};

secret_holder joe_bloggs;
