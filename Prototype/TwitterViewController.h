//
//  TwitterViewController.h
//  Prototype
//
//  Created by Matthew Liu on 6/20/13.
//  Copyright (c) 2013 Matthew Liu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Social/Social.h>
#import <Accounts/Accounts.h>

@interface TwitterViewController : UIViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate>
{
    IBOutlet UISearchBar *twitterSearchBar;
    IBOutlet UILabel *introLabel;
    IBOutlet UITableView *tweetTableView;
    
    ACAccountStore *accountStore;
    NSArray *tweetArray;

}


@end
