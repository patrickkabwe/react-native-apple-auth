///
/// HybridAppleAuthSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridAppleAuthSpec.hpp"

// Forward declaration of `HybridAppleAuthSpecCxx` to properly resolve imports.
namespace AppleAuth { class HybridAppleAuthSpecCxx; }

// Forward declaration of `AppleAuthCredential` to properly resolve imports.
namespace margelo::nitro::appleauth { struct AppleAuthCredential; }
// Forward declaration of `AppleAuthOptions` to properly resolve imports.
namespace margelo::nitro::appleauth { struct AppleAuthOptions; }
// Forward declaration of `AppleAuthOperation` to properly resolve imports.
namespace margelo::nitro::appleauth { enum class AppleAuthOperation; }
// Forward declaration of `AppleAuthScopes` to properly resolve imports.
namespace margelo::nitro::appleauth { enum class AppleAuthScopes; }

#include <NitroModules/Promise.hpp>
#include <optional>
#include "AppleAuthCredential.hpp"
#include <string>
#include "AppleAuthOptions.hpp"
#include "AppleAuthOperation.hpp"
#include <vector>
#include "AppleAuthScopes.hpp"

#if __has_include(<NitroModules/HybridContext.hpp>)
#include <NitroModules/HybridContext.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

#include "AppleAuth-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::appleauth {

  /**
   * The C++ part of HybridAppleAuthSpecCxx.swift.
   *
   * HybridAppleAuthSpecSwift (C++) accesses HybridAppleAuthSpecCxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridAppleAuthSpecCxx can directly inherit from the C++ class HybridAppleAuthSpec
   * to simplify the whole structure and memory management.
   */
  class HybridAppleAuthSpecSwift: public virtual HybridAppleAuthSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridAppleAuthSpecSwift(const AppleAuth::HybridAppleAuthSpecCxx& swiftPart):
      HybridObject(HybridAppleAuthSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline AppleAuth::HybridAppleAuthSpecCxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    

  public:
    // Methods
    inline std::shared_ptr<Promise<std::optional<AppleAuthCredential>>> signIn(const AppleAuthOptions& options) override {
      auto __result = _swiftPart.signIn(options);
      return __result;
    }

  private:
    AppleAuth::HybridAppleAuthSpecCxx _swiftPart;
  };

} // namespace margelo::nitro::appleauth