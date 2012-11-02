//
//  ViewController.h
//  tableView
//
//  Created by david on 12-11-2.
//  Copyright (c) 2012年 david. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>
@property (strong, nonatomic) NSArray *list;
@end
