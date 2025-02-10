///
/// AppleAuthOperation.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <cmath>
#if __has_include(<NitroModules/JSIConverter.hpp>)
#include <NitroModules/JSIConverter.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

namespace margelo::nitro::appleauth {

  /**
   * An enum which can be represented as a JavaScript enum (AppleAuthOperation).
   */
  enum class AppleAuthOperation {
    LOGIN      SWIFT_NAME(login) = 0,
    LOGOUT      SWIFT_NAME(logout) = 1,
    IMPLICIT      SWIFT_NAME(implicit) = 2,
  } CLOSED_ENUM;

} // namespace margelo::nitro::appleauth

namespace margelo::nitro {

  using namespace margelo::nitro::appleauth;

  // C++ AppleAuthOperation <> JS AppleAuthOperation (enum)
  template <>
  struct JSIConverter<AppleAuthOperation> final {
    static inline AppleAuthOperation fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      int enumValue = JSIConverter<int>::fromJSI(runtime, arg);
      return static_cast<AppleAuthOperation>(enumValue);
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, AppleAuthOperation arg) {
      int enumValue = static_cast<int>(arg);
      return JSIConverter<int>::toJSI(runtime, enumValue);
    }
    static inline bool canConvert(jsi::Runtime&, const jsi::Value& value) {
      if (!value.isNumber()) {
        return false;
      }
      double integer;
      double fraction = modf(value.getNumber(), &integer);
      if (fraction != 0.0) {
        // It is some kind of floating point number - our enums are ints.
        return false;
      }
      // Check if we are within the bounds of the enum.
      return integer >= 0 && integer <= 2;
    }
  };

} // namespace margelo::nitro
