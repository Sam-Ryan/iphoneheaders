/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPDCNEspressoMetalSingleton : NSObject {

	int _is_memory_tight;
	/*^block*/id _applicationKillBlock;

}

@property (assign) int is_memory_tight;                          //@synthesize is_memory_tight=_is_memory_tight - In the implementation block
@property (nonatomic,copy) id applicationKillBlock;              //@synthesize applicationKillBlock=_applicationKillBlock - In the implementation block
+(id)shared;
-(void)dealloc;
-(id)init;
-(void)setApplicationKillBlock:(id)arg1 ;
-(int)is_memory_tight;
-(void)setIs_memory_tight:(int)arg1 ;
-(id)applicationKillBlock;
@end

