/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDD;

@interface CDDBacklightMonitor : NSObject {

	CDD* cdd;
	int displaytoken;

}

@property (nonatomic,retain) CDD * cdd; 
@property (assign,nonatomic) int displaytoken; 
-(CDD *)cdd;
-(id)initWithCDDinstance:(id)arg1 ;
-(void)dumpLight;
-(void)setCdd:(CDD *)arg1 ;
-(int)displaytoken;
-(void)setDisplaytoken:(int)arg1 ;
-(void)dumpAll;
@end
