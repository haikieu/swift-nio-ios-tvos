//
//  CNIOZlib.h
//  CNIOZlib
//
//  Created by KIEU, HAI on 11/9/18.
//  Copyright © 2018 haikieu2907@icloud.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#include <zlib.h>

//! Project version number for CNIOZlib.
FOUNDATION_EXPORT double CNIOZlibVersionNumber;

//! Project version string for CNIOZlib.
FOUNDATION_EXPORT const unsigned char CNIOZlibVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CNIOZlib/PublicHeader.h>


#ifndef C_NIO_ZLIB_H
#define C_NIO_ZLIB_H

static inline int CNIOZlib_deflateInit2(z_streamp strm,
                                        int level,
                                        int method,
                                        int windowBits,
                                        int memLevel,
                                        int strategy) {
  return deflateInit2(strm, level, method, windowBits, memLevel, strategy);
}

static inline int CNIOZlib_inflateInit2(z_streamp strm, int windowBits) {
  return inflateInit2(strm, windowBits);
}

#endif
