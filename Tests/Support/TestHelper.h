//
//  TestHelper.h
//
//  Created by Luke Redpath on 09/08/2010.
//  Copyright 2010 LJR Software Limited. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SenTestingKit/SenTestingKit.h>

#define HC_SHORTHAND
#import "Kiwi.h"
#import "LRMocky.h"
#import "OCHamcrest.h"

#import "HCPassesBlock.h"

#import "LRTableModelEvent.h"
#import "LRTableModelEventListener.h"

// this is to work around lack of protocol mock support in mocky
@interface LRMockEventListener : NSObject <LRTableModelEventListener>
{} 
@end

id anyEvent();
id insertEventAtRow(int rowIndex);
id updateEventAtRow(int rowIndex);
id deleteEventAtRow(int rowIndex);
id refreshEvent();
