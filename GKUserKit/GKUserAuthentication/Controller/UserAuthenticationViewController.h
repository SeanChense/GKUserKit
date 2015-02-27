//
//  UserauthenticationViewController.h
//  GKCommerce
//
//  Created by 小悟空 on 11/18/14.
//  Copyright (c) 2014 GKCommerce. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserAuthenticationTableViewCell.h"
#import "UserAuthenticationModel.h"
#import "GKUserService.h"

@interface UserAuthenticationViewController : UIViewController
<UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) id<GKUserService> service;
@property (strong, nonatomic) UserAuthenticationModel *user;
@end
