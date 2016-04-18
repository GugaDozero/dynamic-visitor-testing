#include "a.h"
#include "b.h"

#include <iostream>
using namespace std;

auto main() -> int
{
    class VisitorForA : public IVisitor, public Visitor_<A>
    {
    private:
        void visit( A& ) override { cout << "Visited an A." << endl; }
    } x;

    class VisitorForB : public IVisitor, public Visitor_<B>
    {
    private:
        void visit( B& ) override { cout << "Visited a B." << endl; }
    } y;

    class VisitorForAandB : public IVisitor, public Visitor_<A>, public Visitor_<B>
    {
    private:
        void visit( A& ) override { cout << "Visited an A." << endl; }
        void visit( B& ) override { cout << "Visited a B." << endl; }
    } z;

    IVisitable&& a   = A();
    IVisitable&& b   = B();

    a.accept( x );
    b.accept( x );

    a.accept( y );
    b.accept( y );

    a.accept( z );
    b.accept( z );


    return 0;
}
