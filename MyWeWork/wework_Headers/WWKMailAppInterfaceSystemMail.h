//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMailAppInterface.h"

@interface WWKMailAppInterfaceSystemMail : WWKMailAppInterface
{
}

+ (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
+ (_Bool)available;
- (_Bool)composeMail:(id)arg1 to:(id)arg2 content:(id)arg3 attachments:(id)arg4;
- (_Bool)isExternal;

@end

