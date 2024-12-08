///
/// JAppleAuthScopes.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "AppleAuthScopes.hpp"

namespace margelo::nitro::appleauth {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "AppleAuthScopes" and the the Kotlin enum "AppleAuthScopes".
   */
  struct JAppleAuthScopes final: public jni::JavaClass<JAppleAuthScopes> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/appleauth/AppleAuthScopes;";

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum AppleAuthScopes.
     */
    [[maybe_unused]]
    AppleAuthScopes toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldOrdinal = clazz->getField<int>("_ordinal");
      int ordinal = this->getFieldValue(fieldOrdinal);
      return static_cast<AppleAuthScopes>(ordinal);
    }

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    [[maybe_unused]]
    static jni::alias_ref<JAppleAuthScopes> fromCpp(AppleAuthScopes value) {
      static const auto clazz = javaClassStatic();
      static const auto fieldFULL_NAME = clazz->getStaticField<JAppleAuthScopes>("FULL_NAME");
      static const auto fieldEMAIL = clazz->getStaticField<JAppleAuthScopes>("EMAIL");
      
      switch (value) {
        case AppleAuthScopes::FULL_NAME:
          return clazz->getStaticFieldValue(fieldFULL_NAME);
        case AppleAuthScopes::EMAIL:
          return clazz->getStaticFieldValue(fieldEMAIL);
        default:
          std::string stringValue = std::to_string(static_cast<int>(value));
          throw std::invalid_argument("Invalid enum value (" + stringValue + "!");
      }
    }
  };

} // namespace margelo::nitro::appleauth
