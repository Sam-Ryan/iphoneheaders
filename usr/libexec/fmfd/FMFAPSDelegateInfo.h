/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMFAPSDelegate;
@class NSString;

@interface FMFAPSDelegateInfo : NSObject {

	NSString* _topic;
	id<FMFAPSDelegate> _delegate;

}

@property (nonatomic,retain) NSString * topic;                                //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic,__weak) id<FMFAPSDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<FMFAPSDelegate>)arg1 ;
-(id<FMFAPSDelegate>)delegate;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
@end
