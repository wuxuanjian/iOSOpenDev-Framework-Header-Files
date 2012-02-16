/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <ProtocolBuffer/PBDataReader.h>

@class NSInputStream;

@interface PBStreamReader : PBDataReader {
	NSInputStream *_stream;	// 20 = 0x14
}
@property(retain) NSInputStream *stream;	// G=0x5529; S=0x553d; @synthesize=_stream
+ (id)readProtoBuffersOfClass:(Class)aClass fromFile:(id)file error:(id *)error;	// 0x52e1
// declared property setter: - (void)setStream:(id)stream;	// 0x553d
// declared property getter: - (id)stream;	// 0x5529
- (BOOL)seekToOffset:(unsigned)offset;	// 0x52c5
- (id)readBytes:(unsigned)bytes;	// 0x5231
- (int)read:(const char *)read maxLength:(unsigned)length;	// 0x51a1
- (id)readProtoBuffer;	// 0x5151
- (void)dealloc;	// 0x510d
- (id)initWithStream:(id)stream;	// 0x50ad
@end