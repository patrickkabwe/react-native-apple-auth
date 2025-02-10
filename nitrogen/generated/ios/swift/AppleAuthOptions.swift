///
/// AppleAuthOptions.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents an instance of `AppleAuthOptions`, backed by a C++ struct.
 */
public typealias AppleAuthOptions = margelo.nitro.appleauth.AppleAuthOptions

public extension AppleAuthOptions {
  private typealias bridge = margelo.nitro.appleauth.bridge.swift

  /**
   * Create a new instance of `AppleAuthOptions`.
   */
  init(operation: AppleAuthOperation?, scopes: [AppleAuthScopes], nonce: String?) {
    self.init({ () -> bridge.std__optional_AppleAuthOperation_ in
      if let __unwrappedValue = operation {
        return bridge.create_std__optional_AppleAuthOperation_(__unwrappedValue)
      } else {
        return .init()
      }
    }(), { () -> bridge.std__vector_AppleAuthScopes_ in
      var __vector = bridge.create_std__vector_AppleAuthScopes_(scopes.count)
      for __item in scopes {
        __vector.push_back(__item)
      }
      return __vector
    }(), { () -> bridge.std__optional_std__string_ in
      if let __unwrappedValue = nonce {
        return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
      } else {
        return .init()
      }
    }())
  }

  var operation: AppleAuthOperation? {
    @inline(__always)
    get {
      return self.__operation.has_value() ? self.__operation.pointee : nil
    }
    @inline(__always)
    set {
      self.__operation = { () -> bridge.std__optional_AppleAuthOperation_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_AppleAuthOperation_(__unwrappedValue)
        } else {
          return .init()
        }
      }()
    }
  }
  
  var scopes: [AppleAuthScopes] {
    @inline(__always)
    get {
      return self.__scopes.map({ __item in __item })
    }
    @inline(__always)
    set {
      self.__scopes = { () -> bridge.std__vector_AppleAuthScopes_ in
        var __vector = bridge.create_std__vector_AppleAuthScopes_(newValue.count)
        for __item in newValue {
          __vector.push_back(__item)
        }
        return __vector
      }()
    }
  }
  
  var nonce: String? {
    @inline(__always)
    get {
      return { () -> String? in
        if let __unwrapped = self.__nonce.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__nonce = { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
  }
}
