//
//  LRAbstractTableModel.h
//  TableViewModel
//
//  Created by Luke Redpath on 10/08/2010.
//  Copyright 2010 LJR Software Limited. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LRTableModel.h"

@interface LRAbstractTableModel : NSObject <LRTableModel, UITableViewDataSource> {
  NSMutableArray *eventListeners;
  id<LRTableModelCellProvider> cellProvider;
}
@property (nonatomic, retain) IBOutlet id<LRTableModelCellProvider> cellProvider;

- (id)initWithCellProvider:(id<LRTableModelCellProvider>)theCellProvider;
- (void)notifyListeners:(LRTableModelEvent *)event;
- (void)beginUpdates;
- (void)endUpdates;
@end
