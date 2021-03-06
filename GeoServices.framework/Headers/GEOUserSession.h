/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/XXUnknownSuperclass.h>

@class GEOSessionID;

@interface GEOUserSession : XXUnknownSuperclass {
	double _lastSessionCreationTime;	// 4 = 0x4
	GEOSessionID *_sessionID;	// 12 = 0xc
}
@property(readonly, assign) GEOSessionID *sessionID;	// G=0x32561; 
+ (id)sharedInstance;	// 0x3230d
// declared property getter: - (id)sessionID;	// 0x32561
- (void)_updateSessionIDIfNeeded;	// 0x32429
- (void)dealloc;	// 0x323dd
- (id)init;	// 0x32379
@end
