//
//  LCBaseTableController.h
//  LCChatApp
//
//  Created by Qihe Bian on 11/20/14.
//  Copyright (c) 2014 Lean Cloud Inc. All rights reserved.
//

#import "LCBaseController.h"

@interface LCBaseTableController : LCBaseController <UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) UITableView *tableView;

@end
