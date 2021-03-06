//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PINDiskCache : NSObject
{
    CDUnknownBlockType _willAddObjectBlock;
    CDUnknownBlockType _willRemoveObjectBlock;
    CDUnknownBlockType _willRemoveAllObjectsBlock;
    CDUnknownBlockType _didAddObjectBlock;
    CDUnknownBlockType _didRemoveObjectBlock;
    CDUnknownBlockType _didRemoveAllObjectsBlock;
    unsigned long long _byteLimit;
    double _ageLimit;
    NSString *_name;
    NSURL *_cacheURL;
    unsigned long long _byteCount;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    NSObject<OS_dispatch_semaphore> *_lockSemaphore;
    NSMutableDictionary *_dates;
    NSMutableDictionary *_sizes;
}

+ (void)emptyTrash;
+ (_Bool)moveItemAtURLToTrash:(id)arg1;
+ (id)sharedTrashURL;
+ (id)sharedTrashQueue;
+ (id)sharedCache;
@property(retain, nonatomic) NSMutableDictionary *sizes; // @synthesize sizes=_sizes;
@property(retain, nonatomic) NSMutableDictionary *dates; // @synthesize dates=_dates;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lockSemaphore; // @synthesize lockSemaphore=_lockSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *asyncQueue; // @synthesize asyncQueue=_asyncQueue;
@property unsigned long long byteCount; // @synthesize byteCount=_byteCount;
@property(retain, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
@property double ageLimit; // @synthesize ageLimit=_ageLimit;
@property unsigned long long byteLimit; // @synthesize byteLimit=_byteLimit;
@property(copy) CDUnknownBlockType didRemoveAllObjectsBlock; // @synthesize didRemoveAllObjectsBlock=_didRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType didRemoveObjectBlock; // @synthesize didRemoveObjectBlock=_didRemoveObjectBlock;
@property(copy) CDUnknownBlockType didAddObjectBlock; // @synthesize didAddObjectBlock=_didAddObjectBlock;
@property(copy) CDUnknownBlockType willRemoveAllObjectsBlock; // @synthesize willRemoveAllObjectsBlock=_willRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType willRemoveObjectBlock; // @synthesize willRemoveObjectBlock=_willRemoveObjectBlock;
@property(copy) CDUnknownBlockType willAddObjectBlock; // @synthesize willAddObjectBlock=_willAddObjectBlock;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)trimToSizeByDate:(unsigned long long)arg1;
- (void)trimToDate:(id)arg1;
- (void)trimToSize:(unsigned long long)arg1;
- (void)removeObjectForKey:(id)arg1 fileURL:(id *)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 fileURL:(id *)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)fileURLForKey:(id)arg1;
- (id)objectForKey:(id)arg1 fileURL:(id *)arg2;
- (id)objectForKey:(id)arg1;
- (void)synchronouslyLockFileAccessWhileExecutingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjects:(CDUnknownBlockType)arg1;
- (void)trimToSizeByDate:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)trimToDate:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)trimToSize:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)fileURLForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)objectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)lockFileAccessWhileExecutingBlock:(CDUnknownBlockType)arg1;
- (void)trimToAgeLimitRecursively;
- (void)trimDiskToDate:(id)arg1;
- (void)trimDiskToSizeByDate:(unsigned long long)arg1;
- (void)trimDiskToSize:(unsigned long long)arg1;
- (_Bool)removeFileAndExecuteBlocksForKey:(id)arg1;
- (_Bool)setFileModificationDate:(id)arg1 forURL:(id)arg2;
- (void)initializeDiskProperties;
- (_Bool)createCacheDirectory;
- (id)decodedString:(id)arg1;
- (id)encodedString:(id)arg1;
- (id)keyForEncodedFileURL:(id)arg1;
- (id)encodedFileURLForKey:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)dealloc;

@end

