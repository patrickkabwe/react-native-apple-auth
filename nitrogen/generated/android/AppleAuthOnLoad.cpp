///
/// AppleAuthOnLoad.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#ifndef BUILDING_APPLEAUTH_WITH_GENERATED_CMAKE_PROJECT
#error AppleAuthOnLoad.cpp is not being built with the autogenerated CMakeLists.txt project. Is a different CMakeLists.txt building this?
#endif

#include "AppleAuthOnLoad.hpp"

#include <jni.h>
#include <fbjni/fbjni.h>
#include <NitroModules/HybridObjectRegistry.hpp>

#include "JHybridAppleAuthSpec.hpp"
#include <NitroModules/JNISharedPtr.hpp>
#include <NitroModules/DefaultConstructableObject.hpp>

namespace margelo::nitro::appleauth {

int initialize(JavaVM* vm) {
  using namespace margelo::nitro;
  using namespace margelo::nitro::appleauth;
  using namespace facebook;

  return facebook::jni::initialize(vm, [] {
    // Register native JNI methods
    margelo::nitro::appleauth::JHybridAppleAuthSpec::registerNatives();

    // Register Nitro Hybrid Objects
    HybridObjectRegistry::registerHybridObjectConstructor(
      "AppleAuth",
      []() -> std::shared_ptr<HybridObject> {
        static DefaultConstructableObject<JHybridAppleAuthSpec::javaobject> object("com/appleauth/HybridAppleAuth");
        auto instance = object.create();
        auto globalRef = jni::make_global(instance);
        return JNISharedPtr::make_shared_from_jni<JHybridAppleAuthSpec>(globalRef);
      }
    );
  });
}

} // namespace margelo::nitro::appleauth
