//
//  ToastTestViewController.h
//  ToastTest
//
//  Copyright 2011 Charles Scalesse. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ToastTestViewController : UIViewController {
    
    BOOL isShowingActivity;
}

@property (nonatomic, weak) IBOutlet UIView *yellowView;
@property (nonatomic, weak) IBOutlet UIButton *activityButton;

-(IBAction)buttonPressed:(id)sender;

@end
