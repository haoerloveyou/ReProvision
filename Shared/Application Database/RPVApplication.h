//
//  RPVApplication.h
//  iOS
//
//  Created by Matt Clarke on 09/01/2018.
//  Copyright © 2018 Matt Clarke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class LSApplicationProxy;

@interface RPVApplication : NSObject

// Don't call this yourself.
- (instancetype)initWithApplicationProxy:(LSApplicationProxy*)proxy;

- (NSString*)bundleIdentifier;
- (NSString*)applicationName;

// Make sure to call this one asynchronously
- (UIImage*)applicationIcon;

- (NSDate*)applicationExpiryDate;

- (NSURL*)locationOfApplicationOnFilesystem;

@end