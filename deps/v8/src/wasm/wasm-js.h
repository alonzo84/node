// Copyright 2015 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_WASM_JS_H_
#define V8_WASM_JS_H_

#include "src/allocation.h"
#include "src/base/hashmap.h"

namespace v8 {
namespace internal {

// Exposes a WebAssembly API to JavaScript through the V8 API.
class WasmJs {
 public:
  V8_EXPORT_PRIVATE static void Install(Isolate* isolate,
                                        bool exposed_on_global_object);

  // WebAssembly.Table.
  static bool IsWasmTableObject(Isolate* isolate, Handle<Object> value);

  // WebAssembly.Memory
  static bool IsWasmMemoryObject(Isolate* isolate, Handle<Object> value);
};

}  // namespace internal
}  // namespace v8
#endif
