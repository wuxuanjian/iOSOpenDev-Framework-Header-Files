/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/iAdCore-Structs.h>
#import <iAdCore/XXUnknownSuperclass.h>

@class NSMutableDictionary;

@interface ADWebArchiveCache : XXUnknownSuperclass {
@private
	unsigned _currentDiskUse;	// 4 = 0x4
	unsigned _mtCurrentDiskUse;	// 8 = 0x8
	unsigned _currentMemoryUse;	// 12 = 0xc
	unsigned _mtCurrentMemoryUse;	// 16 = 0x10
	NSMutableDictionary *_cacheNodesByURL;	// 20 = 0x14
	dispatch_queue_s *_cacheAccessQueue;	// 24 = 0x18
	BOOL _dirty;	// 28 = 0x1c
}
@property(assign) BOOL dirty;	// G=0x7bcd; S=0x7bdd; @synthesize=_dirty
@property(assign, nonatomic) dispatch_queue_s *cacheAccessQueue;	// G=0x7bad; S=0x7bbd; @synthesize=_cacheAccessQueue
@property(retain, nonatomic) NSMutableDictionary *cacheNodesByURL;	// G=0x7b79; S=0x7b89; @synthesize=_cacheNodesByURL
@property(assign, nonatomic) unsigned mtCurrentMemoryUse;	// G=0x7b59; S=0x7b69; @synthesize=_mtCurrentMemoryUse
@property(assign, nonatomic) unsigned currentMemoryUse;	// G=0x7b49; S=0x5cd9; @synthesize=_currentMemoryUse
@property(assign, nonatomic) unsigned mtCurrentDiskUse;	// G=0x7b29; S=0x7b39; @synthesize=_mtCurrentDiskUse
@property(assign, nonatomic) unsigned currentDiskUse;	// G=0x7b19; S=0x5d69; @synthesize=_currentDiskUse
+ (id)cacheDirectory;	// 0x5c11
+ (id)sharedWebarchiveCache;	// 0x5511
// declared property setter: - (void)setDirty:(BOOL)dirty;	// 0x7bdd
// declared property getter: - (BOOL)dirty;	// 0x7bcd
// declared property setter: - (void)setCacheAccessQueue:(dispatch_queue_s *)queue;	// 0x7bbd
// declared property getter: - (dispatch_queue_s *)cacheAccessQueue;	// 0x7bad
// declared property setter: - (void)setCacheNodesByURL:(id)url;	// 0x7b89
// declared property getter: - (id)cacheNodesByURL;	// 0x7b79
// declared property setter: - (void)setMtCurrentMemoryUse:(unsigned)use;	// 0x7b69
// declared property getter: - (unsigned)mtCurrentMemoryUse;	// 0x7b59
// declared property getter: - (unsigned)currentMemoryUse;	// 0x7b49
// declared property setter: - (void)setMtCurrentDiskUse:(unsigned)use;	// 0x7b39
// declared property getter: - (unsigned)mtCurrentDiskUse;	// 0x7b29
// declared property getter: - (unsigned)currentDiskUse;	// 0x7b19
- (void)removeAllCacheEntries;	// 0x7955
- (BOOL)_evictAsNeededToMakeRoomForNodeWithSize:(unsigned)size;	// 0x7849
- (void)_evictExpiredNodes;	// 0x773d
- (void)_removeCacheNodeForURL:(id)url;	// 0x7501
- (BOOL)_readCacheNodeIntoMemory:(id)memory;	// 0x72e9
- (void)_insertCacheNode:(id)node completionHandler:(id)handler;	// 0x6ee1
- (void)_persist;	// 0x6cc5
- (void)_dispatchPersist;	// 0x6bbd
- (void)cacheData:(id)data forResponse:(id)response;	// 0x63d1
- (id)cachedDataForURL:(id)url;	// 0x5fe5
- (void)_handleLowMemory:(id)memory;	// 0x5e19
- (unsigned)currentDiskUsage;	// 0x5e09
- (unsigned)currentMemoryUsage;	// 0x5df9
// declared property setter: - (void)setCurrentDiskUse:(unsigned)use;	// 0x5d69
// declared property setter: - (void)setCurrentMemoryUse:(unsigned)use;	// 0x5cd9
- (id)init;	// 0x560d
- (void)dealloc;	// 0x5559
@end
