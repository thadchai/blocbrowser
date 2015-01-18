//
//  BLCWebBrowserViewController.h
//  BlocBrowser
//
//  Created by Work on 1/15/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BLCWebBrowserViewController : UIViewController

/*
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */

- (void) resetWebView;

@end
