Hello guys, This is DIY project set up for building some parts of Apple SwiftNIO for iOS, tvOS platforms.
I believe some folks also have the same curiosity like me :) [Learn more details here](https://swiftreviewer.com/2018/11/17/setup-swift-nio-for-ios-tvos/)

------------------------
The Apple's Swift-NIO project originally targets to MACOS and Ubuntu OS, in order to engineer a high-performance networking foundation for the headend use purpose. But it doesn't mean We can't reuse some parts of them on iOS and tvOS.

# Note
Because Swift-NIO mainly lives on POSIX socket, which not be recommended for iOS (because of multipath network issue not hanlded yet, and some other device-state issues)

# Status
+ Build iOS [success on XCode 10.1 MacOS 11.3 Higher Sierra & Mojave]
+ Build tvOS [success on XCode 10.1 MacOS 11.3 Higher Sierra & Mojave]

# Something to try if you have time
+ Migrate from POSIX socket to Network.framework (available since iOS 12)

