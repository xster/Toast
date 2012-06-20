//
//  ToastTestAppDelegate.h
//  ToastTest
//
//  Copyright 2011 Charles Scalesse. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ToastTestViewController;

@interface ToastTestAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic) IBOutlet UIWindow *window;
@property (nonatomic) IBOutlet ToastTestViewController *viewController;

@end
