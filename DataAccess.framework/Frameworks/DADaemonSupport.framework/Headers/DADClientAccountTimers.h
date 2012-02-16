/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
 */

#import <DADaemonSupport/XXUnknownSuperclass.h>
#import <DADaemonSupport/DADaemonSupport-Structs.h>

@class NSMutableDictionary, NSDate;

@interface DADClientAccountTimers : XXUnknownSuperclass {
	dispatch_source_s *_deferredAllFolderContentsSource;	// 4 = 0x4
	dispatch_source_s *_deferredFolderListSource;	// 8 = 0x8
	dispatch_source_s *_deferredFolderContentsSource;	// 12 = 0xc
	NSDate *_lastAllFolderContentsRequestDate;	// 16 = 0x10
	NSMutableDictionary *_folderIdToLastFolderContentsRequestDate;	// 20 = 0x14
	NSDate *_lastFolderListRequestDate;	// 24 = 0x18
}
@property(assign, nonatomic) dispatch_source_s *deferredFolderContentsSource;	// G=0xf329; S=0xefed; @synthesize=_deferredFolderContentsSource
@property(assign, nonatomic) dispatch_source_s *deferredFolderListSource;	// G=0xf319; S=0xefb1; @synthesize=_deferredFolderListSource
@property(assign, nonatomic) dispatch_source_s *deferredAllFolderContentsSource;	// G=0xf309; S=0xef75; @synthesize=_deferredAllFolderContentsSource
@property(retain) NSDate *lastFolderListRequestDate;	// G=0xf2d1; S=0xf2e5; @synthesize=_lastFolderListRequestDate
@property(retain) NSDate *lastAllFolderContentsRequestDate;	// G=0xf299; S=0xf2ad; @synthesize=_lastAllFolderContentsRequestDate
// declared property getter: - (dispatch_source_s *)deferredFolderContentsSource;	// 0xf329
// declared property getter: - (dispatch_source_s *)deferredFolderListSource;	// 0xf319
// declared property getter: - (dispatch_source_s *)deferredAllFolderContentsSource;	// 0xf309
// declared property setter: - (void)setLastFolderListRequestDate:(id)date;	// 0xf2e5
// declared property getter: - (id)lastFolderListRequestDate;	// 0xf2d1
// declared property setter: - (void)setLastAllFolderContentsRequestDate:(id)date;	// 0xf2ad
// declared property getter: - (id)lastAllFolderContentsRequestDate;	// 0xf299
- (int)clientBehaviorForFolderContents;	// 0xf209
- (int)clientBehaviorForFolderList;	// 0xf179
- (int)clientBehaviorForFolderIds:(id)folderIds;	// 0xf029
// declared property setter: - (void)setDeferredFolderContentsSource:(dispatch_source_s *)source;	// 0xefed
// declared property setter: - (void)setDeferredFolderListSource:(dispatch_source_s *)source;	// 0xefb1
// declared property setter: - (void)setDeferredAllFolderContentsSource:(dispatch_source_s *)source;	// 0xef75
- (void)setLastFolderContentRequestDate:(id)date forFolderWithId:(id)anId;	// 0xef45
- (id)_folderIdToLastFolderContentsRequestDate;	// 0xeef5
- (void)killAllTimers;	// 0xee81
- (double)deferredTimerInterval;	// 0xee51
- (void)dealloc;	// 0xed75
@end