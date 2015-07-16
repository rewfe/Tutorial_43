//
//  PostsTableViewController.h
//  Tutorial_42
//
//  Created by Admin on 17.07.15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PostsTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *posts;
- (IBAction)cancel:(UIBarButtonItem *)sender;

@end
