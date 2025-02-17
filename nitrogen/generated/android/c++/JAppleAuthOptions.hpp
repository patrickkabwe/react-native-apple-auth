///
/// JAppleAuthOptions.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "AppleAuthOptions.hpp"

#include "AppleAuthOperation.hpp"
#include "AppleAuthScopes.hpp"
#include "JAppleAuthOperation.hpp"
#include "JAppleAuthScopes.hpp"
#include <optional>
#include <string>
#include <vector>

namespace margelo::nitro::appleauth {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "AppleAuthOptions" and the the Kotlin data class "AppleAuthOptions".
   */
  struct JAppleAuthOptions final: public jni::JavaClass<JAppleAuthOptions> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/appleauth/AppleAuthOptions;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct AppleAuthOptions by copying all values to C++.
     */
    [[maybe_unused]]
    [[nodiscard]]
    AppleAuthOptions toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldOperation = clazz->getField<JAppleAuthOperation>("operation");
      jni::local_ref<JAppleAuthOperation> operation = this->getFieldValue(fieldOperation);
      static const auto fieldScopes = clazz->getField<jni::JArrayClass<JAppleAuthScopes>>("scopes");
      jni::local_ref<jni::JArrayClass<JAppleAuthScopes>> scopes = this->getFieldValue(fieldScopes);
      static const auto fieldNonce = clazz->getField<jni::JString>("nonce");
      jni::local_ref<jni::JString> nonce = this->getFieldValue(fieldNonce);
      return AppleAuthOptions(
        operation != nullptr ? std::make_optional(operation->toCpp()) : std::nullopt,
        [&]() {
          size_t __size = scopes->size();
          std::vector<AppleAuthScopes> __vector;
          __vector.reserve(__size);
          for (size_t __i = 0; __i < __size; __i++) {
            auto __element = scopes->getElement(__i);
            __vector.push_back(__element->toCpp());
          }
          return __vector;
        }(),
        nonce != nullptr ? std::make_optional(nonce->toStdString()) : std::nullopt
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JAppleAuthOptions::javaobject> fromCpp(const AppleAuthOptions& value) {
      return newInstance(
        value.operation.has_value() ? JAppleAuthOperation::fromCpp(value.operation.value()) : nullptr,
        [&]() {
          size_t __size = value.scopes.size();
          jni::local_ref<jni::JArrayClass<JAppleAuthScopes>> __array = jni::JArrayClass<JAppleAuthScopes>::newArray(__size);
          for (size_t __i = 0; __i < __size; __i++) {
            const auto& __element = value.scopes[__i];
            __array->setElement(__i, *JAppleAuthScopes::fromCpp(__element));
          }
          return __array;
        }(),
        value.nonce.has_value() ? jni::make_jstring(value.nonce.value()) : nullptr
      );
    }
  };

} // namespace margelo::nitro::appleauth
