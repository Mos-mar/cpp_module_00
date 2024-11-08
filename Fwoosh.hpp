#ifndef FWOOSH_HPP
#define FWOOSH_HPP
#include "ASpell.hpp"
#include <memory>

class Fwoosh : public ASpell
{
private:
public:
    Fwoosh();
    virtual const ASpell *CloneASpell() override;
    virtual const std::unique_ptr<ASpell> CloneASpell2() override;
};

#endif // Fwoosh_HPP