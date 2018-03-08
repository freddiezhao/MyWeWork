//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKApiHandler.h"

@class WWKLoginConnectViewController, WWKQRScanViewController;

@interface WWKApiAuthHandler : WWKApiHandler
{
    WWKLoginConnectViewController *_loginViewController;
    WWKQRScanViewController *_qrscanViewController;
}

+ (_Bool)requiresLogin;
+ (id)handlers;
+ (void)load;
@property(retain, nonatomic) WWKQRScanViewController *qrscanViewController; // @synthesize qrscanViewController=_qrscanViewController;
@property(retain, nonatomic) WWKLoginConnectViewController *loginViewController; // @synthesize loginViewController=_loginViewController;
- (void).cxx_destruct;
- (_Bool)cancel;
- (_Bool)execute;

@end
