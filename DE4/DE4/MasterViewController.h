//
//  MasterViewController.h
//  DE4
//
//  Created by Adam Elsedoudi on 7/21/14.
//  Copyright (c) 2014 MellowMammoth. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
