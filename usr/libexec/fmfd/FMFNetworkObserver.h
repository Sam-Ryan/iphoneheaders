/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMFNetworkObserver : NSObject {

	BOOL _isReachable;

}

@property (nonatomic,readonly) BOOL isNetworkReachable; 
@property (assign,nonatomic) BOOL isReachable;                       //@synthesize isReachable=_isReachable - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isReachable;
-(BOOL)isNetworkReachable;
-(void)_reportReachabilityChange:(id)arg1 ;
-(void)setIsReachable:(BOOL)arg1 ;
@end

