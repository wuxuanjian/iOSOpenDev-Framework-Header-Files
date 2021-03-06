/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/ISOperationDelegate.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSLock, NSMutableArray;

@interface SUScriptOperationDelegate : XXUnknownSuperclass <ISOperationDelegate> {
	NSMutableArray *_operations;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
- (void)_removeOperation:(id)operation;	// 0x53b71
- (void)operationFinished:(id)finished;	// 0x53b61
- (void)operation:(id)operation failedWithError:(id)error;	// 0x53b51
- (void)enqueueOperation:(id)operation;	// 0x53a6d
- (void)cancelAllOperations;	// 0x5392d
- (void)dealloc;	// 0x538a1
@end
