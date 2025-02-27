//
//  LRTableModelCellProvider.h
//  TableViewModel
//
//  Created by Luke Redpath on 10/08/2010.
//  Copyright 2010 LJR Software Limited. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol LRTableModelCellProvider <NSObject>

- (void)configureCell:(UITableViewCell *)cell forObject:(id)object atIndexPath:(NSIndexPath *)indexPath;

@optional
- (UITableViewCell *)cellForObjectAtIndexPath:(NSIndexPath *)indexPath reuseIdentifier:(NSString *)reuseIdentifier;
- (NSString *)cellReuseIdentifierForIndexPath:(NSIndexPath *)indexPath;

@end
