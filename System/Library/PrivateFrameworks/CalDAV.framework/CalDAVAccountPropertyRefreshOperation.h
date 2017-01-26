/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVOperation.h>

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {

	BOOL _fetchPrincipalSearchProperties;

}

@property (assign,nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate; 
@property (assign,nonatomic) BOOL fetchPrincipalSearchProperties;                            //@synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties - In the implementation block
-(BOOL)fetchPrincipalSearchProperties;
-(void)setFetchPrincipalSearchProperties:(BOOL)arg1 ;
-(void)refreshProperties;
-(void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2 ;
@end

