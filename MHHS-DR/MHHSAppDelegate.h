//
//  MHHSAppDelegate.h
//  MHHS-DR
//
//  Created by Vijay Oommen on 5/15/13.
//  Copyright (c) 2013 MHHS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MHHSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
