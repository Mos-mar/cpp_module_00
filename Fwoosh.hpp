#ifndef FWOOSH_HPP
#define FWOOSH_HPP
#include "Aspell.hpp"
#include <memory>

class Fwoosh : public Aspell
{
private:
public:
    Fwoosh();
    virtual const Aspell *CloneAspell() override;
    virtual const std::unique_ptr<Aspell> CloneAspell2() override;
};

#endif // Fwoosh_HPP