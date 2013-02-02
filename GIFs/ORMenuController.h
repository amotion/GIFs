//
//  ORMenuController.h
//  GIFs
//
//  Created by orta therox on 12/01/2013.
//  Copyright (c) 2013 Orta Therox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ORGIFAppViewController.h"
#import "ORSimpleSourceListView.h"
#import "INAppStoreWindow.h"

@interface ORMenuController : NSObject <ORSourceListDataSource, ORSourceListDelegate, NSTextFieldDelegate, NSSplitViewDelegate>
@property (weak) IBOutlet ORGIFAppViewController *gifViewController;
@property (weak) IBOutlet ORSimpleSourceListView *menuTableView;
@property (unsafe_unretained) IBOutlet INAppStoreWindow *window;
@property (weak) IBOutlet NSView *windowToolbar;
@property (weak) IBOutlet NSSplitView *mainSplitView;

@end
