/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlayerMediaItemChangeReason.h>

@protocol IKJSPlayerMediaItemChangeReason <JSExport>
@property (readonly) long long UNKNOWN; 
@property (readonly) long long PLAYED_TO_END; 
@property (readonly) long long FORWARDED_TO_END; 
@property (readonly) long long ERRORED; 
@property (readonly) long long PLAYLIST_CHANGED; 
@property (readonly) long long USER_INITIATED; 
@required
-(long long)UNKNOWN;
-(long long)PLAYED_TO_END;
-(long long)FORWARDED_TO_END;
-(long long)ERRORED;
-(long long)PLAYLIST_CHANGED;
-(long long)USER_INITIATED;

@end


@interface IKJSPlayerMediaItemChangeReason : IKJSObject <IKJSPlayerMediaItemChangeReason>

@property (readonly) long long UNKNOWN; 
@property (readonly) long long PLAYED_TO_END; 
@property (readonly) long long FORWARDED_TO_END; 
@property (readonly) long long ERRORED; 
@property (readonly) long long PLAYLIST_CHANGED; 
@property (readonly) long long USER_INITIATED; 
-(id)init;
-(long long)UNKNOWN;
-(long long)PLAYED_TO_END;
-(long long)FORWARDED_TO_END;
-(long long)ERRORED;
-(long long)PLAYLIST_CHANGED;
-(long long)USER_INITIATED;
@end

