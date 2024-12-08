///
/// HybridAppleAuthSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridAppleAuthSpec.hpp"

namespace margelo::nitro::appleauth {

  void HybridAppleAuthSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridMethod("signIn", &HybridAppleAuthSpec::signIn);
    });
  }

} // namespace margelo::nitro::appleauth