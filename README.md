Hello guys, This is DIY project set up for building some parts of Apple SwiftNIO for iOS, tvOS platforms.
I believe some folks also have the same curiosity like me :)

------------------------
# Purpose
The Apple's Swift-NIO project originally targets to MACOS and Ubuntu OS, in order to engineer a high-performance networking foundation for the headend use purpose. But it doesn't mean We can't reuse some parts of them on iOS and tvOS.

# Note
Because Swift-NIO mainly lives on POSIX socket, which not be recommand for iOS (because of multipath network issue not hanlded yet)

# Status
+ Build iOS [success on XCode 10.1 MacOS 11.3 Higher Sierra]
+ Build tvOS [pending]


# Swift-nio components included
+ CNIOAtomics
+ CNIODarwin
+ CNIOHTTPParser
+ CNIOZlib
+ NIOConcurrencyHelpers
+ NIO
+ NIOHTTP1
