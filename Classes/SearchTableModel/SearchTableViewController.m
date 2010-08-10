//
//  SearchTableViewController.m
//  TableViewModel
//
//  Created by Luke Redpath on 10/08/2010.
//  Copyright 2010 LJR Software Limited. All rights reserved.
//

#import "SearchTableViewController.h"
#import "SimpleObject.h"
#import "SearchTableModel.h"
#import "GithubRepositories.h"

@implementation SearchTableViewController

@synthesize searchTableModel;

- (void)dealloc
{
  [searchTableModel release];
  [super dealloc];
}

- (void)viewDidLoad
{
  [super viewDidLoad];
  
  self.title = @"Searchable Table View";
  self.tableView.rowHeight = 65;
  
  NSMutableArray *objects = [NSMutableArray array];
  [[GithubRepositories exampleRepositories] enumerateObjectsUsingBlock:^(id repository, NSUInteger idx, BOOL *stop) {
    SimpleObject *object = [[SimpleObject alloc] initWithTitle:[repository objectForKey:@"name"] description:[repository objectForKey:@"description"]];
    [objects addObject:object];
    [object release];
  }];
  
  [self.searchTableModel setObjects:objects];
}

- (void)tableModelChanged:(LRTableModelEvent *)changeEvent
{
  [self.tableView reloadData];
}

- (UITableViewCell *)cellForObjectAtIndexPath:(NSIndexPath *)indexPath reuseIdentifier:(NSString *)reuseIdentifier
{
  return [[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:reuseIdentifier] autorelease];
}

- (void)configureCell:(UITableViewCell *)cell forObject:(id)object atIndexPath:(NSIndexPath *)indexPath
{
  SimpleObject *simpleObject = object;
  
  cell.detailTextLabel.numberOfLines = 2;
  cell.textLabel.text = simpleObject.title;
  cell.detailTextLabel.text = simpleObject.description;
}

@end
