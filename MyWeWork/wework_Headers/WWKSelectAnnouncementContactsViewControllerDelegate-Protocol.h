//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WWKSelectAnnouncementContactsViewController;

@protocol WWKSelectAnnouncementContactsViewControllerDelegate <NSObject>
- (void)selectAnnouncementContactsViewController:(WWKSelectAnnouncementContactsViewController *)arg1 didConfirmToSelectContacts:(const vector_fcf831c7 *)arg2;

@optional
- (void)didClickCancelButtonInSelectContactsViewController:(WWKSelectAnnouncementContactsViewController *)arg1;
@end
