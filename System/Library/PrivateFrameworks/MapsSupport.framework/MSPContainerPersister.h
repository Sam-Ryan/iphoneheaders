/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPContainerPersisterDelegate;
@interface MSPContainerPersister : NSObject {

	id<MSPContainerPersisterDelegate> _delegate;
	long long _duplicatesPolicy;

}

@property (assign,nonatomic,__weak) id<MSPContainerPersisterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long duplicatesPolicy;                                   //@synthesize duplicatesPolicy=_duplicatesPolicy - In the implementation block
-(void)setDelegate:(id<MSPContainerPersisterDelegate>)arg1 ;
-(id<MSPContainerPersisterDelegate>)delegate;
-(void)fetchContentsWithCompletion:(/*^block*/id)arg1 ;
-(long long)duplicatesPolicy;
-(void)commitEditedContents:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

