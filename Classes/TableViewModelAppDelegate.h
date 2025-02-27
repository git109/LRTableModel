//
//  TableViewModelAppDelegate.h
//  TableViewModel
//
//  Created by Luke Redpath on 09/08/2010.
//  Copyright LJR Software Limited 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewModelAppDelegate : NSObject <UIApplicationDelegate> 
{
  UIWindow *window;
  UINavigationController *navigationController;
}
@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;
@end

