/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface GMMEfficientMapPoint : XXUnknownSuperclass {
	int _latitude;	// 4 = 0x4
	int _longitude;	// 8 = 0x8
}
@property(assign, nonatomic) int longitude;	// G=0x1337d; S=0x1338d; @synthesize=_longitude
@property(assign, nonatomic) int latitude;	// G=0x1335d; S=0x1336d; @synthesize=_latitude
// declared property setter: - (void)setLongitude:(int)longitude;	// 0x1338d
// declared property getter: - (int)longitude;	// 0x1337d
// declared property setter: - (void)setLatitude:(int)latitude;	// 0x1336d
// declared property getter: - (int)latitude;	// 0x1335d
- (void)writeTo:(id)to;	// 0x13315
- (BOOL)readFrom:(id)from;	// 0x13221
- (id)dictionaryRepresentation;	// 0x13175
- (id)description;	// 0x13105
- (void)dealloc;	// 0x130d9
@end
