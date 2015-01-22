//
//  BLCAwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Work on 1/18/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

// Here is where the delegate protocol is declared

@class BLCAwesomeFloatingToolbar;

@protocol BLCAwesomeFloatingToolbarDelegate <NSObject>

@optional

- (void) floatingToolbar:(BLCAwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;
- (void) floatingToolbar:(BLCAwesomeFloatingToolbar *)toolbar didTryToPanWithOffset:(CGPoint)offset;

// Assignment Work Items
- (void) floatingToolbar:(BLCAwesomeFloatingToolbar *)toolbar didTryToPinchWithOffset:(CGPoint)offset;
- (void) floatingToolbar:(BLCAwesomeFloatingToolbar *)toolbar didTryLongPressWithOffset:(CGPoint)offset;

@end

// The defition of the delegate protocol is ended above

// Interface for the toolbar itself

@interface BLCAwesomeFloatingToolbar : UIView

- (instancetype) initWithFourTitles:(NSArray *)titles;

- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;

@property (nonatomic, weak) id <BLCAwesomeFloatingToolbarDelegate> delegate;

@end
