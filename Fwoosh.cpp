#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : Aspell("Fwoosh", "fwooshed")
{
}

const Aspell* Fwoosh::CloneAspell()
{
    return new Fwoosh();
}

const std::unique_ptr<Aspell> Fwoosh::CloneAspell2()
{
    return std::make_unique<Fwoosh>();
}
