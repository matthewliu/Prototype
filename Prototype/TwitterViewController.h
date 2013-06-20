//
//  TwitterViewController.h
//  Prototype
//
//  Created by Matthew Liu on 6/20/13.
//  Copyright (c) 2013 Matthew Liu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TwitterViewController : UIViewController
{
    IBOutlet UITextField *twitterSearchField;
    IBOutlet UIButton *queryButton;
}

- (IBAction)queryTwitterSearchAPI:(id)sender;


@end