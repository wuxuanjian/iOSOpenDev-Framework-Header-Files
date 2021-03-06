/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADColor : XXUnknownSuperclass <NSCopying> {
@private
	NSMutableArray *mTransforms;	// 4 = 0x4
}
@property(retain) id transforms;	// G=0x7249; S=0x16acc1; converted property
+ (id)nsColorWithOADColor:(id)oadcolor colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x6a05
+ (id)nsColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x6f01
+ (id)nsColorWithOADColor:(id)oadcolor;	// 0x29f5d9
- (id)copyWithZone:(NSZone *)zone;	// 0x29f561
- (void)addTransform:(id)transform;	// 0xcf4b9
- (void)dealloc;	// 0x86fa9
// converted property getter: - (id)transforms;	// 0x7249
// converted property setter: - (void)setTransforms:(id)transforms;	// 0x16acc1
- (void)addTransformOfType:(int)type;	// 0x29f575
- (void)addTransformOfType:(int)type value:(float)value;	// 0x1e1525
- (id)colorForStyleColor:(id)styleColor;	// 0x1c557d
- (unsigned)hash;	// 0x86acd
- (BOOL)isEqual:(id)equal;	// 0x86aed
@end

@interface OADColor (Private)
+ (id)colorWithRedByte:(unsigned char)redByte greenByte:(unsigned char)byte blueByte:(unsigned char)byte3;	// 0xcea9d
+ (id)basicMapOfColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x6a71
+ (int)mapSchemeColorID:(int)anId colorMap:(id)map;	// 0x6cd1
+ (id)mapAdjustedColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0xce699
@end
