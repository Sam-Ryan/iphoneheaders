/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaStream/MediaStream-Structs.h>
@class MSAlertManager, NSString;

@interface MSAMNotificationInfo : NSObject {

	MSAlertManager* _owner;
	NSString* _personID;
	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _runLoopSource;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic,__weak) MSAlertManager * owner;                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * personID;                                 //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSource; 
@property (assign,nonatomic) CFUserNotificationRef userNotification; 
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)info;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(MSAlertManager *)owner;
-(void)setOwner:(MSAlertManager *)arg1 ;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
-(CFRunLoopSourceRef)runLoopSource;
-(void)setRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(CFUserNotificationRef)userNotification;
@end

