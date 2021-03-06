/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/DOMObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMMediaList : DOMObject {
}
@property(readonly, assign) unsigned length;	// G=0x33eab5; 
@property(copy) NSString *mediaText;	// G=0x33f089; S=0x33ef41; 
- (void)dealloc;	// 0x33eae1
- (void)finalize;	// 0x33f1d5
// declared property getter: - (id)mediaText;	// 0x33f089
// declared property setter: - (void)setMediaText:(id)text;	// 0x33ef41
// declared property getter: - (unsigned)length;	// 0x33eab5
- (id)item:(unsigned)item;	// 0x33edf1
- (void)deleteMedium:(id)medium;	// 0x33eca9
- (void)appendMedium:(id)medium;	// 0x33eb61
@end
