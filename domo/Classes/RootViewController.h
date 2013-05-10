//
//  RootViewController.h
//  domo
//
//  Created by Wang Ming-der on 5/11/13.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface RootViewController : UITableViewController <NSFetchedResultsControllerDelegate> {
	
	NSManagedObjectContext *managedObjectContext;
	NSFetchedResultsController *fetchedResultsController;
}

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;

@end
