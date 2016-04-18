#ifndef IVISITABLE_H
#define IVISITABLE_H

#include "ivisitor.h"

class IVisitable
{
public:
    virtual void accept( IVisitor& ) = 0;
};

template< class Visitable >
class Visitable_impl_ : public IVisitable
{
public:
    void accept( IVisitor& v ) override
    {
        if( auto p_visitor = dynamic_cast<Visitor_<Visitable>*>( &v ) )
        {
            p_visitor->visit( static_cast<Visitable&>( *this ) );   // Cast for overload res.
        }
    }
};

#endif // IVISITABLE_H
