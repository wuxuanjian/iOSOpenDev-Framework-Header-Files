/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */




@protocol ADSessionDelegate <NSObject>
- (void)assistantSessionConnectionDidReset:(id)assistantSessionConnection;
- (BOOL)assistantSessionShouldRestartConnectionOnWiFi:(id)assistantSession;
- (void)assistantSession:(id)session receivedError:(id)error;
- (void)assistantSession:(id)session receivedCommand:(id)command;
@end

