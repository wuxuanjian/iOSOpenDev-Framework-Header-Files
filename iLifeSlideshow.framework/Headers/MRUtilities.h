/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/XXUnknownSuperclass.h>


@interface MRUtilities : XXUnknownSuperclass {
}
+ (void)setImage:(const XXStruct_ywZ0fB *)image onTextureUnit:(unsigned)unit withReferenceAspectRatio:(float)referenceAspectRatio;	// 0x8c55d
+ (void)setImage:(const XXStruct_ywZ0fB *)image onTextureUnit:(unsigned)unit withReferenceAspectRatio:(float)referenceAspectRatio state:(float [16])state;	// 0x8cc69
+ (void)unsetImage:(const XXStruct_ywZ0fB *)image onTextureUnit:(unsigned)unit;	// 0x8c58d
+ (void)unsetImage:(const XXStruct_ywZ0fB *)image onTextureUnit:(unsigned)unit state:(float [16])state;	// 0x8cf21
+ (double)transformTime:(double)time forAnimationPath:(id)animationPath;	// 0x8cf59
+ (float)valueForScalarAnimationPath:(id)scalarAnimationPath atTime:(double)time defaultsTo:(float)to previousKeyValue:(float *)value nextKeyValue:(float *)value5;	// 0x8c5b1
+ (CGPoint)valueForPointAnimationPath:(id)pointAnimationPath atTime:(double)time defaultsTo:(CGPoint)to previousKeyPoint:(CGPoint *)point nextKeyPoint:(CGPoint *)point5;	// 0x8c9e9
@end
