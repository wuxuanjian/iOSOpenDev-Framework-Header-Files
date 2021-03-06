/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>
#import <iWorkImport/GQDRGradient.h>


__attribute__((visibility("hidden")))
@interface GQDRGradient : XXUnknownSuperclass <GQDNameMappable> {
@private
	CFArrayRef mStops;	// 4 = 0x4
	int mType;	// 8 = 0x8
	float mOpacity;	// 12 = 0xc
	float mAngle;	// 16 = 0x10
	CGPoint mStart;	// 20 = 0x14
	CGPoint mEnd;	// 28 = 0x1c
}
+ (const StateSpec *)stateForReading;	// 0xc8e1
- (void)dealloc;	// 0xc9c5
- (CFArrayRef)stops;	// 0xc8ed
- (int)type;	// 0xc8fd
- (float)opacity;	// 0xc90d
- (float)angle;	// 0xc91d
- (CGPoint)start;	// 0xc92d
- (CGPoint)end;	// 0xc945
@end

@interface GQDRGradient (Private)
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0xcaf5
@end
