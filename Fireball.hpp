#ifndef FIREBALL_HPP
#define FIREBALL_HPP
#include "Aspell.hpp"

class Fireball : public Aspell
{
private:
public:
    Fireball();
    virtual const Aspell* CloneAspell() override;
    virtual const std::unique_ptr<Aspell> CloneAspell2() override;
};

#endif // Fireball_HPP