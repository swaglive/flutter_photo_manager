#import <Foundation/Foundation.h>

@protocol PMResultHandler <NSObject>

- (void)replyError:(NSString *)errorCode;

- (void)replyWithError:(NSError *)error;

- (void)reply:(id)obj;

- (void)notImplemented;

- (BOOL)isReplied;

@end