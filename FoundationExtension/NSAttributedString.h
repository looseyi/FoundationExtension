//
//  NSAttributedString.h
//  FoundationExtension
//
//  Created by Jeong YunWon on 12. 10. 31..
//  Copyright (c) 2012 youknowone.org. All rights reserved.
//

/*!
 *  @file
 *  @brief [NSAttributedString][0] extension category collection.
 *      [0]: https://developer.apple.com/library/mac/#documentation/Cocoa/Reference/Foundation/Classes/NSAttributedString_Class/Reference/Reference.html
 *  @see NSStringAttributeDictionary
 */

#if __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/*!
 *  @brief NSAttributedString common shortcuts
 */
@interface NSAttributedString (Shortcuts)

+ (instancetype)attributedString;

@end

NS_ASSUME_NONNULL_END
