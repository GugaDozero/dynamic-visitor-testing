#ifndef A_H
#define A_H

#include "ivisitable.h"

class A : public Visitable_impl_<A>
{
public:
    A();
};

#endif // A_H
