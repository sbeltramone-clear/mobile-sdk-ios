// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Spreedly",
    defaultLocalization: "en-us",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "Spreedly",
            targets: ["Spreedly"]),
        .library(
            name: "SpreedlyCocoa",
            targets: ["SpreedlyCocoa"])
    ],
    dependencies: [],
    targets: [
        .target(
            name: "Spreedly",
            dependencies: [],
            path: "Spreedly",
            exclude: ["Info.plist"]
        ),
        .target(
            name: "SpreedlyCocoa",
            dependencies: [],
            path: "SpreedlyCocoa",
            exclude: ["Info.plist"],
            resources: [.process("Assets.xcassets"),            
            ]
        ),
        .testTarget(
            name: "UnitTests",
            dependencies: ["Spreedly", "SpreedlyCocoa"],
            path: "UnitTests",
            exclude: ["Info.plist"]
        )
    ]
)
