//
//  DJICameraViewController.h
//  ArToJaThesis
//
//  Created by James Almeida on 3/25/17.
//  Copyright © 2017 James Almeida. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DJICameraViewController : UIViewController
{
    NSTimer* updateTimer;
    
}

- (void)setSnapshot:(UIImage*) image;
- (void)showAlertViewWithTitle:(NSString *)title withMessage:(NSString *)message;

@end
