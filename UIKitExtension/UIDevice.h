//
//  UIDevice.h
//  FoundationExtension
//
//  Created by Jeong YunWon on 10. 10. 6..
//  Copyright 2010 youknowone.org All rights reserved.
//

/*!
 *  @file
 *  @brief [UIDevice][0] category extension collections.
 *      [0]: http://developer.apple.com/library/ios/#documentation/uikit/reference/UIDevice_Class/Reference/UIDevice.html
 */

@import UIKit;
#import <FoundationExtension/NSAVersion.h>

/*!
 *  @brief [UIDevice][0] shortcuts.
 *      [0]: http://developer.apple.com/library/ios/#documentation/uikit/reference/UIDevice_Class/Reference/UIDevice.html
 */
@interface UIDevice (Shortcuts)

/*!
 *  @brief System version for easy access
 */
@property(nonatomic,readonly) NSAVersion *systemVersionParts;

/*
 *  @brief Get UUID for vendor for later than iOS6 or device identifier.
 */
- (NSString *)uniqueToken;

@end

/*!
 *  @brief [UIDevice][0] MAC address extension, useful to make unique identifier.
 *      [0]: http://developer.apple.com/library/ios/#documentation/uikit/reference/UIDevice_Class/Reference/UIDevice.html
 */
@interface UIDevice (MACAddress)

/*
 *  @brief Get MAC address as data
 *  @return 6-bytes MAC address data
 */
- (NSData *)MACAddressData;

/*
 *  @brief Get MAC address
 *  @return MAC address formed as 'xx:xx:xx:xx:xx:xx'
 */
- (NSString *)MACAddress;

@end


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation-deprecated-sync"
//! @deprecated Use UIUserInterfaceIdiom
typedef enum {
    UIADeviceTypeUnknown = 0,
    UIADeviceTypePad    = 1,
    UIADeviceTypePhone  = 2,
    UIADeviceTypePod    = 3,
}   UIADeviceType;
#pragma clang diagnostic pop

//! @deprecated Use UIUserInterfaceIdiom
#define UIADeviceTypeIsIPhoneOrIPodMask 2
//! @deprecated Use UIUserInterfaceIdiom
#define UIADeviceTypeIsIPhoneOrIPod(deviceType) ((deviceType & UIADeviceTypeIsIPhoneOrIPodMask)>>1)

@interface UIDevice (Deprecated)

//! @deprecated Use -userInterfaceIdiom
+ (UIADeviceType)currentDeviceType __deprecated;

@end
