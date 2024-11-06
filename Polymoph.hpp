#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP
#include "Aspell.hpp"

class Polymorph : public Aspell
{
private:
public:
    Polymorph();
    virtual const Aspell* CloneAspell() override;
    virtual const std::unique_ptr<Aspell> CloneAspell2() override;
};

#endif // Fireball_HPP