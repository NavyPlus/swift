//===- DiagnosticsClangImporter.h - Diagnostic Definitions ------*- C++ -*-===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2016 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See http://swift.org/LICENSE.txt for license information
// See http://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
//
/// \file
/// \brief This file defines diagnostics for the Clang importer.
//
//===----------------------------------------------------------------------===//

#ifndef SWIFT_DIAGNOSTICSCLANGIMPORTER_H
#define SWIFT_DIAGNOSTICSCLANGIMPORTER_H

#include "swift/AST/DiagnosticsCommon.h"

namespace swift {
  namespace diag {
  // Declare common diagnostics objects with their appropriate types.
#define DIAG(KIND,ID,Category,Options,Text,Signature) \
  extern detail::DiagWithArguments<void Signature>::type ID;
#include "DiagnosticsClangImporter.def"
  }
}

#endif
