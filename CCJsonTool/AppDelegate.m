//
//  AppDelegate.m
//  VisualJSON
//
//  Created by youknowone on 12. 6. 25..
//  Copyright (c) 2012 youknowone.org All rights reserved.
//


#import "AppDelegate.h"
#import "CCConst.h"

@implementation AppDelegate

- (void) openSite : (NSString *) site {
    [[NSWorkspace sharedWorkspace] openURL:site.URL];
}

- (void) openMainSite {
    [self openSite: CNewSite];
}

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {

}

- (void)showPreference:(id)sender {
    [self.preferenceWindowController showWindow:sender];
}

- (void)openWebsite:(id)sender {
    [self openMainSite];
}

- (void)openIssue:(id)sender {
    [self openMainSite];
}

- (void)openHelp:(id)sender {
    [self openMainSite];
}

- (void)openIRC:(id)sender {
    [self openMainSite];
}

- (void)openTip:(id)sender {
    [self openMainSite];
}

@end
