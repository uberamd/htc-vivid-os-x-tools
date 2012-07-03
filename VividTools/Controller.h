//
//  Controller.h
//  VividTools
//
//  Created by Steven Morrissey on 3/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@interface Controller : NSObject {
    IBOutlet id deviceRefresh;
    IBOutlet id deviceLabel;
    IBOutlet id bootloaderPathBar;
    IBOutlet id bootloaderUnlockButton;
    IBOutlet id blDevSiteButton;
    IBOutlet WebView*blUnlockWebview;
    IBOutlet id blUnlockWindow;
    IBOutlet id blGetTokenButton;
    IBOutlet id blUnlockTokenText;
    IBOutlet id blUnlockSubmitID;
    IBOutlet id blLockButton;
    IBOutlet id rootButton;
}

-(id)init;

-(IBAction)deviceRefreshButtonClicked:(id)sender;
-(IBAction)bootloaderUnlockButtonClicked:(id)sender;
-(IBAction)blDevSiteButtonClicked:(id)sender;
-(IBAction)blGetTokenIdClicked:(id)sender;
-(IBAction)blUnlockSubmitIDCLicked:(id)sender;
-(IBAction)blLockClicked:(id)sender;
-(IBAction)rootButtonClicked:(id)sender;

@end