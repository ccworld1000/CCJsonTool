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


//- (void)openWebsite:(id)sender {
//    NSURL *URL = @"http://youknowone.github.com/VisualJSON".URL;
//    [[NSWorkspace sharedWorkspace] openURL:URL];
//}
//
//- (void)openIssue:(id)sender {
//    NSURL *URL = @"https://github.com/youknowone/VisualJSON/issues".URL;
//    [[NSWorkspace sharedWorkspace] openURL:URL];
//}
//
//- (void)openHelp:(id)sender {
//    NSURL *URL = @"https://github.com/youknowone/VisualJSON/wiki".URL;
//    [[NSWorkspace sharedWorkspace] openURL:URL];
//}
//
//- (void)openIRC:(id)sender {
//    NSURL *URL = @"irc://irc.freenode.org/#youknowone".URL;
//    [[NSWorkspace sharedWorkspace] openURL:URL];
//}
//
//- (void)openTip:(id)sender {
//    NSURL *URL = @"http://youknowone.github.com/VisualJSON#tipme".URL;
//    [[NSWorkspace sharedWorkspace] openURL:URL];
//}

@end
