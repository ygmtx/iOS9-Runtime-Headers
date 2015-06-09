/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSXPCMessage : NSObject {
    int  _invalidated;
    NSObject<OS_xpc_object> * _message;
    int  _replied;
    id /* block */  _replyHandler;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

// BSXPCMessage (null)

+ (id)message:(long long)arg1 withPacker:(id /* block */)arg2;
+ (id)message:(long long)arg1 withPacker:(id /* block */)arg2 replyHandler:(id /* block */)arg3 replyQueue:(id)arg4;
+ (const char *)messageTypeKey;
+ (id)messageWithPacker:(id /* block */)arg1 replyHandler:(id /* block */)arg2 replyQueue:(id)arg3;
+ (void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(id /* block */)arg3;
+ (void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(id /* block */)arg3 replyHandler:(id /* block */)arg4 replyQueue:(id)arg5;
+ (void)sendMessageWithPacker:(id /* block */)arg1 toConnection:(id)arg2;
+ (void)sendMessageWithPacker:(id /* block */)arg1 toConnection:(id)arg2 replyHandler:(id /* block */)arg3 replyQueue:(id)arg4;

- (void)dealloc;
- (void)forcefullyInvokeReplyHandler:(id)arg1;
- (id)initWithMessage:(long long)arg1 packer:(id /* block */)arg2 replyHandler:(id /* block */)arg3 replyQueue:(id)arg4;
- (id)initWithMessage:(id)arg1 replyHandler:(id /* block */)arg2 replyQueue:(id)arg3;
- (id)initWithMessagePacker:(id /* block */)arg1 replyHandler:(id /* block */)arg2 replyQueue:(id)arg3;
- (void)sendToConnection:(id)arg1;

@end