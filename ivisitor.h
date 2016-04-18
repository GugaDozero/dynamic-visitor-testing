#ifndef IVISITOR_H
#define IVISITOR_H

// Dynamic visitor pattern.

template< class Visitable >
class Visitor_
{
template< class > friend class Visitable_impl_;
private:
    virtual void visit( Visitable& ) {}
};

struct IVisitor
{
    virtual ~IVisitor(){}
};    // Note: no mention of A or B elements

#endif // IVISITOR_H
