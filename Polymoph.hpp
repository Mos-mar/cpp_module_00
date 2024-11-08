#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP
#include "ASpell.hpp"

class Polymorph : public ASpell
{
private:
public:
    Polymorph();
    virtual const ASpell *CloneASpell() override;
    virtual const std::unique_ptr<ASpell> CloneASpell2() override;
};

#endif // Fireball_HPP