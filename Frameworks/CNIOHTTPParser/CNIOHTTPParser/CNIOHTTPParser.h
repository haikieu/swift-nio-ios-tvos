//
//  CNIOHTTPParser.h
//  CNIOHTTPParser
//
//  Created by KIEU, HAI on 11/9/18.
//  Copyright © 2018 haikieu2907@icloud.com. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for CNIOHTTPParser.
FOUNDATION_EXPORT double CNIOHTTPParserVersionNumber;

//! Project version string for CNIOHTTPParser.
FOUNDATION_EXPORT const unsigned char CNIOHTTPParserVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CNIOHTTPParser/PublicHeader.h>


//===----------------------------------------------------------------------===//
//
// This source file is part of the SwiftNIO open source project
//
// Copyright (c) 2017-2018 Apple Inc. and the SwiftNIO project authors
// Licensed under Apache License v2.0
//
// See LICENSE.txt for license information
// See CONTRIBUTORS.txt for the list of SwiftNIO project authors
//
// SPDX-License-Identifier: Apache-2.0
//
//===----------------------------------------------------------------------===//

// adaptions for http_parser to make it more straightforward to use from Swift

#ifndef C_NIO_HTTP_PARSER_SWIFT
#define C_NIO_HTTP_PARSER_SWIFT

#include "c_nio_http_parser.h"

static inline size_t c_nio_http_parser_execute_swift(http_parser *parser,
                                                     const http_parser_settings *settings,
                                                     const void *data,
                                                     size_t len) {
  return c_nio_http_parser_execute(parser, settings, (const char *)data, len);
}

#endif
