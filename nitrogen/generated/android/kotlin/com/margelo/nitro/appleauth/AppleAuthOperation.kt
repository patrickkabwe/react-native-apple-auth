///
/// AppleAuthOperation.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

package com.margelo.nitro.appleauth

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip

/**
 * Represents the JavaScript enum/union "AppleAuthOperation".
 */
@DoNotStrip
@Keep
enum class AppleAuthOperation {
  LOGIN,
  LOGOUT,
  IMPLICIT;

  @DoNotStrip
  @Keep
  private val _ordinal = ordinal
}
