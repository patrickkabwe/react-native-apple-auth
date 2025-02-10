///
/// HybridAppleAuthSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/// See ``HybridAppleAuthSpec``
public protocol HybridAppleAuthSpec_protocol: HybridObject {
  // Properties
  

  // Methods
  func signIn(options: AppleAuthOptions) throws -> Promise<AppleAuthCredential?>
}

/// See ``HybridAppleAuthSpec``
public class HybridAppleAuthSpec_base {
  private weak var cxxWrapper: HybridAppleAuthSpec_cxx? = nil
  public func getCxxWrapper() -> HybridAppleAuthSpec_cxx {
  #if DEBUG
    guard self is HybridAppleAuthSpec else {
      fatalError("`self` is not a `HybridAppleAuthSpec`! Did you accidentally inherit from `HybridAppleAuthSpec_base` instead of `HybridAppleAuthSpec`?")
    }
  #endif
    if let cxxWrapper = self.cxxWrapper {
      return cxxWrapper
    } else {
      let cxxWrapper = HybridAppleAuthSpec_cxx(self as! HybridAppleAuthSpec)
      self.cxxWrapper = cxxWrapper
      return cxxWrapper
    }
  }
}

/**
 * A Swift base-protocol representing the AppleAuth HybridObject.
 * Implement this protocol to create Swift-based instances of AppleAuth.
 * ```swift
 * class HybridAppleAuth : HybridAppleAuthSpec {
 *   // ...
 * }
 * ```
 */
public typealias HybridAppleAuthSpec = HybridAppleAuthSpec_protocol & HybridAppleAuthSpec_base
