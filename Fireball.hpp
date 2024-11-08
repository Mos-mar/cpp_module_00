#ifndef FIREBALL_HPP
#define FIREBALL_HPP
#include "ASpell.hpp"

class Fireball : public ASpell
{
private:
public:
    Fireball();
    virtual const ASpell *CloneASpell() override;
    virtual const std::unique_ptr<ASpell> CloneASpell2() override;
};

#endif // Fireball_HPP