#!/bin/sh

set -e

xcodebuild archive \
    -project libetpan.xcodeproj \
    -scheme "libetpan ios framework" \
    -destination "generic/platform=iOS" \
    -archivePath "libetpan-ios" \
    SKIP_INSTALL=NO \
    BUILD_LIBRARY_FOR_DISTRIBUTION=YES

xcodebuild archive \
    -project libetpan.xcodeproj \
    -scheme "libetpan ios framework" \
    -destination "generic/platform=iOS Simulator" \
    -archivePath "libetpan-ios-simulator" \
    SKIP_INSTALL=NO \
    BUILD_LIBRARY_FOR_DISTRIBUTION=YES

xcodebuild archive \
    -project libetpan.xcodeproj \
    -scheme "libetpan macos framework" \
    -destination "generic/platform=OS X" \
    -archivePath "libetpan-macos" \
    SKIP_INSTALL=NO \
    BUILD_LIBRARY_FOR_DISTRIBUTION=YES

xcodebuild -create-xcframework \
    -framework ./libetpan-ios.xcarchive/Products/Library/Frameworks/libetpan.framework \
    -framework ./libetpan-ios-simulator.xcarchive/Products/Library/Frameworks/libetpan.framework \
    -framework ./libetpan-macos.xcarchive/Products/Library/Frameworks/libetpan.framework \
    -output libetpan.xcframework
